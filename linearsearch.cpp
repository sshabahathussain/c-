#include<iostream>
using namespace std;
int main() {
    int arr[] = {12,34,54,2,22,89,90,65,92,15};
    int size = sizeof(arr)/sizeof(int);
    int key = 65;
    for(int i =0; i<size;i++) {
        if(key == arr[i]){
            cout<<"key element is at index: "<<i;
                return 0;
        }
    }
    cout<<"key element is not present in the given array";
}