#include <iostream>

int main(){
    size_t sizeArr {}, arr[1000];
    signed int highest {0}, lowest {}, valueArr {}, divider {};
    double avg {};

    do{
        std::cout << "input the amount of goods (1-1000): " << std::endl;
        std::cin >> sizeArr;
    }while(sizeArr>1000 && sizeArr<1);

    for(size_t i {}; i<sizeArr; i++){
        std::cout << "input value-" << i+1 << ": ";
        std::cin >> valueArr;
        std::cout << std::endl;

        arr[i] = valueArr;
    }

    for (size_t i {}; i<sizeArr; i++){
        if(arr[i]!=-999){
            highest = (highest==0) ? arr[i] : highest;
            highest = (highest<arr[i]) ? arr[i] : highest;

            lowest = (lowest==0) ? arr[i] : lowest;
            lowest = (lowest>arr[i]) ? arr[i] : lowest;

            avg += arr[i];
            divider++;
        }
    } 

    avg /= divider;

    std::cout << "Rata-rata: " << avg << std::endl;
    std::cout << "Tertinggi: " << highest << std::endl;
    std::cout << "Terendah: " << lowest << std::endl;

    return 0;
}