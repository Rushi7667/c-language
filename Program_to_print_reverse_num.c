#include <stdio.h>

int main(){

    int n;

    printf("Enter the Number : ");
    scanf("%d", &n);

    printf("Reverse of this number is : ");    

    while (n!=0)
    {
        printf("%d",n%10);
        
        n = n/10;
    }

    return 0;
}