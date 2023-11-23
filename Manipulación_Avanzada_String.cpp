#include <iostream>
#include <string>

int main() {
    std::string str = "Inteligencia Artificial";

    std::string sub_str = str.substr(13, 9);

    std::string new_str = str.insert(0, "La ");

    std::cout << "Subcadena: " << sub_str << std::endl;
    std::cout << "Cadena original: " << str << std::endl;
    std::cout << "Cadena resultante: " << new_str << std::endl;

    size_t pos = new_str.find(sub_str);
    if (pos != std::string::npos) {
        std::cout << "Subcadena encontrada en la posición: " << pos << std::endl;
    } else {
        std::cout << "Subcadena no encontrada en la cadena resultante." << std::endl;
    }

    new_str.erase(pos, sub_str.length());

    std::cout << "Cadena resultante después de borrar la subcadena: " << new_str << std::endl;

    return 0;
}
