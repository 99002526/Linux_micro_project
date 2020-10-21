#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_greater(void);
void test_lesser(void);
void test_andgate(void);
void test_orgate(void);
void test_nandgate(void);
void test_norgate(void);
void test_adder3bit(void);
void test_subtractor3bit(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "greater", test_greater);
  CU_add_test(suite, "lesser", test_lesser);
  CU_add_test(suite, "andgate", test_lesser);
  CU_add_test(suite, "orgate", test_lesser);
  CU_add_test(suite, "nandgate", test_lesser);
  CU_add_test(suite, "norgate", test_lesser);
  CU_add_test(suite, "adder3bit", test_lesser);
  CU_add_test(suite, "subtractor3bit", test_lesser);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}

void test_greater(void) {
  CU_ASSERT(20 == greater(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(2 == greater(2, 20));
}

void test_lesser(void) {
  CU_ASSERT(10 == lesser(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(2 == lesser(2, 20));
}

void test_andgate(void) {
  CU_ASSERT(0 == andgate(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(-2 == andgate(1, 1));
}

void test_orgate(void) {
  CU_ASSERT(0 == orgate(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == orgate(1, 1));
}

void test_nandgate(void) {
  CU_ASSERT(0 == nandgate(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(-5 == nandgate(1, 1));
}

void test_norgate(void) {
  CU_ASSERT(0 == norgate(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(1 == norgate(1, 1));
}

void test_adder3bit(void) {
  CU_ASSERT(0 == adder3bit(1, 0, 1));
  
  /* Dummy fail*/
  CU_ASSERT(0 == adder3bit(1, 1, 1));
}

void test_subtractor3bit(void) {
  CU_ASSERT(1 == subtractor3bit(0, 0, 1));
  
  /* Dummy fail*/
  CU_ASSERT(0 == subtractor3bit(1, 1, 1));
}
