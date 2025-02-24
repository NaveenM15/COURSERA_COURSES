/******************************************************************************
 * Author: Naveen M
 * Date: February 24, 2025
 *
 * Project: Statistical Analytics on a Dataset
 * Description: This project involves creating a C program that analyzes an array
 * of unsigned char data items and reports analytics on the maximum, minimum, mean,
 * and median of the data set. The program also includes a function to reorder the
 * data set from large to small and a function to perform a byte swap on a 32-bit
 * integer. All statistics are rounded down to the nearest integer.
 *
 * The program is structured into several functions, each responsible for a specific
 * task, including statistical calculation, data sorting, and byte swapping. The main
 * function serves as the entry point of the program, orchestrating the flow of data
 * through these functions and printing the results to the console.
 *
 * The 'sort_array' function sorts the data array in descending order, ensuring the
 * largest element is at the start and the smallest at the end. The 'print_array'
 * function displays the contents of the array, both before and after sorting, to
 * provide a visual confirmation of the sorting operation.
 *
 * Statistical functions, such as 'find_minimum', 'find_maximum', 'find_mean', and
 * 'find_median', each calculate their respective statistics and return the results
 * to be printed by the 'print_statistics' function.
 *
 * Additionally, the 'swap32' function is implemented to demonstrate byte swapping,
 * a common operation in embedded systems to handle endianness compatibility issues.
 * The function takes a 32-bit unsigned integer and reverses the order of its bytes,
 * showcasing the manipulation of data at the byte level.
 *
 * This program is part of the coursework for an embedded systems class, intended to
 * provide hands-on experience with low-level data processing and manipulation in C.
 * It serves as an introduction to system programming concepts and embedded software
 * development practices.
 *
 *****************************************************************************/