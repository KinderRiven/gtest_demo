/*
 * @Author: your name
 * @Date: 2021-06-15 16:13:50
 * @LastEditTime: 2021-06-16 13:59:09
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

TEST(example, add)
{
    add(1, 2);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    return 0;
}