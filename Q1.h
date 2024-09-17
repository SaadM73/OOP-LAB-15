#include "pch.h"
#include <iostream>
using namespace std;

template <typename T, int N>
T* RemoveDups(T(&arr)[N], int& newSize)
{
    int size = N;
    newSize = 0;
    for (int s = 0; s < size; s++)
    {
        bool found = false;
        for (int a = 0; a < newSize; a++)
        {
            if (arr[s] == arr[a])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            arr[newSize] = arr[s];
            newSize++;
        }
    }
    if (newSize < size)
    {
        T* temp = new T[newSize];
        for (int s = 0; s < newSize; s++)
        {
            temp[s] = arr[s];
        }
        return temp;
    }

    return arr;
}