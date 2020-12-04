#include <iostream>

using namespace std;

double degrees;
int unit;
int req_unit;

void celcToFahr(double deg);
void celcToKelv(double deg);
void fahrToCelc(double deg);
void fahrToKelv(double deg);
void kelvToCelc(double deg);
void kelvToFahr(double deg);

int main() {

    cout << "*This is temperature converter*\n\n";
    cout << "How many degrees: ";
    cin >> degrees;

    cout << "UNIT:" <<endl;
    cout << "1.C\n2.F\n3.K" << endl;
    cin >> unit;

    cout << "what do you want to get?\n1.C\n2.F\n3.K\n";
    cin >> req_unit;

    switch(unit) {
        case 1:
            switch(req_unit) {
                case 1:
                    cout << degrees;
                    break;
                case 2:
                    celcToFahr(degrees);
                    break;
                case 3:
                    celcToKelv(degrees);
                    break;
                default:
                    cout << "something went wrong";
                    break;
            }
            break;
        case 2:
            switch(req_unit) {
                case 1:
                    fahrToCelc(degrees);
                    break;
                case 2:
                    cout << degrees;
                    break;
                case 3:
                    fahrToKelv(degrees);
                    break;
                default:
                    cout << "something went wrong";
                    break;
            }
            break;
        case 3:
            switch(req_unit) {
                case 1:
                    kelvToCelc(degrees);
                    break;
                case 2:
                    kelvToFahr(degrees);
                    break;
                case 3:
                    cout << degrees;
                    break;
                default:
                    cout << "something went wrong";
                    break;
            }
            break;
        default:
            cout << "something went wrong";
            break;
    }

    return 0;
}

void kelvToFahr(double deg) {
    deg = (deg * 1.8) - 459.67;
    cout << deg;
}

void kelvToCelc(double deg) {
    deg -= 273.15;
    cout << deg;
}

void fahrToKelv(double deg) {
    deg = (deg + 459.67) * 5/9;
    cout << deg;
}

void fahrToCelc(double deg) {
    deg = (deg-32)/1.8;
    cout << deg;
}

void celcToFahr(double deg) {
    deg = (deg*1.8) + 32;
    cout << deg;
}

void celcToKelv(double deg) {
    deg += 273.15;
    cout << deg;
}