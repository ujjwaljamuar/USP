#include <stdio.h>
#include <math.h>
#define SIZE 6

void main()
{
    int i;
    float data[SIZE];
    printf("Enter %d elements: \n", SIZE);
    // taking input in the array
    for (i = 0; i < SIZE; i++)
    {
        scanf("%f", &data[i]);
    }

    float sum = 0, mean, sd = 0.0;                 // sd-> standard deviation

    // Summation of all elements in the array
    for (i = 0; i < SIZE; ++i)
    {
        sum += data[i];
    }

    mean = sum / SIZE;                            // mean = sum of all inputs divided by total no. of inputs

    printf("Mean = %f \n", mean);

    printf("Index         Item       Difference \n");

    for (i = 0; i < SIZE; i++)
    {
        printf("   %d          %.2f        %.3f \n", i, data[i], (data[i] - mean));
    }

    // standard deviation
    for (i = 0; i < SIZE; ++i)
    {
        sd += pow(data[i] - mean, 2);
    }
    
    printf("Standard Deviation = %f", sqrt(sd / 10));
}