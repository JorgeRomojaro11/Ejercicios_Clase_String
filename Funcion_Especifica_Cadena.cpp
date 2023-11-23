#include <iostream>
#include <string>

int main() {
    std::string sentence = "El lenguaje C++ es poderoso.";

    std::string sub_str = "C++";

    size_t pos = sentence.find(sub_str);

    if (pos != std::string::npos) {
        std::cout << "Subcadena '" << sub_str << "' encontrada en la posición: " << pos << std::endl;
        std::string new_sentence = sentence;
        new_sentence.replace(pos, sub_str.length(), "Python");

        std::cout << "Cadena original: " << sentence << std::endl;
        std::cout << "Cadena resultante: " << new_sentence << std::endl;
    } else {
        std::cout << "Subcadena '" << sub_str << "' no encontrada." << std::endl;
    }

    return 0;
}

