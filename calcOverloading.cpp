#include<bits/stdc++.h>
#include<string>
#include<map>
#include<set>
#include<vector>
#include <iostream>
// #include <conio.h>

using namespace std;

class calculator
{
    private:
        float value;

    public:
        calculator(): value(0)
        {}

        void getdata()
        {
            cout << "enter number: ";
            cin >> value;
        }

        void setdata()
        {
            cout << "value: " << value << endl;
        }

       calculator operator + (calculator) const;
        calculator operator - (calculator) const;
        calculator operator * (calculator) const;
        calculator operator / (calculator) const;
};

calculator calculator::operator + (calculator arg2) const
{
    calculator temp;
    temp.value = value + arg2.value;
    return temp;
}

calculator calculator::operator - (calculator arg2) const
{
    calculator temp;
    temp.value = value - arg2.value;
    return temp;
}

calculator calculator::operator * (calculator arg2) const
{
    calculator temp;
    temp.value= value * arg2.value;
    return temp;
}

calculator calculator::operator / (calculator arg2) const
{
    calculator temp;
    temp.value = value/ arg2.value;
    return temp;
}

 int main()
{
    calculator obj1, obj2, obj3;
   int operation;

    obj1.getdata();
    cout << "1st value entered: ";
    obj1.setdata();
    cout << endl;

    obj2.getdata();
    cout << "2nd value entered: ";
    obj2.setdata();
    cout << endl;

    cout << "Input operation 1234: +,   2: -,   3: *,   4: /     ";
    cin >> operation;
    cout << endl;

    switch (operation)
    {
        case 1:
            obj3 = obj1 + obj2;
            break;
        case 2:
            obj3 = obj1 - obj2;
            break;
        case 3:
            obj3 = obj1 * obj2;
            break;
        case 4:
            obj3 = obj1 / obj2;
            break;
        default:
            cout << "  " << endl;
    }

    cout << "Result ";
    obj3.setdata();
    cout << endl;

}