/*
 * @Author: Loritas 2223292817@qq.com
 * @Date: 2022-08-14 04:41:15
 * @LastEditors: Loritas 2223292817@qq.com
 * @LastEditTime: 2022-08-14 05:15:53
 * @FilePath: \c\SimpleDatabase\main.c
 * @Description: 
 * Copyright (c) 2022 by Loritas 2223292817@qq.com, All Rights Reserved. 
 */
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#include "./lib/reader.h"

int main(int argc, char const *argv[])
{
    InputBuffer* inputBuffer = new_input_buffer();
    while (true)
    {
        print_prompt();
        read_input(inputBuffer);

        if (strcmp(inputBuffer->buffer, ".exit") == 0)
        {
            close_input_buffer(inputBuffer);
            exit(EXIT_SUCCESS);
        } 
        else
        {
            printf("Unrecognized command '%s'.\n", inputBuffer->buffer);
        }
    }
    
    return 0;
}
