#include <iostream>
#include <string>
using namespace std;

class AbstractEmployee{
  virtual void askForPromotion() = 0;

};

class Employee:AbstractEmployee{
  private:
    string name;
    string companyName;
    int age;

public:
    void setName(string name){
        this->name = name;
    }
    void setCompanyName(string companyName){
        this->companyName = companyName;
    }
    void setAge(int age){
        this->age = age;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Age: " << age << endl;
    }
    void askForPromotion(){
        if(age > 30){
            cout << name << " got promoted!" << endl;
        }
        else{
            cout << name << " sorry!" << endl;
        }
    }
    Employee(string name, string companyName, int age){
        this->name = name;
        this->companyName = companyName;
        this->age = age;
    }

};


int main(){
  Employee employee1 = Employee("John", "Google", 35);
   
   Employee employee2 = Employee("Mary", "Amazon", 28);
  employee1.askForPromotion();
  employee2.askForPromotion();
}



