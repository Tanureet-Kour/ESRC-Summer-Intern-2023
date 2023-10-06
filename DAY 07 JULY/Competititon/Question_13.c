/*13. Among all the values of α and β, rack and board combined,
Note the minimum and maximum values of α and β*/

#include <stdio.h>

int main() {
    // Array of outputs

    //Rack positions
    double alpha_beta_rack[2][6]= 
    {
        {150.91, 111.30}, {144.47,  99.14}, {132.40,  95.20}, {116.39,  99.14}, { 97.78, 111.30}, {75.75, 134.76},
        {171.96,  83.46}, {162.72,  71.44}, {146.37,  67.26}, {125.85,  71.44}, {104.58,  83.46}, {83.44, 103.12}
    };
    // Initialize minimum and maximum values
    double min_Alpha_rack = alpha_beta_rack[0][0];
    double max_Alpha_rack = alpha_beta_rack[0][0];

    double min_Beta_rack = alpha_beta_rack[0][0];
    double max_Beta_rack = alpha_beta_rack[0][0];

    // Iterate over outputs and update minimum and maximum values
    for (int i = 0; i < 6; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            if (alpha_beta_rack[i][j] < min_Alpha_rack)
                min_Alpha_rack = alpha_beta_rack[i][j];

            if (alpha_beta_rack[i][j] > max_Alpha_rack)
                max_Alpha_rack = alpha_beta_rack[i][j];

            if (alpha_beta_rack[i][j] < min_Beta_rack)
                min_Beta_rack = alpha_beta_rack[i][j];

            if (alpha_beta_rack[i][j] > max_Beta_rack)
                max_Beta_rack = alpha_beta_rack[i][j];
        }
    }


    //Board positions
    double alpha_beta_board[5][5]=
    { 
        {129.05,  48.76}, {103.52,  62.96}, {81.96,  83.46}, {60.91, 111.30}, { 27.98, 167.64},
        {119.87,  30.27}, { 92.18,  48.76}, {72.72,  71.44}, {54.47,  99.14}, { 31.03, 140.56},
        { 79.36,  21.28}, { 68.33,  43.34}, {56.37,  67.26}, {42.40,  95.20}, { 22.62, 134.76},
        { 29.87,  30.27}, { 39.05,  48.76}, {35.85,  71.44}, {26.39,  99.14}, {  8.41, 140.56},
        {  2.18,  48.76}, { 13.52,  62.96}, {14.58,  83.46}, { 7.78, 111.30}, {-15.62, 167.64}
    };

    // Initialize minimum and maximum values
    double min_Alpha_board = alpha_beta_board[0][0];
    double max_Alpha_board = alpha_beta_board[0][0];

    double min_Beta_board = alpha_beta_board[0][0];
    double max_Beta_board = alpha_beta_board[0][0];

    // Iterate over outputs and update minimum and maximum values
    for (int i = 0; i < 6; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            if (alpha_beta_board[i][j] < min_Alpha_board)
                min_Alpha_board = alpha_beta_board[i][j];

            if (alpha_beta_board[i][j] > max_Alpha_board)
                max_Alpha_board = alpha_beta_board[i][j];

            if (alpha_beta_board[i][j] < min_Beta_board)
                min_Beta_board = alpha_beta_board[i][j];

            if (alpha_beta_board[i][j] > max_Beta_board)
                max_Beta_board = alpha_beta_board[i][j];
        }
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////

//Printing Final Results

//MAXIMUM AND MINIMUM ALPHA
if(max_Alpha_board > max_Alpha_rack)
{
    printf("Maximum Alpha: %.2f\n", max_Alpha_board);
}
else
{
    printf("Maximum Alpha: %.2f\n", max_Alpha_rack);
}

if(min_Alpha_board < min_Alpha_rack)
{
    printf("Minimum Alpha: %.2f\n", min_Alpha_board);
}
else
{
    printf("Minimum Alpha: %.2f\n", min_Alpha_rack);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//MAXIMUM AND MINIMUM BETA
if(max_Beta_board > max_Beta_rack)
{
    printf("Maximun Beta: %.2f\n", max_Beta_board);
}
else
{
    printf("Maximun Beta: %.2f\n", max_Beta_rack);
}

if(min_Beta_board < min_Alpha_rack)
{
    printf("Minimum Beta: %.2f\n", min_Beta_board);
}
else
{
    printf("Minimum Beta: %.2f\n", min_Alpha_rack);
}

    return 0;
}
