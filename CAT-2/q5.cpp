/*
Write a C++ program utilising constructors and destroctors to manipulate an array of non negative integers, 'arr', by cliclically shifting its elements to the right
by k positions., For instance, gien an input array arr=[1,2,3,4,5,6,7], and a shift value k=3, the program should output the transformed array [5,6,7,1,2,3,4].
If shift value k=1, output is [7,1,2,3,4,5,6]. Illustrate the working of the algorithm and provide comments with explanations of code.

Note: Input array should be passed to the constructoer of the "ShiftArray" class from the main function

#include <iostream>

class ShiftArray{
    int arr[];
    int shift;

public:
    ShiftArray(int inp[], int k){
        arr = new int[inp.length()];

        for(int i = 0; i < inp.length(); i++){
            arr[i] = inp[i];
        }

        shift = k;
    }

    ~ShiftArray(){
        cout << "idk what to do here to be honest";
    }

    void cyclicShift(){
        int temp[arr.length()];
        int index = 0;
        
        for(int i = arr.length()-1; i < arr.length(); i++)
            temp[index++] = arr[i];
        
        for(int i = 0; i < arr.length()-k-1; i++)
            temp[index++] = arr[i];
        
        for(int i = 0; i < arr.length(); i++)
            arr[i] = temp[i];
    }
};
