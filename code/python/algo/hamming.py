#!/usr/bin/python

def make_flag(bit_pos):
   """ This function creates a flag by setting a single bit inside a value.
   Ex1: MKFLAG(0) ---> 0000 0000 0000 0000 0000 0000 0000 0001 
   Ex1: MKFLAG(1) ---> 0000 0000 0000 0000 0000 0000 0000 0010 
   where bit_pos is the start position of the bit starting with bit 0."""
   return 1 << bit_pos

def extract_bit(bit_pos, bit_field):
   """ Extract specified number of bits from given value.
   bit_pos position of bit to get (starting with bit 0)
   bit_field bitfield from which to extract bits"""
   return bit_field & make_flag(bit_pos)


if __name__ == '__main__':
   hamming = 0
   for i in range(31,-1,-1):
       print("make_flag(", i, ") is ", make_flag(i))

       b1 = 7 & make_flag(i)
       b2 = 15 & make_flag(i)
       hamming += not(b1==b2)

   print("hamming distance ", hamming)
