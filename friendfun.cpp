// FRIEND Function

// #include<iostream>
// using namespace std;

// class Abc
// {
//     private:
//         int a;
//         friend void Square(Abc o1);
//     public:
//         void Getdata(int num)
//         {
//             a = num;
//         }
// };

// void Square(Abc o1)
// {
//     cout<< o1.a * o1.a<< endl;
// }


// int main()
// {
//     Abc ob;
//     ob.Getdata(10);
//     Square(ob);
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// 2 + 5i ----> com1
// 4 + 3i ----> com2
// -------
// 6 + 8i ----> ans


#include<iostream>
using namespace std;

class Complex
{
    private:
        int a, b;
        friend Complex Sum(Complex o1, Complex o2);
    public:
        void GetData(int num1, int num2)
        {
            a = num1;
            b = num2;
        }
        void PrintComplex()
        {
            cout << a << " + "<< b << "i"<<endl;
        }
};

Complex Sum(Complex o1, Complex o2)
{
    Complex lol;
    lol.GetData(o1.a+o2.a, o1.b+o2.b);
    return lol;
}

int main()
{
    Complex com1,com2,ans;
    com1.GetData(4,50);
    com2.GetData(4,3);
    com1.PrintComplex();
    com2.PrintComplex();
    cout << "-------\n";
    ans = Sum(com1, com2);
    ans.PrintComplex();
    return 0;
}