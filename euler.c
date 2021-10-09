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
int threefivesome() {
        int three_some = 3;
        int five_some = 5;
        int my_sum = 0;
        while (three_some < 1000) {
                my_sum += three_some;
                three_some += 3;
        }
        while (five_some < 1000) {
                my_sum += five_some;
                five_some += 5;
        }
        return my_sum;
}
int lcm_one_twenty() {
        int product_to_twenty = (2 * 3 * 2 * 5 * 7 * 2 * 3 * 11 * 13 * 2 * 17 * 19);
        return product_to_twenty;
}
int diff_sum_square_square_sum() {
        int sum_squares;
        int square_sum;
        for (int i = 1; i <= 100; i++) {
                sum_squares += (i * i);
                square_sum += i;
        }
        square_sum = (square_sum * square_sum);
        return (square_sum - sum_squares);
}
