/*
 * @Author: your name
 * @Date: 2021-06-15 16:13:50
 * @LastEditTime: 2021-06-16 14:27:17
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /gtest_demo/gtest_demo1.cc
 */

#include "gtest/gtest.h"
#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

TEST(example, add)
{
    int _r = add(1, 2);
    ASSERT_EQ(_r, 3);

    _r = add(2, 2);
    ASSERT_EQ(_r, 0);
}

TEST(example, sub)
{
    int _r = sub(1, 2);
    ASSERT_EQ(_r, -1);

    _r = sub(2, 2);
    ASSERT_EQ(_r, 0);
}

TEST(example, bad)
{
    int _r = sub(1, 2);
    ASSERT_EQ(_r, 0);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}