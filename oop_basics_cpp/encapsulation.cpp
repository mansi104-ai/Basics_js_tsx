#include <iostream>
#include <string>
using namespace std;


class Employee{
private:
   string name;
   string CompanyName;
   int age;
public:
  void printInfo(){
    cout <<" The name of the person is "<< name << "working in the company"<< CompanyName<< " and his age is "<< age << "\n";
  }

  void setName(string n){
    name = n;
  }
  void getName(){
    cout << name;
  }

  void setAge(int a){
    if(age>= 25)
    age = a;
  }
   int getAge(){
    return age;
  }
  Employee(string n, string CompanyName, int a){
    name = n;
    CompanyName = CompanyName;
    age = a;
  }
};


int main(){
  Employee employee1("Mansi","Google",22);
  employee1.setName("Siya");
  employee1.setAge(30);

  employee1.printInfo();
  return 0;

}
