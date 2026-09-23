#include <stdio.h>

int main(){
    int n = 0;

    do{
        printf("input n value (1-100): ");
        scanf("%d", &n);

        if(n<1 || n>100){
            printf("input n value by the range that between 1-100 !");
        }
    }while(n<1 || n>100);

    for (size_t i=0; i<=n; i++){
        if (i%3==0 && i%5==00){
            printf("FizzBuzz\n");
            continue;
        }else if (i%3==0){
            printf("Fizz\n");
            continue;
        }else if (1%5==0){
            printf("Buzz\n");
            continue;
        }else{
            printf("%d\n", i);
            continue;
        }
    }


    return 0;
}