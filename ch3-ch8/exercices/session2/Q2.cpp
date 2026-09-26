#include <iostream>

int main(){
    size_t arr[500] {}, sizeArr {}, check {1};
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
            continue;
        }
        //start where arr[0] bigger than arr[1]
        else if (i==0 && arr[i]>arr[i+1]){
            isSmaller = false;
            continue;
        }

        // after we check the start isSmaller or Bigger
        if (isSmaller){
            // if even
            if (check%2==0){
                check++;
                size_t j {i+1};
                while(!(arr[i] < arr[j])){
                    penalty++;
                    arr[j] = 404;
                    j++;
                }
                i = j-1;
            }
            // if odd
            else {
                check++;
                size_t j {i+1};
                while(!(arr[i] > arr[j])){
                    penalty++;
                    arr[j] = 404;
                    j++;
                }
                i = j-1;
            }
        } else{
            // if even
            if (check%2==0){
                check++;
                size_t j {i+1};
                while(!(arr[i] > arr[j])){
                    penalty++;
                    arr[j] = 404;
                    j++;
                }
                i = j-1;
            }
            // if odd
            else {
                check++;
                size_t j {i+1};
                while(!(arr[i] < arr[j])){
                    penalty++;
                    arr[j] = 404;
                    j++;
                }
                i = j-1;
            }
        }
    }

    std::cout << std::endl;
    std::cout << std::endl;
    
    if(penalty==0){
        std::cout << "YEA! - Zigzag" << std::endl;
    } else {
        std::cout << "NO! - " << penalty << " penalty fount at (position: ";
        for (size_t i{}; i<sizeArr; i++){
            if(arr[i]==404){
                std::cout << i << " ";
            }
        }
        std::cout << ")" << std::endl;
    }

    return 0;
}