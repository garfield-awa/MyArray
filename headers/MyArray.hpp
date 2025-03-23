#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArray{
    public:
        MyArray(int capacity){
            cout << "MyArray有参构造调用" << endl;
            this->m_Capacity = capacity;
            this->m_Size = 0;
            this->pAddress = new T[this->m_Capacity];
        }
        MyArray(const MyArray& arr){
            cout << "MyArray拷贝构造调用" << endl;
            this->m_Capacity = arr.m_Capacity;
            this->m_Size = arr.m_Size;
            //必须进行深拷贝
            this->pAddress = new T[arr.m_Capacity];
            for(int i = 0; i < this->m_Size; i++){
                this->pAddress[i] = arr.pAddress[i];

            }
        }
        //这里同样防止浅拷贝
        MyArray& operator=(const MyArray& arr){
            cout << "MyArray赋值拷贝构造调用" << endl;
            //这种拷贝方式有可能之前已经有了存储，所以要清除掉之前的数据
            if(this->pAddress != NULL){
                delete[] this->pAddress;
                this->pAddress = NULL;
                this->m_Capacity = 0;
                this->m_Size = 0;
            }
            this->m_Capacity = arr.m_Capacity;
            this->m_Size = arr.m_Size;
            this->pAddress = new T[arr.m_Capacity];
            for(int i = 0; i < this->m_Size; i++){
                this->pAddress[i] = arr.pAddress[i];

            }
            return *this;
        }

        void Push_Back(const T & val){
            if(this->m_Size == this->m_Capacity){
                return;
            }
            this->pAddress[this->m_Size] = val;
            this->m_Size++;
        }

        void Pop_Back(){
            if(this->m_Size == 0){
                return
            }
            this->m_Size--;
        }

        T& operator[](int index){
            if(index > this->m_Size){
                return 0;
            }
            return this->pAddress[index]
        }

        int Get_Capacity(){
            return this->m_Capacity;
        }

        int Get_Size(){
            return this->m_Size;
        }

        ~MyArray(){
            if(this->pAddress != NULL){
                cout << "MyArray析构调用" << endl;
                delete[] this->pAddress;
                this->pAddress = NULL;
            }
        }
    private:
        T * pAddress;
        int m_Capacity;
        int m_Size;
    
};