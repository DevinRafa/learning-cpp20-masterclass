#include <iostream>

int main(){
    size_t arr[500] {}, sizeArr;
    int valueArr {}, penalty {};
    bool isSmaller {};

    // input size of array
    std::cout << "input size array (3-500): ";
    std::cin >> sizeArr;

    // input value in every arr
    for (size_t i{}; i<sizeArr; i++){
        std::cout << "value arr[" << i << "]: ";
        std::cin >> valueArr;

        arr[i] = valueArr;
    }

    // main zig-zag algorithm
    for (size_t i{}; i<sizeArr; i++){
        //start where arr[0] smaller than arr[1]
        if (i==0 && arr[i]<arr[i+1]){
            isSmaller = true;
        }
        //start where arr[0] bigger than arr[1]
        else if (i==0 && arr[i]>arr[i+1]){
            isSmaller = false;
        }

        if (isSmaller){
            if (i%2==0){
                penalty += (arr[i] < arr[i+1]) ? 0 : 1;
            } else {
                penalty += (arr[i] > arr[i+1]) ? 0 : 1;
            }
        } else{
            if (i%2==0){
                penalty += (arr[i] > arr[i+1]) ? 0 : 1;
            } else {
                penalty += (arr[i] < arr[i+1]) ? 0 : 1;
            }
        }
    }

    return 0;
}