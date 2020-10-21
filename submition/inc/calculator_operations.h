/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int add(int operand1, int operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int subtract(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
int multiply(int operand1, int operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int divide(int operand1, int operand2);

/**
* finds the greater of two operands
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 > operand2
*/
int greater(int operand1, int operand2);

/**
* finds the lesser of two operands
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 < operand2
*/
int lesser(int operand1, int operand2);

/**
* finds the andgate of two operands
* @param[in] operand1 
* @param[in] operand2 
* @return boolean value of the operand1 && operand2
*/
int andgate(int operand1, int operand2);

/**
* finds the orgate of two operands
* @param[in] operand1 
* @param[in] operand2 
* @return booleanr value of the operand1 || operand2
*/
int orgate(int operand1, int operand2);

/**
* finds the nandgate of two operands
* @param[in] operand1 
* @param[in] operand2 
* @return boolean value of the operand1 nand operand2
*/
int nandgate(int operand1, int operand2);

/**
* finds the norgate of two operands
* @param[in] operand1 
* @param[in] operand2 
* @return boolean value of the operand1 nor operand2
*/
int norgate(int operand1, int operand2);

/**
* finds the norgate of two operands
* @param[in] operand1 
* @param[in] operand2 
* @return boolean value of the operand1 operand2 operand3
*/
int adder3bit(int operand1, int operand2, int operand3);

/**
* finds the norgate of two operands
* @param[in] operand1 
* @param[in] operand2 
* @return boolean value of the operand1 operand2 operand3
*/
int subtractor3bit(int operand1, int operand2, int operand3);

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
