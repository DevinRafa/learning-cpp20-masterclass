#include <iostream>
#include <string>

int M = 1000003;
long long norm(long long v);

template <typename F>
void applyAll(long long* a, int n, F f){

}

int main(){
    // variable
    unsigned int N{}, Q{};
    long long arr[1000], x {};
    std::string Qs;

    // lambda function
    // lambda add
    auto add = [=](long long a, long long x) -> long long{
        return a+x;
    };

    // lambda mul
    auto mul = [=](long long a, long long x) -> long long{
        return a*x;
    };

    // lambda sq
    auto sq = [](long long a){
        return a*a;
    };

    // first line input
    std::cin >> N >> Q;
    
    // sec line input (a_i)
    for (size_t i{}; i<N; i++){
        std::cin >> arr[i];
    }

    // operator Q input
    for (size_t i{}; i<Q; i++){
        std::cin >> Qs;
        if (Qs != "sq"){
            std::cin >> x;
        }
        applyAll(arr, Q, )
    }



    return 0;
}

long long norm(long long v);
