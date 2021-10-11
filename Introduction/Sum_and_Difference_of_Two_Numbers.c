/*
 * Playing_With_Characters.c
 *
 *  Created on: Oct 11, 2021
 *      Author: Abdullah Hanfy
 */


/* Task
 * Your task is to take two numbers of int data type,
 * two numbers of float data type as input and output their sum:
 *
 * Declare 4 variables: two of type int and two of type float.
 * Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below)
 * and initialize your  4 variables.
 * Use the + and  - operator to perform the following operations:
 * Print the sum and difference of two int variable on a new line.
 * Print the sum and difference of two float variable rounded to one decimal place on a new line.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int intNum1,intNum2;
    float floatNum1,floatNum2;

    scanf("%d %d",&intNum1,&intNum2);
	scanf("%f %f",&floatNum1,&floatNum2);


    printf("%d %d\n",intNum1+intNum2,intNum1-intNum2);
    printf("%.1f %.1f\n",floatNum1+floatNum2,floatNum1-floatNum2);



    return 0;
}

