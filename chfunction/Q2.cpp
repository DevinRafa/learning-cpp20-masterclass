#include <iostream>
#include <string>

int M = 1000003;
long long norm(long long v);

template <typename F>
void applyAll(long long* a, int n, F f){
    for (size_t i{}; i<n;i++){
        std::cout << f(a[i]);
    }
}

int main(){
    // variable
    unsigned int N{}, Q{};
    long long arr[1000], x {};
    std::string Qs;

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
            if (Qs == "add"){
                // lambda add
                applyAll(arr, N, [=](long long a) -> long long {return a+x;});
            } else {
                // lambda mul
                auto mult = [=](long long a) -> long long {return a*x;};
                applyAll(arr, N, mult);
            }
        } else {
            // lambda sq
            applyAll(arr, N, [](long long a) -> long long {return a*a;});
        }
    }
    return 0;
}

long long norm(long long v);
