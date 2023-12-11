// adventofcode2023.cpp

#include <iostream>
#include <vector>
#include <string>
#include <array>

#include "fileio.h"


enum class Direction { Forward, Backward };
std::array<std::string, 9> digitarray = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
std::array<int32_t, 9> intarray = {1, 2, 3, 4, 5, 6, 7, 8, 9};


/// <summary>
///  find numeric digit within a string or -1 if none found
/// </summary>
/// <param name="line"></param>
/// <param name="direction"></param>
/// <param name="pos"></param>
/// <returns></returns>
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


/// <summary>
///  find spelled digit within a string or -1 if none found
/// </summary>
/// <param name="line"></param>
/// <param name="direction"></param>
/// <param name="pos"></param>
/// <returns></returns>
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
    std::cout << "Advent of Code 2023\n";

    std::cout << "Day 1\n";

    std::vector<std::string> lines; 
    int32_t res = readline(lines);
    for (std::string& line : lines) {
       std::cout << line;
    }

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
}
