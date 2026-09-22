#include <iostream>
#include <string>

// ch3 (data type), ch4 (operator arithmatics & relationa),
// ch5 (if-else)

int main(){
    double price {}, cash {}, ttlPay {};
    int ttlItem {};

    std::cout << "input the total item u buy, price per items, and total cash: " << std::endl;
    std::cin >> ttlItem >> price >> cash;

    ttlPay = price * ttlItem;

    ttlPay = (ttlPay >= 100000) ? ttlPay * 0.90 : ttlPay;

    std::cout << ((ttlPay > cash) ? "the ammount money you pay is not enough" : "u hve change: " + std::to_string((cash - ttlPay)));

    return 0;
}