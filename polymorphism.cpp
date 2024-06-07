// Polymorphism

// compile time 
//     function overloading 

// #include<iostream>
// using namespace std;

// void Abc()
// {
//     cout<<"Hello"<<endl;
// }

// void Abc(int a)
// {
//     cout<<"Hello guys 1"<<endl;
// }

// void Abc(double a)
// {
//     cout<<"Hello guys 2"<<endl;
// }

// void Abc(int a, double b)
// {
//     cout<<"Hello guys 3"<<endl;
// }

// void Abc(double b, int a)
// {
//     cout<<"Hello guys 4"<<endl;
// }

// int main()
// {
//     Abc(8,50.0);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void calc(int a, int b)
// {
//     cout <<a<<" + "<< b << " = "<< a+b<<endl;
// }

// void calc(int a, double b)
// {
//     cout <<a<<" - "<< b << " = "<< a-b<<endl;
// }

// void calc(double a, int b)
// {
//     cout <<a<<" x "<< b << " = "<< a*b<<endl;
// }
// void calc(double a, double b)
// {
//     cout <<a<<" / "<< b << " = "<< a / b<<endl;
// }

// void calc(int  a)
// {
//     cout <<a<<" x "<< a << " = "<< a * a<<endl;
// }
// int main()
// {
//     calc(20);
//     return 0;
// }


// =================================================================

// run time 
//     function overriding

// #include<iostream>
// using namespace std;

// class Parent
// {
//     public:
//     void Info()
//     {
//         cout << "I am a Parent class"<< endl;
//     }
// };

// class Child : public Parent
// {
//     public:
//     void Info()
//     {
//         cout << "I am a Child class"<< endl;
//     }
// };

// int main()
// {
//     Child Raju;
//     Raju.Info();
//     return 0;
// }