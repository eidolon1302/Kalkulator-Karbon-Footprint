#include <iostream>
using namespace std;

int getOption(){
        int choose;
        system("cls");
        cout << "======================================================================" << endl;
        cout << "               CARBON FOOTPRINT CALCULATOR PROGRAM                    " << endl;
        cout << "======================================================================" << endl;
        cout << "1. Carbon Footprint Calculator" << endl;
        cout << "2. Panduan" << endl;
        cout << "3. Tentang program kami" << endl;
        cout << "4. Selesai" << endl;
        cout << "======================================================================" << endl;
        cout << "pilih [1-4]" << endl;
        cin >> choose;
        return choose;
    }

int getOptionElectric(){
        int choose;
        system("cls");
        cout << "======================================================================" << endl;
        cout << "                    CARBON FOOTPRINT CALCULATOR                       " << endl;
        cout << "======================================================================" << endl;
        cout << "1. TV" << endl;
        cout << "2. Laptop" << endl;
        cout << "3. Kulkas" << endl;
        cout << "4. AC" << endl;
        cout << "5. Phone" << endl;
        cout << "6. Finish" << endl;
        cout << "======================================================================" << endl;
        cout << "pilih [1-6]" << endl;
        cin >> choose;
        return choose;
    }