#include<iostream>
using namespace std;
#include "MyArray.hpp"

void printIntArray(MyArray <int>& arr){
    for(int i = 0; i< arr.Get_Size(); i++){
        cout << arr[i] << endl;
    }
}

void test1(){
    MyArray<int>arr1(5);
    for(int i = 0; i < 5; i++){
        arr1.Push_Back(i);
    }
    printIntArray(arr1);
    cout << "arr1 的容量为：" << arr1.Get_Capacity() << endl;
    cout << "arr1 的大小为：" << arr1.Get_Size() << endl; 

    MyArray<int>arr2(arr1);
    printIntArray(arr2);
}

int main(){
    test1();
}