#include<iostream>
#include<string>
using namespace std;
#include "MyArray.hpp"




void printIntArray(MyArray <int>& arr){
    for(int i = 0; i< arr.Get_Size(); i++){
        cout << arr[i] << endl;
    }
}

//测试内置数据类型
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
// 自定义数据类型
class Person{
  
    public:
        Person(){}
        Person(string name,int age){
            this->m_Name = name;
            this->m_Age = age;
        }
    
        string m_Name;
        int m_Age;
    
    
};
void printPersonArray(MyArray<Person>& arr)
{
    for(int i = 0; i < arr.Get_Size(); i++){
        cout << "姓名：" << arr[i].m_Name << "年龄：" << arr[i].m_Age << endl;
    }
}
// 测试自定义数据类型
void test2(){
    MyArray<Person>arr(10);
    
    Person p1("孙悟空",999);
    Person p2("韩信",30);
    Person p3("妲己",20);
    Person p4("赵云",25);
    Person p5("安琪拉",27);

    arr.Push_Back(p1);
    arr.Push_Back(p2);
    arr.Push_Back(p3);
    arr.Push_Back(p4);
    arr.Push_Back(p5);

    printPersonArray(arr);
}

int main(){
    test1();
    test2();
}