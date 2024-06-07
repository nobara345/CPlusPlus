// Destructor 

// #include<iostream>
// using namespace std;

// class Abc
// {
//     public:
//         Abc()
//         {
//             cout << "Hello"<<endl;
//         }
//         ~Abc() // tilda
//         {
//             cout << "Bye Bye"<<endl;
//         }
// };


// int main()
// {
//     Abc ob1;
//     cout << "aadesh"<<endl;
//     return 0;
// }





#include<iostream>
using namespace std;


class Abc
{
    int a;
    public:
        Abc(int num)
        {
            a = num;
            cout << "cons call for ob"<< a <<endl;
        }
        ~Abc() // tilda
        {
            cout << "dis call for ob"<< a <<endl;
           
        }
};


int main()
{
    Abc ob1(1);
    {
        Abc ob2(2);
        {
            cout << "Anu"<<endl;
            Abc ob3(3);
        }
        Abc ob4(4);
    }
    cout << "lol"<<endl;
    return 0;
}