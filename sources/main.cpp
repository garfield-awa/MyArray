#include<iostream>
using namespace std;
#include "MyArray.hpp"
#include<string>
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
    arr2.Pop_Back();
    printIntArray(arr2);
}
class Person{
  
public:
    Person(string name,int age){
        this->m_Name = name;
        this->m_Age = age;
    }

    string m_Name;
    int m_Age;


};
int main(){
    test1();
}