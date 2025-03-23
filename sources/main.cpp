#include<iostream>
using namespace std;
#include "MyArray.hpp"

void test1(){
    MyArray<int> arr1(10);
    //arr1 = arr2;
    MyArray<int> arr3(100);
    arr3 = arr1;
}

int main(){
    test1();
}