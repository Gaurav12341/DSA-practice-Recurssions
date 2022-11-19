#include<stdio.h>

int fact(int n){
    if (n<=1)
    return 1;
    else 
    return fact(n-1)*n;
}

int nCr(int n,int r){
    int num= fact(n);
    int deno=fact(r)*fact(n-r);
    return num/deno;
}
int recurNCR(int n, int r){
    if (r==0 || n==r)
    return 1;
    else
    return recurNCR(n-1,r-1)+recurNCR(n-1,r);
}

int main(){
    printf("%d\n",nCr(4,2));
        printf("%d\n",recurNCR(4,2));

    return 0;
}