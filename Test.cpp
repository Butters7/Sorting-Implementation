#include "SortTest.h"
#include "Sorts.h"
#include "Timer.h"
#include <string>
#include <list>

TEST(CorrectnessTest, InsertionSortForVector) {
    std::vector<int> vec = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    InsertionSort(vec.begin(), vec.end());
    ASSERT_EQ(vec, std::vector<int>({1, 2, 3, 4, 5, 6, 7, 8, 9}));
}

TEST(CorrectnessTest, InsertionSortForString) {
    std::string IAmString = "abcdeABCDE";
    InsertionSort(IAmString.begin(), IAmString.end());
    ASSERT_EQ(IAmString, std::string("ABCDEabcde"));
}

TEST(CorrectnessTest, InsertionSortForList) {
    std::list<int> my_list = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    InsertionSort(my_list.begin(), my_list.end());
    ASSERT_EQ(my_list, std::list<int>({1, 2, 3, 4, 5, 6, 7, 8, 9}));
}

TEST(CorrectnessTest, BubbleSortForVector) {
    std::vector<int> vec = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    BubbleSort(vec.begin(), vec.end());
    ASSERT_EQ(vec, std::vector<int>({1, 2, 3, 4, 5, 6, 7, 8, 9}));
}

TEST(CorrectnessTest, BubbleSortForString) {
    std::string IAmString = "abcdeABCDE";
    BubbleSort(IAmString.begin(), IAmString.end());
    ASSERT_EQ(IAmString, std::string("ABCDEabcde"));
}

TEST(CorrectnessTest, BubbleSortForList) {
    std::list<int> my_list = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    BubbleSort(my_list.begin(), my_list.end());
    ASSERT_EQ(my_list, std::list<int>({1, 2, 3, 4, 5, 6, 7, 8, 9}));
}

TEST(CorrectnessTest, MergeSortForVector) {
    std::vector<int> vec = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    MergeSort(vec.begin(), vec.end());
    ASSERT_EQ(vec, std::vector<int>({1, 2, 3, 4, 5, 6, 7, 8, 9}));
}

TEST(CorrectnessTest, MergeSortForString) {
    std::string IAmString = "abcdeABCDE";
    MergeSort(IAmString.begin(), IAmString.end());
    ASSERT_EQ(IAmString, std::string("ABCDEabcde"));
}

TEST(CorrectnessTest, MergeSortForList) {
    std::list<int> my_list = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    MergeSort(my_list.begin(), my_list.end());
    ASSERT_EQ(my_list, std::list<int>({1, 2, 3, 4, 5, 6, 7, 8, 9}));
}

TEST(CorrectnessTest, QuickSortForVector) {
    std::vector<int> vec = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    QuickSort(vec.begin(), vec.end());
    ASSERT_EQ(vec, std::vector<int>({1, 2, 3, 4, 5, 6, 7, 8, 9}));
}

TEST(CorrectnessTest, QuickSortForString) {
    std::string IAmString = "abcdeABCDE";
    QuickSort(IAmString.begin(), IAmString.end());
    ASSERT_EQ(IAmString, std::string("ABCDEabcde"));
}

TEST(CorrectnessTest, QuickSortForList) {
    std::list<int> my_list = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    QuickSort(my_list.begin(), my_list.end());
    ASSERT_EQ(my_list, std::list<int>({1, 2, 3, 4, 5, 6, 7, 8, 9}));
}

//TEST_F(SortTest, TimerOfInsertionSort) {
//    Timer timer("InsertionSort");
//    timer.start();
//    InsertionSort(arr_10.begin(), arr_10.end());
//    timer.stop("arr_10");
//    timer.start();
//    InsertionSort(arr_100.begin(), arr_100.end());
//    timer.stop("arr_100");
//    timer.start();
//    InsertionSort(arr_1000.begin(), arr_1000.end());
//    timer.stop("arr_1000");
//    timer.start();
//    InsertionSort(arr_10000.begin(), arr_10000.end());
//    timer.stop("arr_10000");
//    timer.start();
//    InsertionSort(arr_100000.begin(), arr_100000.end());
//    timer.stop("arr_100000");
//    timer.start();
//    InsertionSort(arr_250000.begin(), arr_250000.end());
//    timer.stop("arr_250000");
//}
//
//TEST_F(SortTest, TimerOfBubbleSort) {
//    Timer timer("BubbleSort");
//    timer.start();
//    BubbleSort(arr_10.begin(), arr_10.end());
//    timer.stop("arr_10");
//    timer.start();
//    BubbleSort(arr_100.begin(), arr_100.end());
//    timer.stop("arr_100");
//    timer.start();
//    BubbleSort(arr_1000.begin(), arr_1000.end());
//    timer.stop("arr_1000");
//    timer.start();
//    BubbleSort(arr_10000.begin(), arr_10000.end());
//    timer.stop("arr_10000");
//    timer.start();
//    BubbleSort(arr_100000.begin(), arr_100000.end());
//    timer.stop("arr_100000");
//    timer.start();
//    BubbleSort(arr_250000.begin(), arr_250000.end());
//    timer.stop("arr_250000");
//}
//
//TEST_F(SortTest, TimerOfMergeSort) {
//    Timer timer("MergeSort");
//    timer.start();
//    MergeSort(arr_10.begin(), arr_10.end());
//    timer.stop("arr_10");
//    timer.start();
//    MergeSort(arr_100.begin(), arr_100.end());
//    timer.stop("arr_100");
//    timer.start();
//    MergeSort(arr_1000.begin(), arr_1000.end());
//    timer.stop("arr_1000");
//    timer.start();
//    MergeSort(arr_10000.begin(), arr_10000.end());
//    timer.stop("arr_10000");
//    timer.start();
//    MergeSort(arr_100000.begin(), arr_100000.end());
//    timer.stop("arr_100000");
//    timer.start();
//    MergeSort(arr_250000.begin(), arr_250000.end());
//    timer.stop("arr_250000");
//}
//
//TEST_F(SortTest, TimerOfQuickSort) {
//    Timer timer("QuickSort");
//    timer.start();
//    QuickSort(arr_10.begin(), arr_10.end());
//    timer.stop("arr_10");
//    timer.start();
//    QuickSort(arr_100.begin(), arr_100.end());
//    timer.stop("arr_100");
//    timer.start();
//    QuickSort(arr_1000.begin(), arr_1000.end());
//    timer.stop("arr_1000");
//    timer.start();
//    QuickSort(arr_10000.begin(), arr_10000.end());
//    timer.stop("arr_10000");
//    timer.start();
//    QuickSort(arr_100000.begin(), arr_100000.end());
//    timer.stop("arr_100000");
//    timer.start();
//    QuickSort(arr_250000.begin(), arr_250000.end());
//    timer.stop("arr_250000");
//}

TEST_F(SortTest, TimerOfStdSort) {
    Timer timer("STDSORT");
    timer.start();
    std::sort(arr_10.begin(), arr_10.end());
    timer.stop("arr_10");
    timer.start();
    std::sort(arr_100.begin(), arr_100.end());
    timer.stop("arr_100");
    timer.start();
    std::sort(arr_1000.begin(), arr_1000.end());
    timer.stop("arr_1000");
    timer.start();
    std::sort(arr_10000.begin(), arr_10000.end());
    timer.stop("arr_10000");
    timer.start();
    std::sort(arr_100000.begin(), arr_100000.end());
    timer.stop("arr_100000");
    timer.start();
    std::sort(arr_250000.begin(), arr_250000.end());
    timer.stop("arr_250000");
}