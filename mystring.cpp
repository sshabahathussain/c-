#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    string str = "My name is shafan";
    cout<<str.size();
    for(int  i = 0; i < str.size(); i++) {
        // if(str[i] == ' ' || str[i] == str.size()) {
        //     str[i] = '$';
        // }
    cout<<str[i];

    }

//    vector<int> v {1, 2, 3, 4, 5};
//    for(int i = 0; i<v.size();i++) {
//     cout<<v[i]<<" ";

//    }
//    cout<<endl;
//    reverse(v.begin() +2,v.begin() + 4);
   
//    for(int i = 0; i<v.size();i++) {
//     cout<<v[i]<<" ";

//    } 
    return 0;
}