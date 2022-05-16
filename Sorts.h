#pragma once

/// свое пространство имен
/// swap, *
template<typename Type>
void Swaper(Type &first, Type &last) {
    Type temp = first;
    first = last;
    last = temp;
}

template <class Type>
Type ReloadingAdvance(Type current_iterator, size_t route){
    std::advance(current_iterator, route);
    return current_iterator;
}

template <class Type>
void InsertionSort(Type first, Type last) {
    size_t distance_size = std::distance(first, last);
    for (int i = 1; i < distance_size; i++) {
        for (int j = i - 1; (j >= 0) || (*(ReloadingAdvance(first, j)) < *(ReloadingAdvance(first, j + 1))); j--) {
            if (*(ReloadingAdvance(first, j)) > *(ReloadingAdvance(first, j + 1))) {
                Swaper(*(ReloadingAdvance(first, j)), *(ReloadingAdvance(first, j + 1)));
            }
        }
    }
}

template <class Type>
void BubbleSort(Type first, Type last) {
    for (Type i = first; i != last; i++) {
        for (Type j = first; j != i; j++) {
            if (*i < *j) {
                Swaper(*i, *j);
            }
        }
    }
}

template <class Type>
void MergeSort(Type first, Type last) {
    if (std::distance(first, last) <= 1) {
        return;
    } else {
        size_t middle_distance = std::distance(first, last) / 2;
        MergeSort(first, ReloadingAdvance(first, middle_distance));
        MergeSort(ReloadingAdvance(first, middle_distance), last);

        std::vector<Type> temp_array;
        temp_array.resize(std::distance(first, last));
        int left_index = 0;
        int right_index = middle_distance;
        int i = 0;
        while ((left_index < middle_distance) || (right_index < std::distance(first, last))) {
            if (left_index == middle_distance) {
                for (size_t j = right_index; j < std::distance(first, last); j++) {
                    temp_array[i++] = ReloadingAdvance(first, j);
                }
                break;
            }
            if (right_index == std::distance(first, last)) {
                for (size_t j = left_index; j < middle_distance; j++) {
                    temp_array[i++] = ReloadingAdvance(first, j);
                }
                break;
            }
            if (*(ReloadingAdvance(first, left_index)) < *(ReloadingAdvance(first, right_index))) {
                temp_array[i++] = (ReloadingAdvance(first, left_index++));
            } else {
                temp_array[i++] = (ReloadingAdvance(first, right_index++));
            }
        }
        std::vector<typeof(*first)> second_temp_array;
        second_temp_array.resize(std::distance(first, last));
        for (int j = 0; j < std::distance(first, last); ++j) {
            second_temp_array[j] = *temp_array[j];
        }
        for (int j = 0; j < std::distance(first, last); ++j) {
            *(ReloadingAdvance(first, j)) = second_temp_array[j];
        }
    }
}

/// pivot 
/// type -> it
template<class Type>
Type FindAHassle(Type first, Type last) {
    first--;
    last--;
    Type first_step = first;
    Type second_step = ++first;
    while(second_step != last) {
        if (*second_step <= *last) {
            first_step++;
            Swaper(*first_step, *second_step);
        }
        second_step++;
    }
    first_step++;
    Swaper(*first_step, *second_step);
    return first_step;
}

template<class Type>
void QuickSort(Type first, Type last) {
    if (std::distance(first, last) <= 1) {
        return;
    }
    else {
        Type hassle = FindAHassle(first, last);
        QuickSort(first, hassle);
        QuickSort(++hassle, last);
    }
}
