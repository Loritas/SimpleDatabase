/*
 * @Author: Loritas 2223292817@qq.com
 * @Date: 2022-08-14 04:50:46
 * @LastEditors: Loritas 2223292817@qq.com
 * @LastEditTime: 2022-08-14 05:21:45
 * @FilePath: \c\SimpleDatabase\core\reader.c
 * @Description: 
 * Copyright (c) 2022 by Loritas 2223292817@qq.com, All Rights Reserved. 
 */
#include <stdlib.h>
#include "../lib/reader.h"

InputBuffer* new_input_buffer()
{
    InputBuffer* inputBuffer = (InputBuffer*)malloc(sizeof(InputBuffer));
    inputBuffer->buffer = NULL;
    inputBuffer->buffer_length = 0;
    inputBuffer->input_length = 0;

    return inputBuffer;
}

void read_input(InputBuffer* inputBuffer)
{
    // getline() is a function in Linux, may I should close the fucking windows first
    ssize_t bytesRead = getline(&(inputBuffer->buffer), &(inputBuffer->buffer_length), stdin);

    if (bytesRead <= 0)
    {
        printf("Error reading input\n");
        exit(EXIT_FAILURE);
    }

    // ignore trailing new line
    inputBuffer->input_length = bytesRead - 1;
    inputBuffer->buffer[bytesRead-1] = 0;
}

void close_input_buffer(InputBuffer* inputBuffer) {
    free(inputBuffer->buffer);
    free(inputBuffer);
}