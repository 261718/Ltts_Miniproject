#include "unity.h"
#include <calculator_operations.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add_student(void);
void test_search_student(void);
void test_mod_student(void);
void test_delete_student(void);
void test_get_password(void)

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add_student);
  RUN_TEST(test_search_student);
  RUN_TEST(test_mod_student);
  RUN_TEST(test_delete_student);
  RUN_TEST(test_get_password);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void get_password(void) {
  TEST_ASSERT_EQUAL("sow", get_password("sow"));
  //TEST_ASSERT_EQUAL(-10, add(10, -20));
  //TEST_ASSERT_EQUAL(-30, add(-10, -20));
  //TEST_ASSERT_EQUAL(10, add(-10, 20));
}
//void test_add_t(void) {
 
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1500, add(750, 7500));
//}
//void test_subtract(void) {
  //TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1, subtract(1000, 900));
//}

//void test_multiply(void) {
  //TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(2, multiply(2, 5));
//}

//void test_divide(void) {
  //TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(3, divide(2, 2));
//}
