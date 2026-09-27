#include <iostream>

int main(){
    size_t sizeJump {};
    signed int jump[200] {}, visited[200] {};
    signed int* p_current {&jump[0]};

    // input size arr
    std::cout << "input size of arr: (1 - 200): ";
    std::cin >> sizeJump;

    // input jump value each arr
    for (size_t i{}; i<sizeJump; i++){
        std::cout << "input jump value jump[" << i << "]: ";
        std::cin >> jump[i];
        std::cout << std::endl;
    }

    // main algorithm (pointer jumping game)
    std::cout << std::endl;
    std::cout << "\nRoute: ";
    for (size_t i{}; i<sizeJump; i++){
        if (i==0){
            std::cout << i <<" -> ";
            visited[i] = 0;

            std::cout << 0+p_current[i] << " -> ";
            visited[i+1] = 0+p_current[i];
            p_current = jump + visited[i+1];

        } else{
            std::cout << visited[i]+*p_current << " -> ";
            visited[i+1] = visited[i]+*p_current;
            p_current = jump + visited[i+1];

            if (visited[i+1]>=sizeJump){
                std::cout << std::endl;
                std::cout << "(exit an array, successfully escape!)" << std::endl;
                break;
            } else if (visited[i+1]==visited[i]){
                std::cout << std::endl;
                std::cout << "STUCK: infinite loop in detection!" << std::endl;
                break;
            }
        }
    }

    return 0;
}