#include <iostream>
#include <string>
using namespace std;

class AbstractEmployee{
  public:
    virtual void askForPromotion()=0;
};

class Employee{
  private:
    string company;
    int age;

  protected:
    string Name;

public:
    
    void printInfo(){
  cout << "The name of the employee is: " << Name << "works in company: " << company << "with age: " << age << endl;
  }
  Employee(string name, string company,int age){
    Name = name;
    company = company;
    age = age;
  }

  void setName(string name){
     Name = name;
  }
   string getName(){
    return Name;
  }

  void setAge(){
    age = age;
  }

  int getAge(){
    return age;
  }

   virtual void Work(){
    cout << Name << "is working" << endl;
  }
  
};

class Developer: public Employee{
  public:
    string favProgrammingLanguage;
    Developer(string Name, string company, int age, string favProgrammingLanguage): Employee(Name, company, age){
    favProgrammingLanguage = favProgrammingLanguage;
  }
      void fixBug(){
    cout << Name<< "fixed bug using " << favProgrammingLanguage << endl;
    }
};

class Teacher :public  Employee{
  public:
    string subject;
    void prepareLesson(){
      cout << Name << " is preparing " << subject << "lesson" << endl;
    }
     Teacher(string Name, string company, int age, string subject): Employee(Name, company, age){
        subject = subject;
  }

  void Work(){
    cout << Name << "is teaching" << subject << endl;
  }
};

int main(){

  Developer d = Developer("John", "Apple", 30, "C++");
Teacher t = Teacher("Jane", "Microsoft", 25, "Mathematics");
  Employee* e1 = &t;
  Employee* e2 = &d;

  e1->Work();
  e2->Work();
  return 0;
}

