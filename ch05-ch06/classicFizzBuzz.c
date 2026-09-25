#include <stdio.h>

int main(){
    size_t n = 0;

    do{
        printf("input n value (1-100): ");
        scanf("%d", &n);

        if(n<1 || n>100){
            printf("input n value by the range that between 1-100 !\n");
        }
    }while(n<1 || n>100);

    for (size_t i=1; i<=n; i++){
        if (i%3==0 && i%5==00){
            printf("FizzBuzz\n");
        }else if (i%3==0){
            printf("Fizz\n");
        }else if (i%5==0){
            printf("Buzz\n");
        }else{
            printf("%zu\n", i);
        }
    }


    return 0;
}