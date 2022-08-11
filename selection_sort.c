#include <stdio.h>

#define A_SIZE 10

void selection_sort(int* p, int size);
void print_array(int* p, int size);


int main(void)
{
    int a[A_SIZE] = { 45, 4, 12, 56, 87, -6, 0, 587, -56, 4 };

    print_array(a, A_SIZE);
    selection_sort(a, A_SIZE);
    print_array(a, A_SIZE);
    return 0;
}
/**************************************/
void selection_sort(int p[], int size)
{
    int   i, j, temp, min;

    for (i = 0; i < size - 1; i++) {
        min = i;
        for (j = i + 1; j < size; j++)
            if (p[min] > p[j])
                min = j;
        temp = p[min];
        p[min] = p[i];
        p[i] = temp;
    }
}
/**************************************/
void print_array(int p[], int size)
{
    int i;

    for (i = 0; i < size; i++)
        printf("%d ", p[i]);
    putchar('\n');
}
