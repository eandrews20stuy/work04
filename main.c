/*

Work 04: Make It So

Sep 24, 2021
Due: Monday 9/27
GitHub Submission Link: git@github.com:mks65/04_make.git
Task at hand:

    Modify your euler assignment such that you have the following files:
        euler.c
            Your euler assignment, modified to only contain the euler problem functions.
            Get rid of main.
            Do not put separate functions headers here (function definitions will have the header line still of course).
        euler.h
            The function headers for the functions in euler.c
        main.c
            Add #include "euler.h" at the top.
            Has a main function that correctly runs all the functions in euler.c
        makefile
            Appropriately compile euler.c and main.c separately.
            Generates an executable file called euler


*/
#include <stdio.h>
#include "euler.h"
int main() {
        printf("The sum of all multiples of 3 and 5 below 1000: \n%d\n",threefivesome());
        printf("The smallest positive # that is evenly divisible by all #s from 1 to 20: \n%d\n",lcm_one_twenty());
        printf("The difference between the sum of the squares of the first one hundred natural\nnumbers and the square of the sum: \n%d\n",diff_sum_square_square_sum());
        return 0;
}
