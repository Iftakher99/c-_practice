#include <iostream>
using namespace std;

class AbstractEmployee{
virtual void AskforPromotion ()=0  ;


};

class Employee:AbstractEmployee {
  private:
string Company;
int Age;
protected:
string Name;
public:
void setName(string name){
  Name=name;
};
string getName(){
return Name;
};
void setCompany(string company){//setter
  Company=company;
};
string getCompany(){// getter
return Company;
};
void setAge(int age){
  if(age >=18){
  Age=age;}
};
int getAge(){
return Age;
};
void IntroduceYourShelf (){
  std::cout<<"Name -" << Name << std::endl;
  std::cout<<"Company -" << Company << std::endl;
  std::cout<<"Age -" << Age << std::endl;
}
Employee( string name,string company,int age){
  Name=name;
  Company=company;
  Age=age;
}

void AskforPromotion(){
  if (Age>=30){
    cout << Name << " got Promotion!" <<endl;  
  }else{
    cout << Name << " Sorry Your Promotion not possible at this time!" <<endl;  

  }
}
void Work (){
  std::cout<<Name <<" doing his Job" <<std::endl; 
};

};
class  Developer:public Employee  {
public:
string FevProgrammingLan;

Developer(string name,string company,int age,string fevProgrammingLan):Employee(name,company,age){
  FevProgrammingLan=fevProgrammingLan;
}
void fixbug(){
  std::cout<< getName() <<" Use " << FevProgrammingLan << " ToFix Bug In " << getCompany() << std::endl;
}void Work (){
  std::cout<<Name <<" fixing bug using "<< FevProgrammingLan <<std::endl; 
};

};
class Teacher:public Employee {
  public:
  string Subject;
  Teacher(string name,string company,int age,string subject) :Employee(name,company,age) 
  {
    Subject=subject;
  }
void Preparelesson (){
  cout << Name << " is preparing " << Subject <<" lesssons" << endl;
}void Work (){
  std::cout<<Name <<" is teaching " << Subject <<std::endl; 
};
};


int main()
{

//  Employee employee1=Employee("Iftakher", "Mahmud IT",22);
//  Employee employee2=Employee("John", "Doe",35);

Developer d= Developer("Ifatkher 1" ,"Mahmud IT ",35, "Js" );
Teacher t= Teacher("Iftakher 2", "IST" , 23,"Programming");

d.Work();
t.Work();


} 