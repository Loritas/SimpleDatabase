/*
 * @Author: Loritas 2223292817@qq.com
 * @Date: 2022-08-14 04:43:08
 * @LastEditors: Loritas 2223292817@qq.com
 * @LastEditTime: 2022-08-14 05:04:49
 * @FilePath: \c\SimpleDatabase\lib\reader.h
 * @Description: 
 * Copyright (c) 2022 by Loritas 2223292817@qq.com, All Rights Reserved. 
 */
#ifndef __READER_H__
#define __READER_H__
#include <stdio.h>
#include <sys/types.h>

/**
 * @brief input struct
 * 
 */
typedef struct {
    char* buffer;
    size_t buffer_length;
    ssize_t input_length; // included by types.h
} InputBuffer;

/**
 * @brief create an new input_buffer
 * 
 * @return InputBuffer*: an object of InputBuffer
 */
InputBuffer* new_input_buffer();

/**
 * @brief read data from user
 * 
 * @param inputBuffer: store data
 */
void read_input(InputBuffer* inputBuffer);

void close_input_buffer(InputBuffer* inputBuffer);

void print_prompt() { printf("db > "); }

#endif