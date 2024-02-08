#include <stdio.h>

int rec(f);
int main()
{
    int num;
    printf("enter no. ");
    scanf("%d, &num");
    printf("the factorial is %d,rec(f)");

    return 0;
}

int rec(f)
{
    int num, a;
    if(num == 1)

         return 1;
    
    else
    
        a = num * rec(num - 1);
        return f;
    
}
}