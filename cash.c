#include <stdio.h>

int rec(int a)
{
    int b,c,z,y;

    int count ;

    while (a > 0)
    { int count = 0;
        if (a > 25)
        {
           int  y = a - 25;
            count = count + 1;

            return (rec(y));
        }
        if (a > 10)
        {
            int z=a-10;
            count =count+1;
            return(rec(z));

        }
        if (a>5)
        {
             int b=a-5;
            count =count+1;
            return(rec(b));
        }
        if (a>1)
        {
             int c=a-10;
            count =count+1;
            return(rec(c));
        }
        else{printf("thank you");} 
    }return (count);} 

int main()
{
 int a;

    printf("how much do I owe ");
    scanf("%d", &a);
    printf("%d", rec(a));
    return 0;

    
}

    

