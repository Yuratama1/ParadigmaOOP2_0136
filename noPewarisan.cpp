#include <iostream>
using namespace std;

class baseClass final{
    public:
        virtual void perkenalan(){
            cout << "hallo saya fungsi dari base class";
        }
};
class baseClass1 {
    public:
        virtual void perkenalan(){
            cout << "hallo saya fungsi dari base class";
        }
};

class derivedclass : public baseClass1{
    public:
        void perkenalan(){
            cout << "hallo saya fungsi dari derived class";
        }
};

int main(){
    derivedclass a;
    a.perkenalan();
    return 0;
}