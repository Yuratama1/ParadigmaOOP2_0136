#include <iostream>
using namespace std;

class baseClass{
    public:
        virtual void perkenalan() final{
            cout << "hallo saya fungsi dari base class";
        }
};

class derivedclass : public baseClass{
    public:
        void perkenalan1(){
            cout << "hallo saya fungsi dari derived class";
        }
};

int main(){
    derivedclass a;
    a.perkenalan1();
    return 0;
}