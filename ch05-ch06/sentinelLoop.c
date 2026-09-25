#include <stdio.h>

int main(){
    int n, sumTtl=0, ttlPos=0, ttlNeg=0, largNum=0, smallNum=0;
    double avg=0.0; 

    do{
        printf("input the number. input 0 when it done: ");
        scanf("%d", &n);

        if (n!=0){
            sumTtl++;
            avg += n;
            (n>0) ? ttlPos++ : ttlNeg++;

            if (sumTtl == 1){
                largNum = smallNum = n;
            } else {
                if (n > largNum) largNum=n;
                if (n < smallNum) smallNum=n;
            }
        }

    }while(n!=0);

    if(sumTtl==0){
        printf("no data found");
    }else{
        avg /= sumTtl;

        printf("total number: %d\n", sumTtl);
        printf("total positif: %d, total negative:  %d\n", ttlPos, ttlNeg);
        printf("largest: %d, smallest: %d\n", largNum, smallNum);
        printf("Average: %lf\n", avg);
    }

    return 0;
}