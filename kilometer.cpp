#include <iostream>
using namespace std;

int main(){
    float numberInKm;
    float numberInMiles;

    cout << "Enter number in kilo: ";

    cin >> numberInKm;

    numberInMiles = numberInKm * 0.621;

    cout << "The distance after converting is " << numberInMiles;

    return 0;
}