// adventofcode2023.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <vector>
#include <string>


constexpr uint32_t max_line_length = 1024u;


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


int32_t twodigitnumber(std::string& line) {
   int32_t digit1 = 0;
   int32_t digit2 = 0;
   
   for (auto i = 0u; i < line.length(); i++) {
      int32_t cbegin = static_cast<int32_t>(line[i]) - 48;
      if (cbegin >= 0 && cbegin <= 9) {
         digit1 = cbegin;
         break;
      }
   }

   for (auto i = line.length() - 1; i >= 0; i--) {
      int32_t cend = static_cast<int32_t>(line[i]) - 48;
      if (cend >= 0 && cend <= 9) {
         digit2 = cend;
         break;
      }
   }

   return digit1 * 10 + digit2;
}


int main() {
    std::cout << "Advent of Code 2023\n";

    std::cout << "Day 1\n";

    std::vector<std::string> lines; 
    int32_t res = readline(lines);
    for (std::string& line : lines) {
       std::cout << line;
    }
    int32_t sum = 0;
    for (std::string& line : lines) {
       sum += twodigitnumber(line);
    }
    
    std::cout << "Sum: " << sum << std::endl;
}
