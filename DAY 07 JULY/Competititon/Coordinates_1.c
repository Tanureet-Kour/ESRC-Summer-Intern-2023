#include <stdio.h>
int main()

{
    //Creating a float type array to store the calculated Abscissa and ordinate values respectively
    float x_Abscissa[] = {-48.00, -24.00, 0.00, 24.00, 48.00, 72.00};
    float y_Ordinate[] = {96.00, 72.00};

    //Printing the statement as stated in the question
    printf("Robot Rack: Co-ordinates for checker pick-up:\n\n");

    //Printing Coordinates using nested loop 
    for (int y_values = 0; y_values < 2; y_values++) 
    {
        for (int x_values = 0; x_values < 6; x_values++) 
        {
            printf("[%6.2f, %6.2f] ", x_Abscissa[x_values], y_Ordinate[y_values]);
        }
        printf("\n");
    }
    
    return 0;
}