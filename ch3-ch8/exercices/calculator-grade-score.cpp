#include <iostream>

// Ch4 (operator, precedence), Ch5 (switch, ternary)
int main(){
    int score {}, avgScore {};

    for (size_t i {}; i<3; i++){
        std::cout << "input your-" << i+1 << " score: ";
        std::cin >> score;
        if (score < 0 || score > 100) {
            std::cout << "your score cannot less or more than 0 and 100" << std::endl;
            i--;
            continue;
        } else{
            avgScore += score;
        }
    }

    avgScore /= 3;
    avgScore /= 10;

    switch (avgScore)
    {
    case 9:
        std::cout << "A" << std::endl;
        break;
    case 8:
        std::cout << "B" << std::endl;
        break;
    case 7:
        std::cout << "C" << std::endl;
        break;
    case 6:
        std::cout << "D" << std::endl;
        break;
    default:
        std::cout << "E" << std::endl;
        break;
    }


    std::cout << (avgScore >= 6 ? "your pass the grade" : "youre not pass the grade");

    // i know that when i use int to make some avg store in could be good because
    // it will lowered floor so the detail above ,000 it will disapear
    // but the switch in condition is only using integral type
    // which is double/float it cannot be support by that
    

    return 0;
}