#include <iostream>

// Ch8 (pointer, dynamic memory), gabungan semua chapter sebelumnya

int main(){
    unsigned int n {}, stock {}, smallStock {}, largerStock {};
    int* p_arr = new(std::nothrow) int[n];

    std::cout << "input the amount of goods: ";
    std::cin >> n;

    for (size_t i {}; i<n; i++){
        std::cout << "input the " << i+1 << " stock items: ";
        std::cin >> stock;
        *(p_arr + i) = stock;
    }

    smallStock = *(p_arr + 0);
    largerStock = *(p_arr + 0);

    for (size_t i {1}; i<n; i++){
        smallStock = (smallStock>*(p_arr + i)) ? *(p_arr + i) : smallStock;
        largerStock = (largerStock<*(p_arr + i)) ? *(p_arr + i) : largerStock;
    }

    std::cout << "the smallest stock in amount of items-stock is: " << smallStock << std::endl;
    std::cout << "the largest stock in amount of items-stock is: " << largerStock << std::endl;

    delete[] p_arr;
    p_arr = nullptr;

    return 0;
}