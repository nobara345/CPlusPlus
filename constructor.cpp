// Constructor 

// #include<iostream>
// using namespace std;

// class Abc
// {
//     public:
//         int a;
//         Abc(int a1)
//         {
//             a = a1;
//             cout << "Hello\n";
//         }
// };

// int main()
// {
//     Abc obj(10), obj2(20), onj234(30); 
//     cout << onj234.a;  
//     return 0;
// }



// ======================================


#include<iostream>
using namespace std;

class student
{
    private:
        int age, rollNumber, classs;
    public:
        student(int a, int r, int c)
        {
            age = a;
            rollNumber = r;
            classs = c;
        }

        void printData()
        {
            cout << age << endl;
            cout << rollNumber << endl;
            cout << classs << endl;
        }
};



int main()
{
    student pratik(4, 101, 1);
    student pratik1(4, 102, 2);
    student pratik2(5, 105, 5);
    student pratik3(5, 106, 5);
    student pratik4(4, 103, 2);

    pratik2.printData();
    return 0;
}