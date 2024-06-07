// Class and Objects

// class className 
// {
//     private:
//         members, a,b,c;
//     public:
//         members, x,y,z;
// };

// className obj;



// #include<iostream>
// using namespace std;
// class Abc
// {
//     private:
//         int a,b;
//     public:
//         int c,d;
//         void getdata(int a1, int a2)
//         {
//             a = a1;
//             b = a2;
//         }

//         void printData()
//         {
//             cout << a <<endl;     
//             cout << b <<endl;     

//         }
// };

// int main()
// {
//     Abc obj;
//     obj.c = 10;
//     obj.d = 20;
//     obj.getdata(1200, 1300);
//     obj.printData();
//     // cout << obj.c<< " "<< obj.d;

//     return 0;
// }
// =============================

#include<iostream>
using namespace std;
class Abc
{
    private:
        int a,b;
        void Sum()
        {
            cout << a+b <<endl;
        }
    public:
        int c,d;
        void getdata(int a1, int a2)
        {
            a = a1;
            b = a2;
        }
        void printData()
        {
            cout << a <<endl;     
            cout << b <<endl;  
            cout << c <<endl;  
            cout << d <<endl;  
            Sum();
        }
};

int main()
{
    Abc obj;
    obj.c = 10;
    obj.d = 20;
    obj.getdata(1200, 1300);
    obj.printData();
    // cout << obj.c<< " "<< obj.d;

    return 0;
}