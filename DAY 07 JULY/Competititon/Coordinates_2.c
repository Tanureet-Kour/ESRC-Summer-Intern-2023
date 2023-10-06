#include <stdio.h>
int main() 
{
    //Creating a float type array to store the calculated Abscissa and ordinate values respectively
    float x_Abscissa[] = {24.00, 48.00, 72.00, 96.00, 120.00};
    float y_Ordinate[] = {48.00, 24.00, 0.00, -24.00, -48.00};

    //Printing the statement as stated in the question
    printf("TicTacToe Game Board: Co-ordinates for checker placement:\n\n");

    //Printing Coordinates using nested loop 
    for (int y_values = 0; y_values < 5; y_values++) {
        for (int x_values = 0; x_values < 5; x_values++) {
            printf("[%6.2f, %6.2f] ", x_Abscissa[x_values], y_Ordinate[y_values]);
        }
        printf("\n");
    }

    return 0;
}