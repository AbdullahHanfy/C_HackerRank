/*
 * Sum_of_Digits_of_a_Five_Digit_Number.c
 *
 *  Created on: Oct 12, 2021
 *      Author: Abdullah Hanfy
 */

/*
 *
 * Task
 * Given a five digit integer, print the sum of its digits.
 *
 * */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int n;
	scanf("%d", &n);
	//Complete the code to calculate the sum of the five digits on n.
	int sum = 0,digit;
	while(n!=0)
	{
		digit = n % 10;
		sum += digit;
		n /= 10;
	}
	printf("%d \n",sum);
	return 0;
}
