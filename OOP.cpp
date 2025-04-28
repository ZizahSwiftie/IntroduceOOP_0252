#include <iostream>
using namespace std;

class planet
{
    private:
        float gravitasi;

    public:
        string nama;
        float diameter;
        
        void displaydata(){
            cout << "halo aku planet "<< nama << ", ukuranku "<< diameter <<", gravitasiku "<< gravitasi<< endl;
        } 
    void inputdata(){
        cout << "input nama planet: ";
        cin >> nama;
        cout << "ukuranku: ";
        cin >> diameter;
        cout << "gravitasiku: ";
        cin >> gravitasi;
    }

}; 
int main()
{
    planet venus;
    venus.inputdata();
    cout << "namanya adlah: " << venus.nama << endl;
    cout << "diameter adalah: " << venus.diameter << endl;

    venus.displaydata();
    return 0;

}