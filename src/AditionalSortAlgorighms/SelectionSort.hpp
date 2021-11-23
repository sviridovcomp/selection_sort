//
// Created by vasily-sviridov on 24.11.2021.
//

#ifndef SELECTION_SORT_SELECTIONSORT_HPP
#define SELECTION_SORT_SELECTIONSORT_HPP

namespace sort {
    template<typename RandomAccessIterator, typename Compare>
    void selectionSort(RandomAccessIterator *first, RandomAccessIterator *last, Compare comp) {
        for (int *i = first; i < last; i++) {
            auto minValue = *i;
            auto *index = i;
            for (auto *j = i + 1; j < last; j++) {
                if (comp(*j, minValue)) {
                    minValue = *j;
                    index = j;
                }
            }

            std::swap(*i, *index);
        }
    }
}

#endif //SELECTION_SORT_SELECTIONSORT_HPP
