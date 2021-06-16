/*
 * @Author: your name
 * @Date: 2021-06-15 16:13:50
 * @LastEditTime: 2021-06-16 14:33:03
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
    return RUN_ALL_TESTS();
}