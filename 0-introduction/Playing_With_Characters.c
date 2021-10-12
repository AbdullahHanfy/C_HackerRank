/*
 * Playing_With_Characters.c
 *
 *  Created on: Oct 11, 2021
 *      Author: Abdullah Hanfy
 */

/*Task
 *
 * You have to print the character ch, in the first line.
 * Then print  s in next line.
 * In the last line print the sentence sen.
 *
 *
 * Input Format
 * First, take a character,  as input.
 * Then take the string,  as input.
 * Lastly, take the sentence  as input.
 *
 *
 * Constraints
 * Strings for  and  will have fewer than 100 characters,
 * including the newline.
 *
 *
 * Output Format
 * Print three lines of output.
 * The first line prints the character
 * The second line prints the string, .
 * The third line prints the sentence, .
 *
 * */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char s[100];
    char sen[100];

    scanf("%c", &ch);
    scanf("%s", s);
    scanf(" %[^\n]%*c", sen);


    printf("%c \n",ch);
    printf("%s \n",s);
    printf("%s \n",sen);
    return 0;
}

