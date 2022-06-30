#ifndef _SZYFR_h
#define _SZYFR_h

#include <iostream>
#include <fstream>
#include <string>

#define Male_A 97    // kod ASCII "a"
#define Duze_A 65    // kod ASCII "A"
#define Male_Z 122   // kod ASCII "z"
#define Duze_Z 90    // kod ASCII "Z"
#define Opcja_Szyfrowanie 1
#define Opcja_Rozszyfrowanie 2
#define Ilosc_Znakow_Ascii 128

using namespace std;

class szyfr 
{
    private:
        string klucz;
        string nazwaPliku = "tekst.txt";
        string nazwaPlikuSzyfrowanie = "szyfrowanie.txt";
        string nazwaPlikuRozszyfrowanie = "rozszyfrowanie.txt";
        int opcja;
        int literaKlucza = 0;
        int obecnyZnak;
        char znak;

    public:
        void Opis();
        bool Dane();
        void Szyfrowanie();

};
#endif