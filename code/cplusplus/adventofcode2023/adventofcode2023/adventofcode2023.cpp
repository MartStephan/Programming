// adventofcode2023.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <vector>
#include <string>
#include <array>


constexpr uint32_t max_line_length = 1024u;
enum class Direction { Forward, Backward };
std::array<std::string, 9> digitarray = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
std::array<int32_t, 9> intarray = {1, 2, 3, 4, 5, 6, 7, 8, 9};


int readline(std::vector<std::string>& input) {
   FILE* file;
   errno_t res = fopen_s(&file, "day1.txt", "r");
   if (file == nullptr) {
      perror("Error opening the file");
      return 1;
   }

   char line[max_line_length];

   while (fgets(line, max_line_length, file) != NULL) {
      int i = 0;
      // Use strtok to split the line into fields
      char* next_token;
      char* token = strtok_s(line, ",", &next_token);
      while (token != NULL) {
         // Process each field (token) here
         input.push_back(token);
         token = strtok_s(NULL, ",", &next_token);
      }
   }

   fclose(file);

   return 0;
}


int32_t find_digit(std::string& line, Direction direction, int32_t& pos) {
   int32_t digit = 0;
   if (direction == Direction::Forward) {
      for (auto i = 0u; i < line.length() - 1; i++) {
         digit = static_cast<int32_t>(line[i]) - 48;
         if (digit >= 0 && digit <= 9) {
            pos = i;
            break;
         }
      }
   }

   if (direction == Direction::Backward) {
      for (auto i = line.length() - 1; i != 0; i--) {
         digit = static_cast<int32_t>(line[i]) - 48;
         if (digit >= 0 && digit <= 9) {
            pos = i;
            break;
         }
      }
   }

   return digit;
}


/// <summary>
///  find spelled digit within a string or 0 if none found
/// </summary>
/// <param name="line"></param>
/// <param name="direction"></param>
/// <param name="pos"></param>
/// <returns></returns>
int32_t find_spelled_digit(std::string& line, Direction direction, int32_t& pos) {
   //std::cout << line;
   int32_t digit = 0;

   if (direction == Direction::Forward) {
      std::string::size_type minpos = std::string::npos;
      for (std::size_t i = 0; i < digitarray.size(); i++) {
         std::string::size_type begin = line.find(digitarray[i]);
         if (begin != std::string::npos) {
            if (begin < minpos) {
               minpos = begin;
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
               maxpos = begin;
               digit = intarray[i];
            }
            if (maxpos != std::string::npos) {
               if (begin > maxpos) {
                  maxpos = begin;
                  digit = intarray[i];
               }
            }
         }
      }
   }

   return digit;
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

    // Part Two
    std::cout << "\nPart Two\n";
    int32_t pos = 0;
    for (std::string& line : lines) {
       int32_t tens = find_spelled_digit(line, Direction::Forward, pos);
       int32_t unit = find_spelled_digit(line, Direction::Backward, pos);
       std::cout << tens << '\n';
       std::cout << unit << '\n';
    }
}
