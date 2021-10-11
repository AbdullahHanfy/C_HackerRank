/*
 * Functions_in_C.c
 *
 *  Created on: Oct 11, 2021
 *      Author: Abdullah Hanfy
 */



/* Task
 * Write a function int max_of_four(int a, int b, int c, int d)
 * which reads four arguments and returns the greatest of them.
 *
 * Note
 *
 * There is not built in max function in C.
 * Code that will be reused is often put in a separate function,
 * e.g. int max(x, y) that returns the greater of the two values.*/


#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d);

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    int max = a ;
    if(b>max)
    {
        max = b;
    }
    if(c>max)
    {
        max = c;
    }
    if(d>max)
    {
        max = d;
    }
    return max;
}

