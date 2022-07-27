#include <stdio.h>
void addition(long int a, long int b)
{
    printf("RESULT = %ld", a + b);
}
void subtraction(long int a, long int b)
{
    printf("RESULT = %ld", a - b);
}
void multiplication(long int a, long int b)
{
    printf("RESULT = %ld", a * b);
}
void division(long int a, long int b)
{
    if (b != 0)
    {
        if (a % b != 0)
        {
            float c = a / (float)b;
            printf("RESULT = %f", c);
        }
        else
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
    printf("Enter code of the operation needed:\n 1. ADD \t 2.SUBTRACTION \t 3. MULTIPLICATION \t 4.DIVISION \n");
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
