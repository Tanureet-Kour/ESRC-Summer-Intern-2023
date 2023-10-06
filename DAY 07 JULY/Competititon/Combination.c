#include <stdio.h>
#include <math.h>
const double PI = 3.1415926;

// Function Definition

// For Quadrant 1 and 4 i.e, Board values
void f_board_coord(int x, int y, double f_board_arr[])
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

    f_board_arr[0] = alpha;
    f_board_arr[1] = beta;
}
////////////////////////////////////////////////////////////////////////////////////////
void f_rack_coord(int x, int y, double f_rack_arr[])//0 , 96
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

    f_rack_arr[0] = alpha;
    f_rack_arr[1] = beta;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void s_board_coord(int x, int y, double s_board_arr[])
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

    s_board_arr[0] = alpha;
    s_board_arr[1] = beta;
}
////////////////////////////////////////////////////////////////////////////////////////
void s_rack_coord(int x, int y, double s_rack_arr[])//0 , 96
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

    s_rack_arr[0] = alpha;
    s_rack_arr[1] = beta;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Main code

int main()
{
    // Creating a float type array to store the calculated Abscissa and ordinate values respectively
    double x_Abscissa[] = {-48.00, -24.00, 0.00, 24.00, 48.00, 72.00};
    double y_Ordinate[] = {96.00, 72.00};




    // Printing the statement as stated in the question
    printf("\n");
    printf("\n");
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
    printf("\n");

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Robot Rack: Alpha and Beta values for rack checker pick-up:\n\n");

    double f_board_arr[2];
    double f_rack_arr[2];

    for (int b_values = 0; b_values < 2; b_values++)
    {
        for (int a_values = 0; a_values < 6; a_values++)
        {
            double a = x_Abscissa[a_values];//0
            double b = y_Ordinate[b_values];//72

            if (a<0 && b>0)
            {
                f_rack_coord(a, b, f_rack_arr);
                printf("[%6.2f, %6.2f] ", f_rack_arr[0], f_rack_arr[1]);
            }

            if (a > 0 && b <= 0)
            {
                f_board_coord(a, b, f_board_arr);
                printf("[%6.2f, %6.2f] ", f_board_arr[0], f_board_arr[1]);
            }

            if (a >= 0 && b > 0)
            {
                f_board_coord(a, b, f_board_arr);
                printf("[%6.2f, %6.2f] ", f_board_arr[0], f_board_arr[1]);
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");


     // Creating a float type array to store the calculated Abscissa and ordinate values respectively
    double x_abs[] = {24.00, 48.00, 72.00, 96.00, 120.00};
    double y_ord[] = {48.00, 24.00, 0.00, -24.00, -48.00};




    // Printing the statement as stated in the question
    printf("Robot Rack: Co-ordinates for Board checker pick-up:\n\n");

    // Printing available rack coordinates using nested loop
    for (int y_val = 0; y_val < 5; y_val++)
    {
        for (int x_val = 0; x_val < 5; x_val++)
        {
            printf("[%6.2f, %6.2f] ", x_abs[x_val], y_ord[y_val]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Robot Board: Alpha and Beta values for Board checker pick-up:\n\n");

    double s_board_arr[2];
    double s_rack_arr[2];

    for (int b_val = 0; b_val < 5; b_val++)
    {
        for (int a_val = 0; a_val < 5; a_val++)
        {
            double a = x_abs[a_val];//0
            double b = y_ord[b_val];//72

            if (a <= 0 && b > 0)
            {
                s_rack_coord(a, b, s_rack_arr);
                printf("[%6.2f, %6.2f] ", s_rack_arr[0], s_rack_arr[1]);
            }

            if (a > 0 && b <= 0)
            {
                s_board_coord(a, b, s_board_arr);
                printf("[%6.2f, %6.2f] ", s_board_arr[0], s_board_arr[1]);
            }

            if (a > 0 && b > 0)
            {
                s_board_coord(a, b, s_board_arr);
                printf("[%6.2f, %6.2f] ", s_board_arr[0], s_board_arr[1]);
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////");
    printf("\n");
    printf("\n");


    return 0;
}
