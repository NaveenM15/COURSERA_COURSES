/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief Header for statistical analytics on a dataset.
 *
 * This header file provides declarations for functions to analyze an array of
 * unsigned char data items and report analytics on the maximum, minimum, mean,
 * and median of the data set, as well as functions to reorder this data set
 * from large to small. All statistics are rounded down to the nearest integer.
 *
 * @author Naveen M
 * @date February 24, 2025
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
unsigned int swap32(unsigned int word);
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154, 8, 194, 2, 6,
                               114, 88, 45, 76, 123, 87, 25, 23,
                               200, 122, 150, 90, 92, 87, 177, 244,
                               201, 6, 12, 60, 8, 2, 5, 67,
                               7, 87, 250, 230, 99, 3, 100, 90 };

  /* Call the print_array function to print the unsorted array */
  print_array(test, SIZE);

  /* Call the sort_array function to sort and print the sorted array */
  // sort_array(test, SIZE);

  /* Call the print_statistics function to print the statistics */
  print_statistics(test, SIZE);

  unsigned int originalValue = 0x12345678; // Example 32-bit integer
  unsigned int reversedValue = swap32(originalValue);
  
  printf("Original value: 0x%X\n", originalValue);
  printf("Reversed value: 0x%X\n", reversedValue);

}

void print_statistics(unsigned char *array, unsigned int length) {
  unsigned char min = find_minimum(array, length);
  unsigned char max = find_maximum(array, length);
  unsigned char mean = find_mean(array, length);
  unsigned char median = find_median(array, length);

  printf("Minimum: %d\n", min);
  printf("Maximum: %d\n", max);
  printf("Mean: %d\n", mean);
  printf("Median: %d\n", median);
}

void print_array(unsigned char *array, unsigned int length) {
  printf("Array: ");
  for (unsigned int i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

unsigned char find_median(unsigned char *array, unsigned int length) {
  sort_array(array, length);
  if (length % 2 == 0) {
    return (array[length / 2 - 1] + array[length / 2]) / 2;
  } else {
    return array[length / 2];
  }
}

unsigned char find_mean(unsigned char *array, unsigned int length) {
  unsigned int sum = 0;
  for (unsigned int i = 0; i < length; i++) {
    sum += array[i];
  }
  return sum / length;
}

unsigned char find_maximum(unsigned char *array, unsigned int length) {
  unsigned char max = array[0];
  for (unsigned int i = 1; i < length; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
}

unsigned char find_minimum(unsigned char *array, unsigned int length) {
  unsigned char min = array[0];
  for (unsigned int i = 1; i < length; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }
  return min;
}

void sort_array(unsigned char *array, unsigned int length) {
  // Sorting the array from largest to smallest
  for (unsigned int i = 0; i < length; i++) {
    for (unsigned int j = i + 1; j < length; j++) {
      if (array[i] > array[j]) {
        unsigned char temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  // Printing the sorted array
  printf("Sorted Array: ");
  for (unsigned int i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }
  printf("\n"); // New line after printing all elements
}

unsigned int swap32(unsigned int word) {
  unsigned int reversed = ((word >> 24) & 0xff) | // Move byte 3 to byte 0
                          ((word << 8) & 0xff0000) | // Move byte 1 to byte 2
                          ((word >> 8) & 0xff00) | // Move byte 2 to byte 1
                          ((word << 24) & 0xff000000); // Move byte 0 to byte 3
  return reversed;
}