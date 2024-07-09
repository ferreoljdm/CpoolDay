#include<stdio.h>

float my_average(int *grades, int count)
{
    float a = 0;
    float b = 0;
    int i = count;
    while (count > 0)
    {
        a = a + grades[count - 1];
        count--;
    }
    b = a / i;
    return b;
}