/*
 * Pointers_in_C.c
 *
 *  Created on: Oct 11, 2021
 *      Author: Abdullah Hanfy
 */




/* Task
 * Complete the function void update(int *a,int *b).
 * It receives two integer pointers,
 * int* a and int* b.
 * Set the value of  a to their sum,
 * and  b to their absolute difference.
 * There is no return value,
 * and no return statement is needed.*/


#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int numa_a  = *a + *b;
    int numa_b;
    if(*b > *a)
    {
        numa_b = *b - *a;
    }
    else
    {
        numa_b = *a - *b;
    }
    *a = numa_a;
    *b = numa_b;

}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
