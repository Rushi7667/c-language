#include <stdio.h>

int main(){
    

    int n,i,a=0;

    printf("Enter the number : ");
    scanf("%d", &n);

    if (n==1)
    {
        printf("It is nothing.");
    }
    else{
        for (i = 2; i < n; i++)
        {
            if (n%i==0)
            {
                a=a+1;
            }
            
        }
        if (a==0)
        {
            printf("PRIME");
        }
        else{
            printf("NOT PRIME");
        }
    
    }
    

    return 0;
}