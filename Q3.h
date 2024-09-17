#pragma once

#include<iostream>
using namespace std;


#include <iostream>

template <typename T>
class Container {
private:
    T* values;      
    int capacity;   
    int counter;    

public:
    Container(int cap) : capacity(cap), counter(0) {
        values = new T[capacity];
    }

    ~Container() {
        delete[] values;
    }

    bool isFull() const {
        return counter == capacity;
    }

    void insert(const T& value) {
        if (!isFull()) {
            values[counter++] = value;
        }
        else {
            std::cout << "Container is full. Cannot insert more elements." << std::endl;
        }
    }

    bool search(const T& value) const {
        for (int i = 0; i < counter; i++) {
            if (values[i] == value) {
                return true;
            }
        }
        return false;
    }

    void remove(const T& value) {
        int i;
        for (i = 0; i < counter; i++) {
            if (values[i] == value) {
                break;
            }
        }

        if (i < counter) { 
            for (int j = i; j < counter - 1; j++) {
                values[j] = values[j + 1];
            }
            counter--;
        }
    }

    void print() const {
        for (int i = 0; i < counter; i++) {
            std::cout << values[i] << " ";
        }
        std::cout << std::endl;
    }
};

