/*
 * Printing_Pattern_Using_Loops.c
 *
 *  Created on: Oct 12, 2021
 *      Author: Abdullah Hanfy
 */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    /*Equation to calculate size of 2D array*/
    /*if n = 3 ==> it should be an array[5][5]*/
    int size = (n*2) - 1;

    /*initial start to start looping and use it to build logic of pattern*/
    int start = 0;

    /*initial end with size -1 to control looping and use it to build logic of pattern*/
    int end = size -1;

    int arr[size][size],i,j;

    /*looping from n to 1*/
    while(n != 0)
    {
        for(i = start; i <= end; i++)
        {
            for(j = start; j <= end; j++)
            {
                if(i == start || i == end || j == start || j == end)
                {
                    arr[i][j] = n;
                }
            }
        }



        ++start;
        --end;
        --n;
    }
    for(i=0 ; i< size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
