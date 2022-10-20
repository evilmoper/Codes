#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    int i{0};
    int x{0};
    int Y{1};
    int wariant(0);
    int col{10};
    int numer;
    string nazwa, nazwa1;
    string dane1, dane2, dane3, dane4;
    string wiersz;
    string tab1[10];
    cout << "Podaj nazwe pliku ktory chcesz otworzyc: ";
    cin >> nazwa;
    ifstream plik;
    plik.open(nazwa.c_str(), ios::in);
    if (plik.good() == true)
    {
        string tekst;
        while (!plik.eof())
        {
            plik >> dane1 >> dane2 >> dane3 >> dane4;
            if (i == 0)
            {
                cout << left;
                cout << setw(3) << " " << setw(2) << " " << setw(col) << dane1 << setw(col) << dane2 << setw(col / 2) << dane3 << setw(col) << dane4 << endl;
            }
            else
            {
                cout << left;
                cout << setw(3) << "Nr." << setw(2) << i << setw(col) << dane1 << setw(col) << dane2 << setw(col / 2) << dane3 << setw(col) << dane4 << endl;
            }
            i++;
        }

        plik.close();
    }
    else
    {
        cout << "blad plik nie zostal otwarty";
    }
    cout << endl;
    cout << "Dane dla poszczegolnych osob:" << endl;
    plik.open(nazwa.c_str(), ios::in);
    if (plik.good() == true)
    {
        string tekst;
        while (!plik.eof())
        {
            if (x == 0)
            {
                getline(plik, tekst);
            }
            else
            {
                cout << "Nr." << x << " ";
                getline(plik, tekst);
                cout << tekst << endl;
                tab1[x - 1] = tekst;
            }

            x++;
        }

        plik.close();
    }
    else
    {
        cout << "blad plik nie zostal otwarty";
    }

    cout << "Czy chcesz wczytac dane konkretnego numeru?" << endl;
    cout << "1.Tak/2.Nie" << endl;
    cin >> wariant;
    cout << wariant;
    if (wariant == 1)
    {
        cout << "Jaki numer cie interesuje?" << endl;
        cin >> numer;
        cout << tab1[numer];
    }

    return 0;
}
