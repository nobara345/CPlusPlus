// Error Handling

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout << "enter a number = ";
//     cin>> a;
//     cout << "enter a number = ";
//     cin>> b;
//     cout << a / b;
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "enter a number = ";
    cin>> a;
    cout << "enter a number = ";
    cin>> b;
    
    try
    {
        if(b!=0)
        {
            cout << a / b;
        }
        else
        {
            throw b;
        }
    }
    
    catch (int lol)
    {
        cout << "zero division error\n";
    }
    
    cout << "something";
    return 0;
}