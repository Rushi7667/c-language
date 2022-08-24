#include <stdio.h>

int main()
{
    int a[50];
    int temp,b,n,i;
    
    printf("Enter the the value : ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d,", a[i]);
    }
}