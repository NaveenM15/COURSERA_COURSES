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
 * @date  February 24, 2025
 *
 */

#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned integer as the size of the array.
 */
void print_statistics(unsigned char *array, unsigned int length);

/**
 * @brief Prints the array to the screen.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned integer as the size of the array.
 */
void print_array(unsigned char *array, unsigned int length);

/**
 * @brief Finds the median of the given array.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned integer as the size of the array.
 * @return The median value as an unsigned char.
 */
unsigned char find_median(unsigned char *array, unsigned int length);

/**
 * @brief Finds the mean of the given array.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned integer as the size of the array.
 * @return The mean value as an unsigned char.
 */
unsigned char find_mean(unsigned char *array, unsigned int length);

/**
 * @brief Finds the maximum value in the given array.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned integer as the size of the array.
 * @return The maximum value as an unsigned char.
 */
unsigned char find_maximum(unsigned char *array, unsigned int length);

/**
 * @brief Finds the minimum value in the given array.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned integer as the size of the array.
 * @return The minimum value as an unsigned char.
 */
unsigned char find_minimum(unsigned char *array, unsigned int length);

/**
 * @brief Sorts the array from largest to smallest.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned integer as the size of the array.
 */
void sort_array(unsigned char *array, unsigned int length);

#endif /* __STATS_H__ */