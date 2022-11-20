#!/usr/bin/python

""" Example of a One-Time-Pad Cryptograhie """

import string
from secrets import token_bytes
from typing import Tuple

def random_key(length: int) -> int:
   # generate a random number with length 'length' by using 'token_bytes' from secrets
   random_bytestring: bytes = token_bytes(length)
   # this works as an int in Python can have any (arbitrary) length
   return int.from_bytes(random_bytestring, "big")

def encrypt_xor(message: str) -> Tuple[int, int]:
   """ One-Time-Pad encryption
   Returns the key and the encrypted message """
   # encode string as UTF-8 bytes object
   message_bytes: bytes = message.encode()
   key: int = random_key(len(message_bytes))
   message_ints: int = int.from_bytes(message_bytes, "big")
   # encrypt using XOR with key and message
   encrypted: int = message_ints ^ key 
   return key, encrypted

def decrypt_xor(key1: int, key2: int) -> str:
   """ One-Time-Pad decryption using XOR"""
   decrypted: int = key1 ^ key2
   bytestream: bytes = decrypted.to_bytes((decrypted.bit_length()+7) // 8, "big")
   # decode UTF-8 bytes back to a string
   return bytestream.decode()

def rot_13(message: str):
   """ This function replaces each letter in the input by 
   the letter 13 positions after it in the alphabet.
   This is a symmetric encryption and an example for a
   Caesar cipher. """
   result = ""
   for char in message:
      # ASCII table: 65: A ... 90: Z - 97: a ... 122: z
      if 65 <= ord(char) <= 90 or 97 <= ord(char) <= 122:
         # capitalized letters
         if 65 <= ord(char) <= 90:
            if ord(char) + 13 > 90:
               char = chr(ord(char) + 13 - 90 + 65 - 1)
            else:
               char = chr(ord(char) + 13)
         # lowercase letters
         else:
            if ord(char) + 13 > 122:
               char = chr(ord(char) + 13 - 122 + 97 - 1)
            else:
               char = chr(ord(char) + 13)
      else:
         pass

      result += char

   return result


if __name__ == '__main__':
   # chiffre - rotate-by-13
   enc = rot_13("hello")
   print("rot_13(hello) is ", enc)

   # chiffre - encrypt with one-time-pad using XOR
   key1, key2 = encrypt_xor("One Time Pad!")
   print("key:     ", key1)
   print("message: ", key2)

   # chiffre - decrypt using XOR
   msg: str = decrypt_xor(key1, key2)
   print("Message: ", msg)
