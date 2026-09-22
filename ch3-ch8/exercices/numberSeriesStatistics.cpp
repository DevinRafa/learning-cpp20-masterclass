#include <iostream>

//Ch6 (for/while loop), Ch7 (array, size, bounds)

int main(){
    int size {}, value {}, maks {}, min {}, ttl {}, ttlEven {};
    double avg {};
    do{
    std::cout << "enter the size of array you want (1-100): " << std::endl;
    std::cin >> size;
    }while(size>100 || size<1);

    int* p_arr = new(std::nothrow) int[size] {};

    // input value tiap array
    // ! ini udah lebih dari cukup buat batesin akses out of bounds
    for (size_t i {}; i<size; i++){
        std::cout << "enter value of-" << i+1 << " array: ";
        std::cin >> value;
        p_arr[i] = value;
    }

    // main algorithm
    maks = p_arr[0];
    min = p_arr[0];

    for (size_t i {}; i<size; i++){
        if(i<(size-1)){
            maks = (maks<p_arr[i+1]) ? p_arr[i+1] : maks;
            min = (min>p_arr[i+1]) ? p_arr[i+1] : min;
        }
        ttl += p_arr[i];
        avg = static_cast<double>(ttl) / (1.0 * size);

        ttlEven += (p_arr[i]%2==0) ? 1 : 0;
    }

    std::cout << "Maks Value: " << maks << std::endl;
    std::cout << "Min Value: " << min << std::endl;
    std::cout << "total value: " << ttl << std::endl;
    std::cout << "average value: " << avg << std::endl;
    std::cout << "total even found: " << ttlEven << std::endl;

    return 0;
}