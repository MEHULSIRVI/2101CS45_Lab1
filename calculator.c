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

int main()
{
    printf("Enter num1:\n");
    long int t;
    scanf("%ld", &t);
    long int r;
    printf("Enter num2:\n");
    scanf("%ld", &r);
    printf("Enter code of the operation needed:\n 1. ADD \t 2.SUBTRACTION \t 3. MULTIPLICATION \n");
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
    }
}
