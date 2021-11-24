#include <iostream>
#include <map>
#include <random>
#include "src/AditionalSortAlgorighms/SelectionSort.hpp"

int main() {
    size_t n = 0;
    std::cin >> n;

    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> distrib(0, 9);
    std::vector<std::pair<char, int>> vec(n);

    for (uint32_t i = 0; i <= n; i++) {
        vec[i] = std::pair(static_cast<char>('a' + i), distrib(gen));
    }

    sort::selectionSort(vec.begin(), vec.end());

    for (auto &&i : vec) {
        std::cout << i.first << ':' << i.second << '\n';
    }
    return 0;
}
