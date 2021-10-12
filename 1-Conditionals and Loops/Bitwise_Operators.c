/*
 * Bitwise_Operators.c
 *
 *  Created on: Oct 12, 2021
 *      Author: Abdullah Hanfy
 */


/*

 * Function Description
 * 	Complete the calculate_the_maximum function in the editor below.
 *
 * 	calculate_the_maximum has the following parameters:
 * 	int n: the highest number to consider
 * 	int k: the result of a comparison must be lower than this number to be considered Prints
 *
 * 	Print the maximum values for the and, or and xor comparisons, each on a separate line.

 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
	int max_and=0, max_or = 0, max_xor = 0,i,j;

	for(i=1;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(((i & j) > max_and) && ((i & j) < k ))
			{
				max_and = i & j ;
			}
			if(((i | j) > max_or) && ((i | j) < k ))
			{
				max_or = i | j ;
			}
			if(((i ^ j) > max_xor) && ((i ^ j) < k ))
			{
				max_xor = i ^ j ;
			}
		}
	}
	printf("%d \n",max_and);
	printf("%d \n",max_or);
	printf("%d \n",max_xor);

}

int main()
{
	int n, k;

	scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);

	return 0;
}

