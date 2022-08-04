#include <stdio.h>
int fibo(int n);

void main(){
    int n,k;
    
    printf("Enter the number : ");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++) {
        k = fibo(i);
        printf("%d\n", k);
    }
}

int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return fibo(n-1) + fibo(n-2);
    }
}