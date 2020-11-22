// Namespaces.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

namespace First {
    void fun() {
        cout << "I'm in first namepsace" << endl;
    }
};

namespace Second {
    void fun() {
        cout << "I'm in second namespace" << endl;
    }
};


int main()
{
    std::cout << "Hello World!\n";
    First::fun();
    Second::fun();
}