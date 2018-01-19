#include<iostream>
using namespace std;
enum class MyEnum{
    EnumValue1,
    EnumValue2=10,
    EnumValue3
};
typedef struct{
    char fisrtInitial;
    char middleInitial;
    char lastInitial;
    int employeeNumber;
    int salary;
}EmployeeT;
int main(){
    // EmployeeT anEmployee;
    // anEmployee.fisrtInitial='M';
    // anEmployee.middleInitial='R';
    // anEmployee.lastInitial='G';
    // anEmployee.employeeNumber=42;
    // anEmployee.salary=80000;
    // //output the values of an employee
    // cout<<"Employee: "<<anEmployee.fisrtInitial<<anEmployee.middleInitial<<anEmployee.lastInitial<<endl;
    // cout<<"Number: "<<anEmployee.employeeNumber<<endl;
    // cout<<"Salary:$"<<anEmployee.salary<<endl;
    // int arr[]={1,2,3,4};
    // for(auto i :arr){
    //     i+=2;
    //     cout<<i<<endl;
    // }
    int myArray[10];
    for(int i=0;i<10;i++){
        myArray[i]=0;
    }
    
    system("pause");
    return 0;
}