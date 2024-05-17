#include <iostream>
#include <string>
using namespace std;


class Employee{
   public:
  string name;
  string companyName;
  int age;

  void printInfo(){
    cout<< " Name " << name << endl;
    cout <<" companyName " << companyName << endl;
    cout << " age " << age << endl;
  }
};
int main(){

  Employee employee;
  employee.name = "Mansi";
  employee.companyName = "YT";
  employee.age = 25;

  employee.printInfo();

  Employee employee2;
  employee2.name = "Mansi";
  employee2.companyName = "YT";
  employee2.age = 30;
  employee2.printInfo();
  return 0;
}

