#include <iostream>
#include <iomanip>
#include <cassert>
#include <string>
#include <limits>

using namespace std::string_literals;

int main() {
    //Booleanos
    assert ((true and false) == false);
    assert (true != false);
    assert (not false == true);
    assert ((false and false) == false);
    assert ((false or true) != false);

    //Enteros
    assert ((25 * 4 == 100) != 500 / 10);
    assert (22 - 2 != 10);
    assert (56 + 44 == 100);
    assert (333 / -111 == 1 * -3);
    assert ((-150 * 2 + 100) != 20);

    //Caracteres / Chars
    assert ('a' + 13 == 'n');
    assert ('a' - 'A' != 'r');
    assert (' ' * 2 == '@');
    assert ('A' < 'B');
    assert ('n' >= 'c');
    assert (('!' + '!' == 'B') - 1 != 'L');

    //Punto flotante
    assert (177.8 >= 177);
    assert (0.5 + 0.5 == 1.0);
    assert (23.45 * 2 != 0.34);
    assert (0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 != 1.0);
    assert (22E-2 == 0.22);
    assert (2.33E5 != 23300.1);
    assert (1E2 > 99.9);
    assert (0.54 <= 54E-2);

    //Strings
    assert ("hello world"s != "Hola mundo"s);
    assert (sizeof "Buenas noches"s != 20);
    assert ( 22 != "la longitud"s.length());
    assert ( "Hola"s + " mundo"s == "Hola mundo");

    //unsigned
    assert (345u > 344u);
    assert (20u*20u == 800u/2u );
    assert (333u / -111u != 4u * -7u);
    assert (123u + 321u == ((1000/2) - 56));

    //double
    assert (-1.79E307 > -1.79E308);
    assert (1.4 + 0.1 == 1.5);
    assert ((7 + 7 + 6)/3 != 6.7 );
    assert (5/2 == 10/4);
    
}
