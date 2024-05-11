#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[10] = {12, 34, 54, 62, 72, 80, 88, 95, 98, 99};
    // int size = sizeof(arr)/sizeof(int);
    int l = 0, h = 9, key = 99, mid;
    // int max = INT_MIN;
    // int min = INT_MAX;
    // cout<<max<<" "<<min;
    while (l<=h)
    {
        mid = (l + h) / 2;
        if (arr[mid] == key)
        {
           cout<<"key element is at index: "<< mid;
           exit (0);
        }
        else if (arr[mid] > key)
        {
            h = mid - 1;
        }
        else
        {
             l = mid + 1;
           
        }
    }
cout<<"key element is not present";
    return 0;
}