#include <cassert>
#include <string>
#include <cstring>
using namespace std::literals;

int main (){

    /* Tipo de Dato: Double*/

assert(4.0 - 1.0 == 3.0);
assert(5.8 + 2.0 == 7.8);
assert(-13.0 == -7.0 + -6.0);
assert(0.0 - 4.0 == -4.0);
assert(0.9 != 0.4 + 0.5 + 0.6);
assert(15.2 > 10.0 + 5.0);
assert(7.0 == 14.0/2.0);
assert(250.0 <= 350.0 - 100.0);
assert(358.2 >= 1500.0 * 0.1);

/* Tipo de Dato: Int*/

assert(0 == 58 - 58);
assert(26 != 7 - 2);
assert(-15 >= -16);
assert(-11 <= -10); 
assert(25== 5 * 5 );
assert(-20 == -40 / 2 );
assert(1 == 11 % 2 );

/*Tipo de Dato: Char*/

assert('A' != 'B' );
assert('A' < 'B');
assert('Z' > 'A');
assert('a' >= 'A');
assert(90 =='Z');
assert('a'+ 'A' == 162);

/*Tipo de Dato: Bool*/

assert(true);
assert(false == false);
assert(true!= false);
assert(true == true);
assert(true == (5+5.0==10));
 assert(false == (5+6==10));

 /*Tipo de Dato: String*/
assert("A"s == "A"s);
assert("KameHameHa"s == "Kame"s + "Hame"s + "Ha"s);
assert("ABC"s > "AB"s);
assert("25" < "30");

/*Tipo de Dato: Unsigned*/

assert(0u==0u);
assert(0u==15u%3u);
assert(5u==3u+2u);
assert(9999999999 == 9999999998 + 1);
assert(1000000000000000000000000001u == 1000000000000000000000000000u + 1u);
assert(1000 <= 2000);
assert(10000 >= 5000);
}
