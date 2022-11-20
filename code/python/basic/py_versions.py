#!/usr/bin/python

from typing import List

if __name__ == '__main__':
   # string formatting in python
   var = "boss"
   out_v2 = "hello %s" %(var)
   out_v3 = "hello {0}".format(var)
   out_v3_6 = f"hello {var}"

   print(out_v2)
   print(out_v3)
   print(out_v3_6)

   # underscores for literals
   einnahmen = 10_000_000.00
   address = 0xCAFE_F00D
   flags = 0b_0011_1111_0100_1110

   print(einnahmen)
   print(f'{address:x}')
   print(f'{flags:b}')

   # type annotations for variables
   name: str = "Hallo"
   meine_liste: List[int] = []
   meine_liste = [1, 3, 5, 7, 9, 11, 13]

   print(name)
   print(meine_liste)
   