#include <iostream>
using namespace std;
class persegipanjang
{
    public:
    float panjang;
    float lebar;
    float luas;

    void inputdata()
    {
        cout << "input panjang: ";
        cin >> panjang;
        cout << "input lebar: ";
        cin >> lebar;
        cout << "input luas: ";
        cin >> luas;
    
    }
    void menghitungluas()
    {
        luas = panjang * lebar;
        
    }
    void displaydata()
    {
        cout << "luas persegi panjang adalah: " << luas << endl;
    }
};


 int main()
 {
    persegipanjang per;
    per.inputdata();
    per.menghitungluas();
    per.displaydata();
    return 0;
 }
