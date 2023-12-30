#include "stringalgo.hpp"


/// <summary>
/// Array of spelled digits from 1 ('one') to 9 ('nine')
/// </summary>
std::array<std::string, 9> digitarray = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

/// <summary>
/// Array of numbers from 1 to 9
/// </summary>
std::array<int32_t, 9> intarray = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };


int32_t find_digit(std::string& line, Direction direction, int32_t& pos) {
   int32_t digit = -1;
   bool found = false;
   if (direction == Direction::Forward) {
      for (auto i = 0u; i < line.length() - 1; i++) {
         digit = static_cast<int32_t>(line[i]) - 48;
         if (digit >= 0 && digit <= 9) {
            pos = i;
            found = true;
            break;
         }
      }
   }

   if (direction == Direction::Backward) {
      for (int32_t i = line.length() - 1; i >= 0; i--) {
         digit = static_cast<int32_t>(line[i]) - 48;
         if (digit >= 0 && digit <= 9) {
            pos = i;
            found = true;
            break;
         }
      }
   }

   if (found) {
      return digit;
   }
   else {
      return -1;
   }
}


int32_t find_spelled_digit(std::string& line, Direction direction, int32_t& pos) {
   int32_t digit = 0;
   bool found = false;

   if (direction == Direction::Forward) {
      std::string::size_type minpos = std::string::npos;
      for (std::size_t i = 0; i < digitarray.size(); i++) {
         std::string::size_type begin = line.find(digitarray[i]);
         if (begin != std::string::npos) {
            if (begin < minpos) {
               found = true;
               minpos = begin;
               pos = minpos;
               digit = intarray[i];
            }
         }
      }
   }

   if (direction == Direction::Backward) {
      std::string::size_type maxpos = std::string::npos;
      for (std::size_t i = 0; i < digitarray.size(); i++) {
         std::string::size_type begin = line.find(digitarray[i]);
         if (begin != std::string::npos) {
            if (maxpos == std::string::npos) {
               found = true;
               maxpos = begin;
               pos = maxpos;
               digit = intarray[i];
            }
            else {
               if (begin > maxpos) {
                  maxpos = begin;
                  pos = maxpos;
                  digit = intarray[i];
               }
            }
         }
      }
   }

   if (found) {
      return digit;
   }
   else {
      return -1;
   }
}
