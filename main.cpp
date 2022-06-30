#include <iostream>
#include "Szyfr.h"

using namespace std;

int main() 
{
    szyfr program;

    program.Opis();

    if(program.Dane()==true)
        program.Szyfrowanie();
        
    return 0;
}