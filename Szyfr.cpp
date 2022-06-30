#include "Szyfr.h"

void szyfr::Opis()
{
    cout << "Program Szyfrujacy - celem programu bedzie szyfrowanie badz odszyfrowanie tekstu za pomoca prostego klucza ";
    cout << "symetrycznego podanego przez uzytkownika.\n";
    cout << "Szyfrowaniu poddane beda tylko wielkie i male litery alfabetu lacinskiego.\n";
    cout << "Na wejsciu nalezy podac klucz oraz wybrac czy program ma zaszyfrowac badz odszyfrowac tekst podany w pliku z rozszerzeniem .txt.\n";
}

bool szyfr::Dane()
{
    cout << "\nPodaj klucz: ";
    cin >> klucz;

    for (int i = 0; i < klucz.size(); i++)
    {
        if ((klucz[i] < Duze_A || klucz[i] > Duze_Z))
        {
            cout << "\nPodano zly klucz!\n";
            cout << "Klucz powinien byc podany w formie ciagu znakow wielkich liter alfabetu lacinskiego.\n";
            return false;
        }
    }

    cout << "\nWybierz jedna z opcji: \n1. Szyfrowanie \n2. Odszyfrowanie\n";
    cout << "\nWybrana opcja: ";

    cin >> opcja;

    if (opcja != 1 && opcja != 2)
    {
        cout << "\nPodano zla opcje!\n";
        cout << "Nalezy wybrac opcje 1. Szyfrowanie badz 2. Odszyfrowanie\n";
        return false;
    }
        
    return true;
}

void szyfr::Szyfrowanie() 
{

    fstream plikCzytany;
    ofstream plikZapisywany;

    plikCzytany.open(nazwaPliku, fstream::in);

    if(opcja == Opcja_Szyfrowanie)
        plikZapisywany.open(nazwaPlikuSzyfrowanie, ofstream::out | ofstream::trunc);

    else if(opcja == Opcja_Rozszyfrowanie)
        plikZapisywany.open(nazwaPlikuRozszyfrowanie, ofstream::out | ofstream::trunc);

    while (plikCzytany >> noskipws >> znak) 
    {
        obecnyZnak = znak;

        if ((znak >= Duze_A && znak <= Duze_Z) || (znak >= Male_A && znak <= Male_Z))
        {
            if (opcja == Opcja_Szyfrowanie)
                obecnyZnak = (((znak + (klucz[literaKlucza] - Duze_A + 1))) + Ilosc_Znakow_Ascii) % Ilosc_Znakow_Ascii;

            else if (opcja == Opcja_Rozszyfrowanie)
                obecnyZnak = ((znak - (klucz[literaKlucza] - Duze_A + 1)) + Ilosc_Znakow_Ascii) % Ilosc_Znakow_Ascii;
            
            literaKlucza = ((literaKlucza + 1) % (klucz.size()));
        }

        plikZapisywany << (char)obecnyZnak;
    }

    if (opcja == Opcja_Szyfrowanie)
        cout << "\nPoprawnie zaszyfrowano tekst oraz zapisano w szyfrowanie.txt\n";

    else if (opcja == Opcja_Rozszyfrowanie)
        cout << "\nPoprawnie rozszyfrowano tekst oraz zapisano w rozszyfrowanie.txt\n";

    plikCzytany.close();
    plikZapisywany.close();   
}