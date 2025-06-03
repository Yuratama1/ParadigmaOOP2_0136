#include <iostream>
using namespace std;

class remotlampu{
    private:
        string saklarno[10];
    public:
        void saklarno(int i, string value){
            saklarno[1] = value;
        }
        string getsaklarno(int i){
            return saklarno[i];
        }
};