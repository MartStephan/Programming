/************************************************************************
* Author: Martin Stephan <mstephan.mail@gmx.de>
* Date: 2023
* File: Modern C++ Multithreading.cpp
* 
* References:
*  Algorithmen in C, Robert Sedgewick, 1993
*  Die C++ Challenge, Marius Bancila, 2019
*  Multithreading in C++17 und C++20, Rainer Grimm, iX Mai 2017
*  https://www.programiz.com/dsa/quick-sort, accessed on 22-Nov-2023
* 
***********************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>

#include "multithreading_quicksort.hpp"


constexpr uint32_t max_line_length = 1024u;

std::vector<std::string> stations; 

void printStations() {
   for (std::string station: stations) {
      std::cout << station;
   }
   std::cout << std::endl;
}


/**
 * @brief Read German radio stations from local csv-file 
 */
int readcsv() {
   FILE* file;
   errno_t res = fopen_s(&file, "radiosender_sort.csv", "r");
   if (file == NULL) {
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
         stations.push_back(token);
         token = strtok_s(NULL, ",", &next_token);
      }
   }

   fclose(file);

   return 0;
}


/*
 * @brief Partition container content
 */
template <class RandomIt>
RandomIt partitionIter2(RandomIt first, RandomIt last) {

   // select the rightmost element as pivot
   auto pivot = *first;
   auto i = first + 1;
   auto j = last - 1;

   while (i <= j)
   {
      while (i <= j && *i <= pivot) i++;
      while (i <= j && *j > pivot) j--;
      if (i < j) std::iter_swap(i, j);
   }

   std::iter_swap(i - 1, first);

   return i - 1;
}


/**
* @brief @brief Quickort recursive Iterators
*/
template <class RandomIt>
void quickSortIter2(RandomIt first, RandomIt last) {
   if (first < last) {

      // find the pivot element such that
      auto pivot = partitionIter2(first, last);

      // recursive call on the left of pivot
      quickSortIter2(first, pivot);

      // recursive call on the right of pivot 
      quickSortIter2(pivot + 1, last);
   }
}


/*
 * @brief Function to swap elements
 */
void swap(std::string* a, std::string* b) {
   std::string temp = *a;
   *a = *b;
   *b = temp;
}


/*
 * @brief Function to rearrange array 
 */
int32_t partition(std::vector<std::string>& labels, int32_t low, int32_t high) {

   // select the rightmost element as pivot
   std::string pivot = labels[high];

   // pointer for greater element 
   int32_t i = (low - 1);

   // traverse each element of the array
   // compare them with the pivot
   for (int32_t j = low; j < high; j++) {
      if (labels[j] <= pivot) {

         // if element smaller than pivot is found
         // swap it with the greater element pointed by i 
         i++;

         // swap element at i with element at j
         swap(&labels[i], &labels[j]);
      }
   }

   // swap pivot with the greater element at i 
   swap(&labels[i + 1], &labels[high]);

   // return the partition point
   return (i + 1);
}


/**
* @brief Quickort recursive
*/
void quickSort(std::vector<std::string>& labels, int32_t low, int32_t high) {
   if (low < high) {

      // find the pivot element such that
      int32_t pivot = partition(labels, low, high);

      // recursive call on the left of pivot
      quickSort(labels, low, pivot - 1);

      // recursive call on the right of pivot 
      quickSort(labels, pivot + 1, high);
   }
}


int main() {
   
   int res = readcsv();
   printStations();
   if (res == 0) {
      //size_t size = stations.size();
      //quickSort(stations, 0, size - 1); 
      quickSortIter2(std::begin(stations), std::end(stations));
   }
   printStations();

   return res;
}
