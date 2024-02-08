#include <stdio.h>
int main()
{
    int num, f,i;
    printf("enter no.");
    scanf("%d",&num);
    i=2;
    while ( i < num)
    {
        f=num%i;


        if (f== 0)
        {
            printf("this is not a PRIME NO.");
            break;}

        else{
            i=i+1;

        }    

     printf("this is a prime no");
     break;
        
       

        }
        return 0;

    }
