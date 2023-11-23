#include <iostream>
#include <string>

int main() {

    std::string str1 = "Hola ";
    std::string str2 = "mundo!";

    std::string str3 = str1 + str2;

    std::cout << "Cadena 1: " << str1 << std::endl;
    std::cout << "Cadena 2: " << str2 << std::endl;
    std::cout << "Cadena resultante: " << str3 << std::endl;
    std::cout << "Longitud de la cadena 1: " << str1.size() << " caracteres." << std::endl;
    std::cout << "Longitud de la cadena 2: " << str2.size() << " caracteres." << std::endl;
    std::cout << "Longitud de la cadena resultante: " << str3.size() << " caracteres." << std::endl;

    std::cout << "¿Cadena 1 está vacía? " << (str1.empty() ? "Sí" : "No") << std::endl;
    std::cout << "¿Cadena 2 está vacía? " << (str2.empty() ? "Sí" : "No") << std::endl;
    std::cout << "¿Cadena resultante está vacía? " << (str3.empty() ? "Sí" : "No") << std::endl;

    std::cout << "Primer caracter de la cadena resultante: " << str3[0] << std::endl;
    str3[5] = ',';
    std::cout << "Cadena resultante modificada: " << str3 << std::endl;

    return 0;
}

