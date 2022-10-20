#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    int menu;
    for (;;)
    {
        float a{0}, b{0}, c{0}, Wynik{0}, Pole{0}, Obwod{0}, Konce{0};
        cout << "Wybierz interesujacy cie kalkulator" << endl;
        cout << "##############################" << endl;
        cout << "1.Dodawanie" << endl;
        cout << "2.Odejmowanie" << endl;
        cout << "3.Mnozenie" << endl;
        cout << "4.Dzielenie" << endl;
        cout << "5.Kwadrat" << endl;
        cout << "6.Prostokat" << endl;
        cout << "7.Trojkat prostokatny" << endl;
        cout << "8.Trapez rownoramienny" << endl;
        cout << "9.Romb" << endl;
        cout << "10.Kolo" << endl;
        cout << "11.Koniec programu" << endl;
        cout << "##############################" << endl;
        cout << "Wybrany kalkulator: ";
        cin >> menu;
        switch (menu)
        {
        case 1:
            /* Dodawanie*/
            cout << "Podaj dwie liczby" << endl;
            cout << "A: ";
            cin >> a;
            cout << " " << endl;
            cout << "B: ";
            cin >> b;
            cout << " " << endl;
            Wynik = a + b;
            cout << "Otrzymany wynik dodawania " << a << " i " << b << " to " << Wynik << endl;
            break;
        case 2:
            /* Odejmowanie*/
            cout << "Podaj dwie liczby" << endl;
            cout << "A: ";
            cin >> a;
            cout << " " << endl;
            cout << "B: ";
            cin >> b;
            cout << " " << endl;
            Wynik = a - b;
            cout << "Otrzymany wynik odejmowania " << a << " i " << b << " to " << Wynik << endl;
            break;
        case 3:
            /* Mnozenie*/
            cout << "Podaj dwie liczby" << endl;
            cout << "A: ";
            cin >> a;
            cout << " " << endl;
            cout << "B: ";
            cin >> b;
            cout << " " << endl;
            Wynik = a * b;
            cout << "Otrzymany wynik mnozenia " << a << " i " << b << " to " << Wynik << endl;
            break;
        case 4:
            /* Dzielenie*/
            cout << "Podaj dwie liczby" << endl;
            cout << "A: ";
            cin >> a;
            cout << " " << endl;
            cout << "B: ";
            cin >> b;
            cout << " " << endl;
            if (b == 0)
            {
                cout << "Nie dzielimy przez 0" << endl;
            }
            else
            {
                Wynik = a / b;
                cout << "Otrzymany wynik dzielenia " << a << " i " << b << " to " << Wynik << endl;
            }

            break;
        case 5:
            /* Kwadrat*/
            cout << "Podaj dlugosc odcinka" << endl;
            cout << "A: ";
            cin >> a;
            cout << " " << endl;
            Pole = a * a;
            cout << "Pole kwadratu rowna sie: " << Pole << endl;
            Obwod = a + a + a + a;
            cout << "Obwod kwadratu rowna sie: " << Obwod << endl;
            break;
        case 6:
            /* Prostokat*/
            cout << "Podaj pierwsza dlugosc odcinka" << endl;
            cout << "A: ";
            cin >> a;
            cout << " " << endl;
            cout << "Podaj druga dlugosc odcinka" << endl;
            cout << "B: ";
            cin >> b;
            cout << " " << endl;
            Pole = a * b;
            cout << "Pole kwadratu rowna sie: " << Pole << endl;
            Obwod = (2 * a) + (2 * b);
            cout << "Obwod kwadratu rowna sie: " << Obwod << endl;
            break;
        case 7:
            /* Trojkat prostokatny*/
            cout << "Podaj pierwsza dlugosc odcinka" << endl;
            cout << "A: ";
            cin >> a;
            cout << " " << endl;
            cout << "Podaj druga dlugosc odcinka" << endl;
            cout << "H: ";
            cin >> b;
            cout << " " << endl;
            Pole = (a * b) / 2;
            cout << "Pole trojkata rowna sie: " << Pole << endl;
            c = sqrt((float)((a * a) + (b * b)));
            Obwod = a + b + c;
            cout << "Obwod trojkata rowna sie: " << Obwod << endl;
            break;
        case 8:
            /* Trapez rownoramienny*/
            cout << "Podaj pierwsza dlugosc odcinka" << endl;
            cout << "A: ";
            cin >> a;
            cout << " " << endl;
            cout << "Podaj druga dlugosc odcinka" << endl;
            cout << "B: ";
            cin >> b;
            cout << " " << endl;
            cout << "Podaj wysokosc" << endl;
            cout << "H: ";
            cin >> c;
            if (a > b)
            {
                Pole = ((a + b) / 2) * c;
                cout << "Pole trapezu rowna sie: " << Pole << endl;
                Konce = a - b;
                Konce = Konce / 2;
                c = sqrt((float)((b * b) + (Konce * Konce)));
                Obwod = a + b + c;
                cout << "Obwod trapezu rowna sie: " << Obwod << endl;
            }
            else
            {
                Pole = ((a + b) / 2) * c;
                cout << "Pole trapezu rowna sie: " << Pole << endl;
                Konce = b - a;
                Konce = Konce / 2;
                c = sqrt((float)((b * b) + (Konce * Konce)));
                Obwod = a + b + c;
                cout << "Obwod trapezu rowna sie: " << Obwod << endl;
            }
            break;
        case 9:
            /* Romb*/
            cout << "Podaj dlugosc odcinka" << endl;
            cout << "A: ";
            cin >> a;
            cout << " " << endl;
            cout << "Podaj wysokosc" << endl;
            cout << "H: ";
            cin >> b;
            cout << " " << endl;
            Pole = a * b;
            cout << "Pole rombu rowna sie: " << Pole << endl;
            Obwod = a + a + a + a;
            cout << "Obwod rombu rowna sie: " << Obwod << endl;
            break;
        case 10:
            /* Kolo*/
            cout << "Podaj dlugosc promienia" << endl;
            cout << "r: ";
            cin >> a;
            cout << " " << endl;
            Pole = (a * a) * 3, 14;
            cout << "Pole kola rowna sie: " << Pole << endl;
            Obwod = 2 * 3, 14 * a;
            cout << "Obwod kola rowna sie: " << Obwod << endl;
            break;
        case 11:
            /* Zakonczenie programu*/
            exit(0);
            break;
        default:
            cout << "Wybrana liczba jest nie prawidłowa wybierz inną liczbę znajdującą się w przedziale menu" << endl;
            break;
        }
        system("pause");
        system("cls");
    }

    return 0;
}
