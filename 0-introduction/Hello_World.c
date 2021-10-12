/*
 * Hello_World.c
 *
 *  Created on: Oct 11, 2021
 *      Author: Abdullah Hanfy
 */


/* Task
 * This challenge requires you to print Hello World! on a single line,
 * and then print the already provided input string to stdout.
 * If you are not familiar with C,
 * you may want to read about the printf() command.*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    printf("%s\n",s);
    return 0;
}

