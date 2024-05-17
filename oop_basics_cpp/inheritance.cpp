#include <iostream>
#include <string>
using namespace std;

class AbstractEmployee{
  public:
    virtual void askForPromotion()=0;
};

class Employee: AbstractEmployee{
  private:
    string name;
    string company;
    int age;
  public:
    
    void printInfo(){
  cout << "The name of the employee is: " << name << "works in company: " << company << "with salary: " << salary << endl;
    
  Employee(string name, string company,int age){
    name = name;
    company = company;
    age = age;
  }

  void setName(string name){
    name = name;
  }
   void getName(){
    return name;
  }

  void setAge(int age){
    age = age;
  }

  int getAge(){
    return age;
  }
  
};

class Developer: Employee{
  public:
    string favProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage): Employee(name, company, age){
    favProgrammingLanguage = favProgrammingLanguage;
  }
      void fixBug(){
    cout << getName() << "fixed bug using " << favProgrammingLanguage << endl;

  
    }
};

int main(){

  Developer d = Developer("John", "Apple", 30, "C++");
  d.fixBug();
  return 0;
}
