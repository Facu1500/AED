#include <cassert>

/* Cambio de Farenheit a Celsius */

float fahrenheitACelsius(float fahrenheit) {
    return (fahrenheit - 32) / 1.8f;
}

/* Cambio de Celsius a Farenheit*/

float celsiusafarenheit(float celsius) {
    return (celsius * 1.8f) + 32;
}
