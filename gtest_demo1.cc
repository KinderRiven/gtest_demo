/*
 * @Author: your name
 * @Date: 2021-06-15 16:13:50
 * @LastEditTime: 2021-06-15 18:27:02
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /gtest_demo/gtest_demo1.cc
 */

#include "gtest/gtest.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    printf("InitGoogleTest!\n");
    testing::InitGoogleTest(&argc, argv);
    return 0;
}