#include <stdio.h>
void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void InsertionSort(int array[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;

        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}
void SelectionSort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int min = step;
        for (int i = step + 1; i < size; i++)
        {

            if (array[i] < array[min])
                min = i;
        }

        swap(&array[min], &array[step]);
    }
}
int main()
{

    int n;
    printf("ENTER ARRAY SIZE :\n");
    scanf("%d", &n);
    int data[n];
    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE %dth ELEMENT OF THE ARRAY:\n", i);
        scanf("%d", &data[i]);
    }

    int size = sizeof(data) / sizeof(data[0]);

    int op;
    printf("SELECT SORTING TYPE:\n");
    printf("1. INSERTION SORT\n");
    printf("1. SELECTION SORT\n");

    printf("ENTER THE NUMBER CORRESPONDING TO YOUR SELECTION :\n");
    scanf("%d", &op);
    printf("THIS IS THE UNSORTED ARRAY\n");
    print_array(data, size);
    if (op == 1)
    {
        InsertionSort(data, size);
        printf("THIS IS THE SORTED ARRAY IN ASCENDING ORDER:\n");
        print_array(data, size);
    }
    else if (op == 2)
    {
        SelectionSort(data, size);
        printf("THIS IS THE SORTED ARRAY IN ASCENDING ORDER:\n");
        print_array(data, size);
    }
}
