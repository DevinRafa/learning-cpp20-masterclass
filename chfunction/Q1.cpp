#include <iostream>
#include <string>

// vountletters declaration
void countLetter(const std::string& s, unsigned int& vowels, unsigned int& consonants);

int main(){
    std::string letter {};
    unsigned int N {}, i {}, vowels {}, consonants {};

    do{

        while (N==0){
            std::cout << "input the number letter (1 - 100): ";
            std::cin >> N;
        }
        std::cout << "enter the latter: ";
        std::cin >> letter;

        countLetter(letter, vowels, consonants);
        i++;
    }while(i<N);

    return 0;
}

// countLetter Definition
void countLetter(const std::string& s, unsigned int& vowels, unsigned int& consonants){
    vowels = 0;
    consonants = 0;
    auto isVowels = [&](char c){
        if (c=='A' || c=='a' || c=='I' || c=='i' || c=='u' || c=='U' || c=='E' || c=='e' || c=='O' || c=='o'){
            ++vowels;
        } else {
            ++consonants;
        }
    };

    //lambda isLetter
    auto isLetter = [&](char c){
        if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'){
            isVowels(c);
        }
    };

    for (char c : s){
        isLetter(c);
    }

    std::cout << "vowels: " << vowels;
    std::cout << ", consonants: " << consonants;
    
    std::cout << std::endl;
}
