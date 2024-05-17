#include <iostream>
#include <string>
using namespace std;

class Employee{
public:
    string Name;
    string companyName;
    int age;

    void printInfo(){
        cout << "Name: " << Name << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Age" << age << endl;
    }
    
    Employee(string name, string companyName, int age){
        Name = name;
        companyName = companyName;
        age = age;
    }

};

int main(){
  Employee employee1 = Employee("John", "Google", 30);
  employee1.printInfo();
}
