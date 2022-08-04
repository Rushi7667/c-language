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

//fibonacci without recursion

#include <stdio.h>

void main(){
    int i,n,n1=0,n2=1;
    int n3=n1+n2;
    
    printf("Enter the terms of fibonacci series : ");
    scanf("%d", &n);
    
    printf("0\n1\n");


    for (i=0;i<n-2;i++){
        n3 = n1+n2;
        n1=n2;
        n2=n3;
        
        printf("%d\n",n3);
    }
    
}
