#include <stdio.h>

int main() {
        //create multi dimension array
        int numbers[3][3]= {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        };

        //create variables for the 'for' loop
        int i;
        int j;

        //create for loop to print out the array
        for (i = 0; i < 3; ++i){
                for (j = 0; j < 3; ++j){
                        printf("This number in the array is: %d\n", numbers[i][j]);
                }
        }

}


