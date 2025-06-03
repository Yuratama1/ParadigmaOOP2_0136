#include <iostream>
using namespace std;

class baseClass{
    public:
        virtual void perkenalan(){
            cout << "hallo saya fungsi dari base class";
        }
};

class derivedclass : public baseClass{
    public:
        void perkenalan(){
            cout << "hallo saya fungsi dari derived class";
        }
};