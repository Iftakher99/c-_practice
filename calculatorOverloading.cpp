#include <iostream>
using namespace std;
int add (int x ,int y){
    return x+y;
}

int substruct (int x ,int y){
    return x-y;
}
int multiply (int x ,int y){
    return x*y;
}
int division (int x ,int y){
    return x/y;
}

int main (){
    int num1 ,num2,result,opr;
   
    cout<< " Inter  two numbers"  ;
    cin >> num1>>num2;
    cout << " Inter the operator \n:  1 for + \n 2 for - \n 3 for * 4 for / /n  " ;
    cin>>opr;
    if (opr ==1)
    {
        result=add(num1,num2);
        cout<<result;
    }else if (opr == 2){
 result=substruct(num1,num2);
        cout<<result;
    }else if (opr == 3){
 result=multiply(num1,num2);
        cout<<result;
    }
    else if (opr == 4){
 result=division(num1,num2);
        cout<<result;
    }
    return 0;

} 