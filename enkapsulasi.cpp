#include <iostream>
using namespace std;

class remotlampu{
    private:
        string saklarno[10];
    public:
        void setsaklarno(int i, string value){
            saklarno[1] = value;
        }
        string getsaklarno(int i){
            return saklarno[i];
        }
};

int main(){
    remotlampu lampurumah;

    lampurumah.setsaklarno(0, "Lampu Teras Rumah");
    lampurumah.setsaklarno(1, "Lampu Ruang Tamu");
    lampurumah.setsaklarno(2, "Lampu Kamar Tidur");
    lampurumah.setsaklarno(3, "Lampu Dapur");

    cout << lampurumah.getsaklarno(0) << endl;
    cout << lampurumah.getsaklarno(1) << endl;
    cout << lampurumah.getsaklarno(2) << endl;
    cout << lampurumah.getsaklarno(3) << endl;
    return 0;
}