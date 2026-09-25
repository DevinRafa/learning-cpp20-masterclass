#include <stdio.h>
#include <stdbool.h>

int main(){
    int inputMenu=0, a=0, b=0, divider, cPrime=0, n=0, rows=0;
    bool isPrime; 

    do{
        printf("=== MENU ===\n");
        printf("1. Find the prime number in range [a, b]\n");
        printf("2. Print triangle numbers pattern\n");
        printf("3. Exit\n");

        printf("input the menu with number 1-3: ");
        scanf("%d", &inputMenu);


        switch (inputMenu)
        {
        case 1:
            do{
                printf("input a, and b (a<=b): ");
                scanf("%d %d", &a, &b);
            }while(a>b);

            printf("\nPrime found: ");

            cPrime=0;

            for (n=a; n<=b; n++){
                isPrime = true;
                divider=2;

                do{
                    if(isPrime){
                        isPrime = (n%divider == 0 && divider<n) ? false : true;
                        divider += (isPrime) ? 1 : 0;
                    }
                    if (divider==(n-1) || divider >= n){
                        printf("%d ", n);
                        cPrime++;
                    }
                }while(divider<(n-1) && isPrime);    
            }

            printf("\nTotal prime in range: %d \n\n", cPrime);
            break;

        case 2:
            printf("input the amount rows: ");
            scanf("%d", &rows);

            for(size_t i=1; i<=rows; i++){
                for(size_t j=1; j<=i; j++){
                    printf((j%2==1) ? "* " : "# ");
                }
                printf("\n");
            }
            printf("\n");
            break;

        case 3:
            inputMenu = 3;
            printf("\n === PROGRAM DONE WELL ===");
            break;
        
        default:
            printf("\nInvalid Input, Please Try Again!\n\n");
            break;
        }

    }while(inputMenu!=3);

    return 0;
}