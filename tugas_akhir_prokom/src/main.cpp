#include <iostream>
#include "../includes/electricity.h"
#include "../includes/optionelectricity.h"
using namespace std;

int main(){
    int pilihan = getOption();
    char is_continue;
    char type;
    float carbonProduced;
    enum option{CALCULATE = 1, GUIDE, ABOUT, FINISH};

    while (pilihan != FINISH){
        switch (pilihan){
            case CALCULATE:{
                cout << "Carbon Footprint Calculator" << endl;
                cout << endl;
                int pilihan2 = getOptionElectric();
                while (pilihan2 != 6){
                    switch (pilihan2){
                        case 1:{
                            Test television;
                            television.lama;
                            television.daya;
                            television.efactor = 2.5;
                            television.jumlah; 
                            cout << "TV" << endl;
                            retry:
                            cout << "Lama Penggunaan    : ";cin >> television.lama;
                            cout << "Daya Unit          : ";cin >> television.daya;
                            cout << "Jumlah Unit        : ";cin >> television.jumlah;
                            cout << "is is correct?(y/n): ";cin >> type;
                            if ((type == 'y') | (type == 'Y')){  
                                carbonProduced += television.calculate();    
                                cout << "carbon produced :" << carbonProduced << " Ton CO2/day" << endl;  
                            }else {
                                goto retry;
                            }                            

                        }   break;
                        case 2:{
                            cout << "Laptop" << endl;
                            Test laptop;
                            laptop.daya;
                            laptop.jumlah;
                            laptop.lama;
                            laptop.efactor = 3;
                            retry2:
                            cout << "Lama Penggunaan    : ";cin >> laptop.lama;
                            cout << "Daya Unit          : ";cin >> laptop.daya;
                            cout << "Jumlah Unit        : ";cin >> laptop.jumlah;
                            cout << "is is correct?(y/n): ";cin >> type;
                            if ((type == 'y') | (type == 'Y')){
                                carbonProduced += laptop.calculate();   
                                cout << "carbon produced :" << carbonProduced << " Ton CO2/day" << endl; 
                            }else {
                                goto retry2;
                            }        
                        }   break;
                        case 3:
                            cout << "Kulkas" << endl;
                        default:
                            cout << "Pilihan tidak ditemukan" << endl;
                            break;
                    }
                    label_continue1:

                    cout << "Continue choose stuff?(y/n) : ";cin >> is_continue;
                    if ((is_continue == 'y') | (is_continue == 'Y')){
                        pilihan = getOptionElectric();
                    }else if ((is_continue =='n') | (is_continue == 'N')){
                        break;
                    }else{
                        goto label_continue1;
                    }
                }
                











            }   break;
            case GUIDE:{
                cout << "PANDUAN" << endl;
            }   break;
            case ABOUT:{
                cout << "Tentang Program Kami" << endl;
            }   break;
            default:{
                cout << "Pilihan tidak ditemukan" << endl;
            }   break;
        }
        label_continue2:
        cout << "Continue choose feature?(y/n) : ";cin >> is_continue;
        if ((is_continue == 'y') | (is_continue == 'Y')){
            pilihan = getOption();
        }else if ((is_continue =='n') | (is_continue == 'N')){
            break;
        }else{
            goto label_continue2;
        }
    }
    
    // INPUT UNTUK LISTRIK DAN AIR  
    cout << "Barang-barang yang digunakan";
    cout << "jumlah unit    : ";
    cout << "lama penggunaan    : ";



    //INPUT UNTUK FOOD AND BEVERAGE


    //INPUT UNTUK KENDARAAN
    cout << "Terima Kasih";

    return 0;
}