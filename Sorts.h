#pragma once

namespace BMSTU {
    template<typename T>
    void swap(T *left, T *right) {
        T temp = *left;
        *left = *right;
        *right = temp;
    }

    void swap(int *left, int *right) {
        int temp = *left;
        *left = *right;
        *right = temp;
    }
}

template<class It>
It dummy_advance(It current_iterator, size_t route) {
    std::advance(current_iterator, route);
    return current_iterator;
}


template<class It>
void InsertionSort(It first, It last) {
    size_t distance_size = std::distance(first, last);
    for (int i = 1; i < distance_size; i++) {
        for (int j = i - 1; (j >= 0) || (*(dummy_advance(first, j)) < *(dummy_advance(first, j + 1))); j--) {
            if (*(dummy_advance(first, j)) > *(dummy_advance(first, j + 1))) {
                BMSTU::swap(&(*dummy_advance(first, j)), &(*dummy_advance(first, j + 1)));
            }
        }
    }
}

template<class It>
void BubbleSort(It first, It last) {
    for (It i = first; i != last; i++) {
        for (It j = first; j != i; j++) {
            if (*i < *j) {
                BMSTU::swap(&(*i), &(*j));
            }
        }
    }
}

template<class It>
void MergeSort(It first, It last) {
    if (std::distance(first, last) <= 1) {
        return;
    } else {
        size_t middle_distance = std::distance(first, last) / 2;
        MergeSort(first, dummy_advance(first, middle_distance));
        MergeSort(dummy_advance(first, middle_distance), last);

        std::vector<It> temp_array;
        temp_array.resize(std::distance(first, last));
        int left_index = 0;
        int right_index = middle_distance;
        int i = 0;
        while ((left_index < middle_distance) || (right_index < std::distance(first, last))) {
            if (left_index == middle_distance) {
                for (size_t j = right_index; j < std::distance(first, last); j++) {
                    temp_array[i++] = dummy_advance(first, j);
                }
                break;
            }
            if (right_index == std::distance(first, last)) {
                for (size_t j = left_index; j < middle_distance; j++) {
                    temp_array[i++] = dummy_advance(first, j);
                }
                break;
            }
            if (*(dummy_advance(first, left_index)) < *(dummy_advance(first, right_index))) {
                temp_array[i++] = (dummy_advance(first, left_index++));
            } else {
                temp_array[i++] = (dummy_advance(first, right_index++));
            }
        }
        std::vector<typeof(*first)> second_temp_array;
        second_temp_array.resize(std::distance(first, last));
        for (int j = 0; j < std::distance(first, last); ++j) {
            second_temp_array[j] = *temp_array[j];
        }
        for (int j = 0; j < std::distance(first, last); ++j) {
            *(dummy_advance(first, j)) = second_temp_array[j];
        }
    }
}

template<class It>
It FindAPivot(It first, It last) {
    first--;
    last--;
    It first_step = first;
    It second_step = ++first;
    while(second_step != last) {
        if (*second_step <= *last) {
            first_step++;
            BMSTU::swap(&(*first_step), &(*second_step));
        }
        second_step++;
    }
    first_step++;
    BMSTU::swap(&(*first_step), &(*second_step));
    return first_step;
}

template<class It>
void QuickSort(It first, It last) {
    if (std::distance(first, last) <= 1) {
        return;
    }
    else {
        It hassle = FindAPivot(first, last);
        QuickSort(first, hassle);
        QuickSort(++hassle, last);
    }
}