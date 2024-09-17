#pragma once

#include <iostream>

#include <iostream>

template <typename T, int N>
int* findIndicesWithTargetSum(const T(&scores)[N], T target) {
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (scores[i] + scores[j] == target) {
                int* result = new int[2];
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return nullptr; // Return nullptr if no pair is found
}
