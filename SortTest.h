#pragma once

#include <gtest/gtest.h>
#include <algorithm>
#include <vector>
#include <random>

class SortTest : public ::testing::Test {
protected:
    void SetUp() override {
        Test::SetUp();
        auto gen = [this]() {
            return number_distance(mercenne_engine);
        };
        arr_10.resize(10);
        arr_100.resize(100);
        arr_1000.resize(1000);
        arr_10000.resize(10000);
        arr_100000.resize(100000);
        arr_250000.resize(250000);
        std::generate(arr_10.begin(), arr_10.end(), gen);
        std::generate(arr_100.begin(), arr_100.end(), gen);
        std::generate(arr_1000.begin(), arr_1000.end(), gen);
        std::generate(arr_10000.begin(), arr_10000.end(), gen);
        std::generate(arr_100000.begin(), arr_100000.end(), gen);
        std::generate(arr_250000.begin(), arr_250000.end(), gen);
    }
    void TearDown() override {
        Test::TearDown();
    }
public:
    std::vector<int> arr_10;
    std::vector<int> arr_100;
    std::vector<int> arr_1000;
    std::vector<int> arr_10000;
    std::vector<int> arr_100000;
    std::vector<int> arr_250000;
    std::vector<void *> arrays{&arr_10, &arr_100, &arr_1000, &arr_10000, &arr_10000, &arr_250000};
private:
    std::random_device rnd_device;
    std::mt19937 mercenne_engine{rnd_device()};
    std::uniform_int_distribution<int> number_distance{1, 1000000};
};