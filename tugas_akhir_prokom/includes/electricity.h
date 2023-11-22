#include <iostream>
using namespace std;


class Test{
    public:
        float lama;
        float daya;
        int jumlah;
        float efactor;

        float calculate(){
            return (lama*daya*jumlah/1000) * efactor;
        }
};

class ElectricProperties{
    public:
        float lamaPenggunaan;
        float dayaUnit;
        int jumlahUnit;
        float efactor;

        ElectricProperties(float inputLamaPenggunaan, float inputDayaUnit, int inputJumlahUnit, float efactor){
            ElectricProperties::lamaPenggunaan =  inputLamaPenggunaan;
            ElectricProperties::dayaUnit = inputDayaUnit;
            ElectricProperties::jumlahUnit = inputJumlahUnit;
            ElectricProperties::efactor = efactor;
        }

        float carbonCalculation(){
            return (ElectricProperties::lamaPenggunaan * ElectricProperties::dayaUnit * ElectricProperties::jumlahUnit / 1000) * efactor;
        }

};

double emisiTotal(){
    
}

void log(){
    std::cout << "Jejak Karbonmu adalah";
}