#pragma once
#include "pch.h"
#include <iostream>
using namespace std;


template <typename T, size_t N>
void Rotate(T(&arr)[N], size_t k)
{
    k = k % N;
    T temp;
    for (size_t s = 0; s < k; ++s)
    {
        temp = arr[0];
        for (size_t a = 0; a < N - 1; ++a)
        {
            arr[a] = arr[a + 1];
        }
        arr[N - 1] = temp;
    }
}
template <typename T, size_t N>
void DisplayArray(T(&arr)[N])
{
    for (size_t s = 0; s < N; ++s)
    {
        cout << arr[s] << " ";
    }
    cout << endl;
}
