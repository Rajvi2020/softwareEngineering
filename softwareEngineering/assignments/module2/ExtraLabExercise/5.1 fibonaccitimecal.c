#include<stdio.h>
#include<time.h>

// Iterative Fibonacci
int fib_iterative(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else{
        int a=0,b=1,c;
        for(int i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
}

// Recursive Fibonacci
int fib_recursive(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib_recursive(n-1)+fib_recursive(n-2);
}

int main(){
    int n;
    clock_t start,end;
    double time_taken;

    printf("Enter number: ");
    scanf("%d",&n);

    // Iterative time
    start=clock();
    for(int i=0;i<=n;i++){
        printf("%d\t",fib_iterative(i));
    }
    end=clock();

    time_taken=(double)(end-start)/CLOCKS_PER_SEC;
    printf("\nIterative Time = %f seconds\n",time_taken);


    // Recursive time
    start=clock();
    for(int i=0;i<=n;i++){
        printf("%d\t",fib_recursive(i));
    }
    end=clock();

    time_taken=(double)(end-start)/CLOCKS_PER_SEC;
    printf("\nRecursive Time = %f seconds\n",time_taken);

    return 0;
}