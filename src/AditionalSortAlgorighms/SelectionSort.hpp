//
// Created by vasily-sviridov on 24.11.2021.
//

#ifndef SELECTION_SORT_SELECTIONSORT_HPP
#define SELECTION_SORT_SELECTIONSORT_HPP

namespace sort {
    void selectionSort(std::vector<std::pair<char, int>>::iterator begin, std::vector<std::pair<char, int>>::iterator end)
    {
        std::vector<std::pair<char, int>>::iterator min;
        while (begin != end)
        {
            min = std::min_element(begin, end, [](const std::pair<char, int> a, const std::pair<char, int> b) {
                return a.second < b.second;
            });
            std::iter_swap(begin, min);
            ++begin;
        }
    }
}

#endif //SELECTION_SORT_SELECTIONSORT_HPP
