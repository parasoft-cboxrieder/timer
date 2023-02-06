#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/timer/driver.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/timer/driver.c");

EXTERN_C_LINKAGE void TestSuite_driver_c_5b85702b_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_driver_c_5b85702b_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_driver_c_5b85702b);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_driver_c_5b85702b_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_driver_c_5b85702b_test_main_1);
        CPPTEST_TEST(TestSuite_driver_c_5b85702b_test_main_loop_1);
        CPPTEST_TEST(TestSuite_driver_c_5b85702b_test_print_menu_get_action_1);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_driver_c_5b85702b_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_driver_c_5b85702b_test_main_1(void);
void TestSuite_driver_c_5b85702b_test_main_loop_1(void);
void TestSuite_driver_c_5b85702b_test_print_menu_get_action_1(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_driver_c_5b85702b);

void TestSuite_driver_c_5b85702b_testSuiteSetUp(void);
void TestSuite_driver_c_5b85702b_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_driver_c_5b85702b_testSuiteTearDown(void);
void TestSuite_driver_c_5b85702b_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_driver_c_5b85702b_setUp(void);
void TestSuite_driver_c_5b85702b_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_driver_c_5b85702b_tearDown(void);
void TestSuite_driver_c_5b85702b_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_main_1 */
/* CPPTEST_TEST_CASE_CONTEXT int main(void) */
void TestSuite_driver_c_5b85702b_test_main_1()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        int _return  = main();
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_main_1 */

/* CPPTEST_TEST_CASE_BEGIN test_main_loop_1 */
/* CPPTEST_TEST_CASE_CONTEXT void main_loop(void) */
void TestSuite_driver_c_5b85702b_test_main_loop_1()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        main_loop();
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_main_loop_1 */

/* CPPTEST_TEST_CASE_BEGIN test_print_menu_get_action_1 */
/* CPPTEST_TEST_CASE_CONTEXT int print_menu_get_action(void) */
void TestSuite_driver_c_5b85702b_test_print_menu_get_action_1()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        int _return  = print_menu_get_action();
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_print_menu_get_action_1 */
