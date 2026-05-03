#include <iostream>
unsigned long long nu{0}, inp{0}, max{0};

int main(){
    std::cin >> nu, max=nu*(nu+1)/2;
    for (unsigned long long idx = (nu - 1); idx > 0; idx--) 
        std::cin >> nu, inp=inp+nu;
    std::cout << (max-inp);
}