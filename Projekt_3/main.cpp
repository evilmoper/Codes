#include <iostream>
#include <math.h>

using namespace std;
float A_x, A_y, B_x, B_y, C_x, C_y;

float wynik_AB(float x1, float y1, float x2, float y2);

float wynik_BC(float x1, float y1, float x2, float y2);

float wynik_CA(float x1, float y1, float x2, float y2);

int main()
{
    cout << "Podaj wspolrzedne punktu A" << endl;
    cout << "Wspolrzedna X dla punktu A: ";
    cin >> A_x;
    cout << "Wspolrzedna Y dla punktu A: ";
    cin >> A_y;
    cout << "Podaj wspolrzedne punktu B" << endl;
    cout << "Wspolrzedna X dla punktu B: ";
    cin >> B_x;
    cout << "Wspolrzedna Y dla punktu B: ";
    cin >> B_y;
    cout << "Podaj wspolrzedne punktu C" << endl;
    cout << "Wspolrzedna X dla punktu C: ";
    cin >> C_x;
    cout << "Wspolrzedna Y dla punktu C: ";
    cin >> C_y;
    cout << "Odleglosc miedzy punktami A i B wynosi: ";
    cout << wynik_AB(A_x, A_y, B_x, B_y) << endl;
    cout << "Odleglosc miedzy punktami B i C wynosi: ";
    cout << wynik_BC(B_x, B_y, C_x, C_y) << endl;
    cout << "Odleglosc miedzy punktami C i A wynosi: ";
    cout << wynik_CA(A_x, A_y, C_x, C_y) << endl;
    return 0;
}

float wynik_AB(float x1, float y1, float x2, float y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

float wynik_BC(float x1, float y1, float x2, float y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

float wynik_CA(float x1, float y1, float x2, float y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}