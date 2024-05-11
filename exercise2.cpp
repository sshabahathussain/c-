#include<iostream>
using namespace std;

int main() {
float salary,allowance,deductions,net_salary;
cout<<"Enter basic salary, allowance and deduction"<<endl;
cin>>salary>>allowance>>deductions;
net_salary = salary + salary* 0.01 * allowance - salary* 0.01*deductions; 
cout<<"net_salary = "<< net_salary;
    return 0;
}