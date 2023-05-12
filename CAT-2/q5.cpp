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