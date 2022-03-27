// #include <iostream> 
// class SecondOfTwins;//forward declaration 
// class FirstOfTwins 
// { 
//     public: 
//     int get(){return a;} 
//     private: 
//     int a=123; 
//     friend void swap(FirstOfTwins &firstOfTwins, SecondOfTwins &secondOfTwins); 
 
// }; 
// class SecondOfTwins 
// { 
//     public: 
//     int get(){return a;} 
//     private: 
//     int a=321; 
//      friend void swap(FirstOfTwins &firstOfTwins, SecondOfTwins &secondOfTwins); 
// }; 
 
// void swap(FirstOfTwins &firstOfTwins, SecondOfTwins &secondOfTwins) 
// { 
//     int a = firstOfTwins.a; 
//     firstOfTwins.a=secondOfTwins.a; 
//     secondOfTwins.a=a; 
// } 
 
// int main() 
// { 
// FirstOfTwins f ; 
// SecondOfTwins s ; 
// std::cout<<f.get()<<' '<<s.get()<<std::endl; 
// swap(f,s); 
// std::cout<<f.get()<<' '<<s.get()<<std::endl; 
// return 0; };
//
// #include<iostream>
// using namespace std;

// class Test {
// private:
//     int x, y, temp;
// public:

//     void input() {
//         cout << "Enter two numbers:";
//         cin >> x>>y;
//     }

//     friend void swap(Test &t);

//     void display() {
//         cout << "After swap x is:" << x;
//         cout << "\nAfter swap y is:" << y;
//     }
// };

// void swap(Test &t) {
//     t.temp = t.x;
//     t.x = t.y;
//     t.y = t.temp;

// }

// int main() {

//     Test t;
//     t.input();

//     swap(t);
//     t.display();

//     return 0;
// };
//
// #include <iostream>
// using namespace std;
// class b;
// class a
// {
// int x;
// public:
// void assign(int t)
// {
// x =t;
// }
// void display()
// {
// cout<<"value of x is: "<<x<<endl;
// }
// friend void swap(a&,b&);
// };
// class b
// {
// int y;
// public:
// void assign(int w)
// {
// y=w;
// }
// void display()
// {
// cout<<"value of y is: "<<y<<endl;
// }
// friend void swap(a&,b&);
// };
// void swap(a &c,b&d)
// {
// int temp;
// temp =c.x;
// c.x = d.y;
// d.y = temp;
// }
// int main()
// {
// a n;
// b m;
// int a,b;
// cout<<"enter x =";
// cin>>a ;
// cout<<"Enter y =";
// cin>>b;
// n.assign(a);
// m.assign(b);
// swap(n,m);
// n.display();
// m.display();

// }