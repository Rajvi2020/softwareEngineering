#include<stdio.h>
#include<time.h>

// Recursive factorial
int fact_recursive(int n){
    if(n==0)
        return 1;
    else
        return n * fact_recursive(n-1);
}

// Iterative factorial
int fact_iterative(int n){
    int result=1;
    for(int i=2;i<=n;i++){
        result*=i;
    }
    return result;
}

int main(){
    int n;
    clock_t start,end;
    double time_taken;

    printf("Enter number: ");
    scanf("%d",&n);

    if(n<0){
        printf("Factorial does not exist for negative numbers");
        return 0;
    }

    // Recursive time
    start=clock();
    int r1=fact_recursive(n);
    end=clock();

    time_taken=(double)(end-start)/CLOCKS_PER_SEC;
    printf("Recursive factorial = %d\n",r1);
    printf("Recursive Time = %f seconds\n",time_taken);


    // Iterative time
    start=clock();
    int r2=fact_iterative(n);
    end=clock();

    time_taken=(double)(end-start)/CLOCKS_PER_SEC;
    printf("Iterative factorial = %d\n",r2);
    printf("Iterative Time = %f seconds\n",time_taken);

    return 0;
}