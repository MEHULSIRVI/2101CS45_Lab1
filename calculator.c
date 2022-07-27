#include <stdio.h>
// function for addition
void addition(long int a, long int b)
{
    printf("RESULT = %ld", a + b);
}
// function for subtraction
void subtraction(long int a, long int b)
{
    printf("RESULT = %ld", a - b);
}
// function for multiplication
void multiplication(long int a, long int b)
{
    printf("RESULT = %ld", a * b);
}
// function for division
void division(long int a, long int b)
{
    if (b != 0) // else there will be error while dividing with zero
    {
        if (a % b != 0) // result will be float
        {
            float c = a / (float)b;
            printf("RESULT = %f", c);
        }
        else // result will be an integer
        {
            printf("RESULT = %ld", a / b);
        }
    }
    else
    {
        printf("division by 0 ERROR");
    }
}
int main()
{
    printf("Enter num1:\n");
    long int t;
    scanf("%ld", &t);
    long int r;
    printf("Enter num2:\n");
    scanf("%ld", &r);
    printf("Enter code of the operation needed:\n 1. Add \t 2. Subtract \t 3. Multiply \t 4. Divide\n");
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        addition(t, r);
        break;
    case 2:
        subtraction(t, r);
        break;
    case 3:
        multiplication(t, r);
        break;
    case 4:
        division(t, r);
        break;
    }
}
