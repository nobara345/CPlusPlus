#include<iostream>
using namespace std;

class GrandParent
{
    public:
        void GrandParentQuality()
        {
            cout << "Story Telling"<<endl;
        }
};

class Parent : public GrandParent
{
    public:
        void ParentQuality()
        {
            cout << "Hardworking" << endl;
        }
};

class Child : public Parent
{
    public:
        void ChildQuality()
        {
            cout << "Good listener" << endl;
        }
};

int main()
{
    GrandParent Champaklal;
    Champaklal.GrandParentQuality();

    Parent Jethalal;
    Jethalal.ParentQuality();
    Jethalal.GrandParentQuality();

    Child Tappu;
    Tappu.ChildQuality();
    Tappu.ParentQuality();
    Tappu.GrandParentQuality();

    return 0;
}