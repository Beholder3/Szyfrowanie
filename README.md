# Szyfrowanie

Program szyfrujący i deszyfrujący tekst.

 Celem programu będzie szyfrowanie bądź odszyfrowanie tekstu za pomocą prostego klucza symetrycznego podanego przez użytkownika w formie ciągu znaków - wielkich liter alfabetu, przy czym A oznaczać będzie dodanie 1 do kodu szyfrowanego znaku, B - dodanie 2 itd., z "zawinięciem" z powrotem do początku alfabetu gdy "wyjdziemy poza Z". Odszyfrowanie realizowane będzie analogicznie odejmując odpowiednie liczby od kodów kolejnych znaków. Gdy klucz będzie krótszy niż szyfrowany tekst, "przykładamy" go do tekstu cyklicznie. Szyfrowaniu poddane będą tylko wielkie i małe litery alfabetu łacińskiego. Na wejściu należy podać klucz oraz wybrać czy program ma zaszyfrować bądź odszyfrować tekst podany w pliku z rozszerzeniem .txt. Na wyjściu program powinien utworzyć nowy plik .txt, w którym znajdować będzie się zaszyfrowany/odszyfrowany tekst.
 
Opis modułów
•	main – wykonuje się w nim główna logika programu. Tworzy obiekt klasy szyfr oraz wywołuje metodę Dane oraz Szyfrowanie.
•	Dane – sprawdza czy podane dane wejściowe są poprawne, jeśli nie są zwraca odpowiedni komunikat o błędzie.
•	Szyfrowanie – po poprawnym wprowadzeniu danych wejściowych otwiera plik .txt oraz szyfruje/odszyfrowuje podany tekst zgodnie z opisem programu oraz zapisuje wynik w nowym pliku .txt.
