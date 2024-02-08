#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main()
{
    int x = 33, y = 44;
    printf("the value of x is %d and y is %d\n", x, y);
    swap(&x, &y);
    printf("the value of x is %d and y is %d ", x, y); 
    return 0;
}