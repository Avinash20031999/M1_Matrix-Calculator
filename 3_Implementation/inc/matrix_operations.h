/**
 * File matrix_operations.h
 * A program to calculate various operations on a matrix
 * Version 1.0
 * Date 25 Mar 2022
 */
#ifndef __MATRIX_OPERATIONS_H__
#define __MATRIX_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>


/**
 Enum for success or failure of test case
  
 */
typedef enum{SUCCESS=1,FAILURE=0}error_t;

/**
 A structure containing matrix elements 
 */
typedef struct{

float **matrix_1;
float **matrix_2;
float result;

}mat;

/**
 A function to allocate memory dynamically for the matrix to be inputted
 
float ** alloc_input_matrix(float **matrix, int n);

/**
 Dynamically allocate memory for matrix
 
 */
void dynamic_alloc_mat(float **matrix,int n);

/**
 To print the matrix on the screen
 
 */
void output_matrix(float **matrix,int n);

/**
 Free dynamically allocated memory space
 
 */
void free_matrix_structure(mat *m);


error_t add_matrices(float **matrix1,float **matrix2,int n);

/**
 To find the difference of the matrices
 
 */
error_t subtract_matrices(float **matrix1,float **matrix2, int n);
/**
 To find the product of the matrices
  
 */
error_t product_matrices(float **matrix1,float **matrix2, int n);
/**
 To find the determinant of the matrix
  
 */
float determinant(float **matrix,int k);

/**
 To find the transpose of a matrix
  
 */
error_t transpose(float **matrix,int n);

/**
To find the inverse of a matrix
  
 */
error_t inverse(float **num, int f);

/**
 Power of minus one
  
 */
float power(int exp);



#endif  /* #define __MATRIX_OPERATIONS_H__ */
