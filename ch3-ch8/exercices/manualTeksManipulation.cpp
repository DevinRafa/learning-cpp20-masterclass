#include <iostream>

// Ch7 (array of char / c-string), Ch6 (loop), Ch4 (operator)

int main(){
    size_t length {}, i {};
    char sintance[] {"hello everyone in this planet!"};

    std::cout << "sintance before: " << sintance << std::endl;

    for (auto c : sintance){
        length++;
        if (c >= 97 && c <= 122){
            sintance[i] -= 32;
        }
        i++;
    }

    std::cout << "sintance after: " << sintance << std::endl;
    std::cout << "length of the sintance: " << length << std::endl;


    return 0;
}