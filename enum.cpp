#include<iostream>
using namespace std;
enum day {mon,tue,wed,thurs,fri,sat,sun};
typedef int marks;
int main() {
    day d;
    d=mon;
    marks m1=35,m2 = 89;
    cout<<d<<endl;
    cout<<m1<<","<<m2;

    return 0;
}