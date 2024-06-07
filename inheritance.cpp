// Single Inheritance

// #include<iostream>
// using namespace std;
// class Parent
// {
//     public:
//         void ParentQuality()
//         {
//             cout << "maraychi" << endl;
//         }
// };

// class Child : public Parent
// {
//     public:
//         void ChildQuality()
//         {
//             cout << "mar khaychi" << endl;
//         }
// };

// int main()
// {
//     // Parent raju;
//     // raju.ParentQuality();

//     Child chutki;
//     chutki.ChildQuality();
//     chutki.ParentQuality();
//     return 0;
// }
// // // Multiple Inheritance

// #include<iostream>
// using namespace std;

// class Dad
// {
//     public:
//         void DadQuality()
//         {
//             cout << "Strict" << endl;
//         }
// };

// class Mom
// {
//     public:
//         void MomQuality()
//         {
//             cout << "molbhav" <<endl;
//         }
// };


// class Child : public Dad, public Mom
// {
//     public:
//         void ChildQuality()
//         {
//             cout << "Dance" << endl;
//         }
// };

// int main()
// {
//     // Dad raju;
//     // raju.DadQuality();

//     // Mom tuntun;
//     // tuntun.MomQuality();

//     Child chutki;
//     chutki.ChildQuality();
//     chutki.MomQuality();
//     chutki.DadQuality();

//     return 0;
// }

// heirarcical inheritance

// #include<iostream>
// using namespace std;

// class Parent
// {
//     public:
//         void ParentQuality()
//         {
//             cout << "Singing" <<endl;
//         }
// };

// class Child1 : public Parent
// {
//     public:
//         void Child1Quality()
//         {
//             cout << "Dancing" <<endl;
//         }
// };

// class Child2 :public Parent
// {
//     public:
//         void Child2Quality()
//         {
//             cout << "Guitar" <<endl;
//         }
// };

// int main()
// {
//     // Child1 chin1;
//     // chin1.Child1Quality();
//     // chin1.ParentQuality();

//     Child2 chin2;
//     chin2.Child2Quality();
//     chin2.ParentQuality();
    
//     return 0;
// }

// multi level inheritance

// #include<iostream>
// using namespace std;

// class GrandParent
// {
//     public:
//         void GrandParentQuality()
//         {
//             cout << "Story Telling"<<endl;
//         }
// };

// class Parent : public GrandParent
// {
//     public:
//         void ParentQuality()
//         {
//             cout << "Hardworking" << endl;
//         }
// };

// class Child : public Parent
// {
//     public:
//         void ChildQuality()
//         {
//             cout << "Good listener" << endl;
//         }
// };

// int main()
// {
//     GrandParent Champaklal;
//     Champaklal.GrandParentQuality();

//     Parent Jethalal;
//     Jethalal.ParentQuality();
//     Jethalal.GrandParentQuality();

//     Child Tappu;
//     Tappu.ChildQuality();
//     Tappu.ParentQuality();
//     Tappu.GrandParentQuality();

//     return 0;
// }

// hybrid inheritance
#include<iostream>
using namespace std;

class A
{
    public:
    void AQuality()
    {
        cout<<"writter"<<endl;
    }
};

class B:public A
{
    public:
    void BQuality()
    {
        cout<<"writting"<<endl;
    }
};

class C:public A
{
    public:
    void CQuality()
    {
        cout<<"listening"<<endl;
    }
};

class D:public A
{
    public:
    void DQuality()
    {
        cout<<"reading"<<endl;
    }
};

class E:public A,public B
{
    public:
    void EQuality()
    {
        cout<<"dance"<<endl;
    }
};

class F:public E,public D
{
    public:
    void FQuality()
    {
        cout<<"singing"<<endl;
    }
};

class G:public F
{
    public:
    void GQuality()
    {
        cout<<"rapping"<<endl;
    }
};

class H:public F
{
    public:
    void HQuality()
    {
        cout<<"guitarist"<<endl;
    }
};

class I:public F
{
    public:
    void IQuality()
    {
        cout<<"shayar"<<endl;
    }
};

 class J:public G,public H
{
    public:
    void JQuality()
    {
        cout<<"flautist"<<endl;
    }
};

int main()
{
    // C komal;
    // komal.CQuality();
    // komal.AQuality();

    // F raghu;
    // raghu.FQuality();
    // raghu.DQuality();
    // raghu.EQuality();

    J rani;
    rani.JQuality();
    rani.GQuality();
    rani.HQuality();

}