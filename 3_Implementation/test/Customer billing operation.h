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

void test_display(void) {
 
  /* Dummy fail*/
  
}
void test_edit_customer(void) {
  
  
  /* Dummy fail*/
  
}

void test_create_item(void) {
  
  
  /* Dummy fail*/
  
}

void test_update_item(void) {
  
  
  /* Dummy fail*/
  
}
