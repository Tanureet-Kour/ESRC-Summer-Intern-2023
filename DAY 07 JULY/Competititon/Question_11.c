#include <stdio.h>
#include <math.h>
const double PI = 3.1415926;

// Function Definition

// For Quadrant 1 and 4 i.e, Board values
void board_coord(int x, int y, double board_arr[])
{
    double dx = x;
    double dy = y;

    double L1 = 65; // Link 1 length in mm
    double L2 = 65; // Link 2 length in mm

    double d = sqrt((dx * dx) + (dy * dy));

    double theta = (acos(((L1 * L1) + (d * d) - (L2 * L2)) / (2 * L1 * d))) * (180 / PI);

    double gamma = (atan(dy / dx)) * (180 / PI);

    double alpha = theta + gamma;

    double o_beta = (acos(((L1 * L1) + (L2 * L2) - (d * d)) / (2 * L1 * L2))) * (180 / PI);
    double beta = 180 - o_beta;
    beta = 180 - beta;

    board_arr[0] = alpha;
    board_arr[1] = beta;
}
////////////////////////////////////////////////////////////////////////////////////////
void rack_coord(int x, int y, double rack_arr[])//0 , 96
{
    double dx = x;//0
    double dy = y;//96

    double L1 = 65; // Link 1 length in mm
    double L2 = 65; // Link 2 length in mm

    double d = sqrt((dx * dx) + (dy * dy));//96

    double theta = (acos(((L1 * L1) + (d * d) - (L2 * L2)) / (2 * L1 * d))) * (180 / PI);

    double gamma = (atan(dy / dx)) * (180 / PI);

    double alpha = theta + gamma;
    alpha = 180 + alpha;

    double o_beta = (acos(((L1 * L1) + (L2 * L2) - (d * d)) / (2 * L1 * L2))) * (180 / PI);
    double beta = 180 - o_beta;
    beta = 180 - beta;

    rack_arr[0] = alpha;
    rack_arr[1] = beta;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Main code

int main()
{
    // Creating a float type array to store the calculated Abscissa and ordinate values respectively
    double x_Abscissa[] = {-48.00, -24.00, 0.00, 24.00, 48.00, 72.00};
    double y_Ordinate[] = {96.00, 72.00};




    // Printing the statement as stated in the question
    printf("Robot Rack: Co-ordinates for checker pick-up:\n\n");

    // Printing available rack coordinates using nested loop
    for (int y_values = 0; y_values < 2; y_values++)
    {
        for (int x_values = 0; x_values < 6; x_values++)
        {
            printf("[%6.2f, %6.2f] ", x_Abscissa[x_values], y_Ordinate[y_values]);
        }
        printf("\n");
    }
    printf("\n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////");
    printf("\n");

    printf("\n");

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Robot Rack: Alpha and Beta values for checker pick-up:\n\n");

    double board_arr[2];
    double rack_arr[2];

    for (int b_values = 0; b_values < 2; b_values++)
    {
        for (int a_values = 0; a_values < 6; a_values++)
        {
            double a = x_Abscissa[a_values];//0
            double b = y_Ordinate[b_values];//72

            if (a<0 && b>0)
            {
                rack_coord(a, b, rack_arr);
                printf("[%6.2f, %6.2f] ", rack_arr[0], rack_arr[1]);
            }

            if (a > 0 && b <= 0)
            {
                board_coord(a, b, board_arr);
                printf("[%6.2f, %6.2f] ", board_arr[0], board_arr[1]);
            }

            if (a >= 0 && b > 0)
            {
                board_coord(a, b, board_arr);
                printf("[%6.2f, %6.2f] ", board_arr[0], board_arr[1]);
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////");
    printf("\n");

    printf("\n");


    return 0;
}