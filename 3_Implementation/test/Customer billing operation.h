#include "unity.h"
#include <customer_billing.h>

/* Modify these two lines according to the project */
#include <customer_billing.h>
#define PROJECT_NAME    "Customer billing system"

/* Prototypes for all the test functions */
void create_customer();
void display();
void edit_customer();
void create_item();
void update_item();

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
  RUN_TEST(test_create_customer);
  RUN_TEST(test_display);
  RUN_TEST(test_edit_customer);
  RUN_TEST(test_create_item);
  RUN_TEST(test_update_item);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_create_customer(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
  TEST_ASSERT_EQUAL(-30, add(-10, -20));
  TEST_ASSERT_EQUAL(10, add(-10, 20));
}
void test_display(void) {
 
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1500, add(750, 7500));
}
void test_edit_customer(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}

void test_create_item(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(2, multiply(2, 5));
}

void test_update_item(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(3, divide(2, 2));
}
