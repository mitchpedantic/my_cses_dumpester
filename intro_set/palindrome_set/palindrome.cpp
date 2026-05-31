#include <iostream>
#include <string>
#include <vector>

#pragma GCC optimize("O3")

int l{0};
char m{'A'}, M{0};
char c{'\0'};
std::vector<int> v(26, 0);
std::vector<int> w{};

int main() {
    while ((c = getchar()) != '\n') {
        (++v[c - 'A']) % 2 ? l+=c : l-=c;
        c > M ? (M = c) : c < m ? (m = c) : false;
    }
    if (l > 'Z') {
        std::cout << "NO SOLUTION" << std::endl;
        return 0;
    }
    for (int i{m - 'A'}; i <= (M - 'A'); i++) {
        if (v[i] == 0) continue;
        std::cout << std::string(v[i]/2, i+'A');
        w.push_back(i);
    }
    if (l > 0) std::cout << static_cast<char>(l);
    for (int i{static_cast<int>(w.size()) - 1}; i >= 0;  i--) {
        std::cout << std::string(v[w[i]]/2, w[i]+'A');
    }
}