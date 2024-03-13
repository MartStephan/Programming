// adventofcode2023.cpp

#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <cassert>
#include <cstdint>

#include "fileio.h"
#include "stringalgo.hpp"




int32_t map_reduce(int32_t digit, int32_t dpos, int32_t spelled, int32_t spos, Direction direction) {
   int32_t result = 0;

   if (digit == -1) {
      return spelled;
   }

   if (spelled == -1) {
      return digit;
   }

   if (direction == Direction::Forward) {
      if (dpos < spos) { result = digit; }
      else { result = spelled; }
   }
   else {
      if (dpos > spos) { result = digit; }
      else { result = spelled; }
   }

   return result;
}


int main() {
   /*
   std::cout << "Advent of Code 2023\n";

   std::cout << "Day 1\n";

   std::vector<std::string> lines;
   int32_t res = readline(lines);
   for (std::string& line : lines) {
      std::cout << line;
   }
   */

   /*
   /// Part One
   std::cout << "\nPart One\n";
   int32_t sum = 0;
   int32_t pos = 0;
   for (std::string& line : lines) {
      int32_t tens = find_digit(line, Direction::Forward, pos);
      int32_t unit = find_digit(line, Direction::Backward, pos);
      sum += tens * 10 + unit;
   }
   std::cout << "Sum: " << sum << std::endl;
   */

   /// Part Two
   /*
   std::cout << "\nPart Two\n";
   int32_t sum = 0;
   int32_t pos_digit = 0;
   int32_t pos_spelled = 0;
   for (std::string& line : lines) {
      int32_t tens_digit = find_digit(line, Direction::Forward, pos_digit);
      int32_t tens_spelled = find_spelled_digit(line, Direction::Forward, pos_spelled);
      int32_t tens = map_reduce(tens_digit, pos_digit, tens_spelled, pos_spelled, Direction::Forward);

      int32_t unit_digit = find_digit(line, Direction::Backward, pos_digit);
      int32_t unit_spelled = find_spelled_digit(line, Direction::Backward, pos_spelled);
      int32_t unit = map_reduce(unit_digit, pos_digit, unit_spelled, pos_spelled, Direction::Backward);

      std::cout << tens_digit << " " << unit_digit << '\n';
      std::cout << tens_spelled << " " << unit_spelled << '\n';
      std::cout << tens << " " << unit << '\n';
      sum += (tens * 10 + unit);

      std::cout << std::endl;
   }
   std::cout << "Sum digit: " << sum << '\n';
   */

   // digits to strings
   std::vector<unsigned char> v{ 0xBAu, 0xCDu, 0x01u, 0xF0u, 0x99u, 0x1u };
   std::string digit2string = digit_to_string(v, true);
   std::cout << "result vec to str " << digit2string << std::endl;
   assert(digit2string == "BACD01F09901");

   std::array<unsigned char, 6> a{ 1, 2, 3, 4, 5, 6 };
   digit2string = digit_to_string(a, true);
   std::cout << "result array to str " << digit2string << std::endl;

   // string to digits
   std::vector<unsigned char> string2digit = string_to_digit("BAADF00D42");
   for (unsigned char &c: string2digit) {
      std::cout << c << " ";
   }
   std::cout << std::endl;

   return 0;
}

