#include "fileio.h"

constexpr uint32_t max_line_length = 1024u;


int32_t readline(std::vector<std::string>& input) {
   FILE* file;
   errno_t res = fopen_s(&file, "day1_test2.txt", "r");
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
