//Music.cpp
//gets the frequency of music notes and wavelength
//chukim@chapman.edu
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    double ReferenceFrequency = 16.35;
    double speedOfSound = 345;

    double dTwelfthRootOfTwo = pow(2.0,(1/12.0));

    double FreqOne = ReferenceFrequency * pow(2,0) * pow(dTwelfthRootOfTwo,0);
    double wavelengthOne = (speedOfSound * 100) / FreqOne;

    double FreqTwo = ReferenceFrequency * pow(2,0) * pow(dTwelfthRootOfTwo,1);
    double wavelengthTwo = (speedOfSound * 100) / FreqTwo;


    double FreqThree = ReferenceFrequency * pow(2,0) * pow(dTwelfthRootOfTwo,2);
    double wavelengthThree = (speedOfSound * 100) / FreqThree;


    double FreqFour = ReferenceFrequency * pow(2.0,4.0) * pow(dTwelfthRootOfTwo,0);
    double wavelengthFour = (speedOfSound * 100) / FreqFour;


    double FreqFive = ReferenceFrequency * pow(2.0,7.0) * pow(dTwelfthRootOfTwo,3.0);
    double wavelengthFive = (speedOfSound * 100) / FreqFive;


    double FreqSix = ReferenceFrequency * pow(2.0,8.0) * pow(dTwelfthRootOfTwo,0);
    double wavelengthSix = (speedOfSound * 100) / FreqSix;





    cout << "Reference Freuency: " << ReferenceFrequency << " Hz" << endl;
    cout << "Speed of Sound: " << speedOfSound << " m/s" << endl;
    cout << "Note : C0; " << "nu: 0; " << "k: 0; " << "frequency: " << FreqOne << " Hz; " << "Wavelength: " << wavelengthOne << " cm" << endl;
    cout << "Note : C#0; " << "nu: 0; " << "k: 1; " << "frequency: " << FreqTwo << " Hz; " << "Wavelength: " << wavelengthTwo << " cm" << endl;
    cout << "Note : D0; " << "nu: 0; " << "k: 2; " << "frequency: " << FreqThree << " Hz; " << "Wavelength: " << wavelengthThree << " cm" << endl;
    cout << "Note : C4; " << "nu: 4; " << "k: 0; " << "frequency: " << FreqFour << " Hz; " << "Wavelength: " << wavelengthFour << " cm" << endl;
    cout << "Note : D#7; " << "nu: 7; " << "k: 3; " << "frequency: " << FreqFive << " Hz; " << "Wavelength: " << wavelengthFive << " cm" << endl;
    cout << "Note : C8; " << "nu: 8; " << "k: 0; " << "frequency: " << FreqSix << " Hz; " << "Wavelength: " << wavelengthSix << " cm" << endl;

    return 0;
}
