/*
 * @Author: your name
 * @Date: 2021-06-15 16:13:50
 * @LastEditTime: 2021-06-16 15:01:33
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /gtest_demo/gtest_demo1.cc
 */

#include "gtest/gtest.h"
#include <stdio.h>
#include <stdlib.h>

class TestClass : public testing::Test {
public:
    TestClass()
    {
        printf("TestClass()\n");
    }

    ~TestClass()
    {
        printf("~TestClass()\n");
    }

public:
    int Add(int a, int b)
    {
        return a + b;
    }

    int Sub(int a, int b)
    {
        return a - b;
    }
};

class Env : public testing::Environment {
public:
    // Override this to define how to set up the environment.
    void SetUp()
    {
        printf("Env SetUp\n");
    }

    // Override this to define how to tear down the environment.
    void TearDown()
    {
        printf("TearDown\n");
    }
};

TEST_F(TestClass, add)
{
    int _r = Add(2, 2);
    ASSERT_EQ(_r, 4);
}

TEST_F(TestClass, sub)
{
    int _r = Sub(2, 2);
    ASSERT_EQ(_r, 0);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    testing::Environment* _env = new Env();
    testing::AddGlobalTestEnvironment(_env);
    return RUN_ALL_TESTS();
}