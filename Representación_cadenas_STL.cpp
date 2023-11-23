#include <iostream>
#include <string>

int main() {
    std::string phrase = "Hello, World!";

    std::cout << "Frase original: " << phrase << std::endl;

    std::cout << "Longitud de la cadena: " << phrase.size() << " caracteres." << std::endl;

    std::cout << "¿La cadena está vacía? " << (phrase.empty() ? "Sí" : "No") << std::endl;

    std::cout << "Primer caracter: " << phrase[0] << std::endl;
    phrase[7] = ','; // Modificar el espacio por una coma
    std::cout << "Frase modificada: " << phrase << std::endl;

    phrase += " Welcome to the world of C++!";
    std::cout << "Frase actualizada: " << phrase << std::endl;

    std::string subString = "World";
    size_t found = phrase.find(subString);
    if (found != std::string::npos) {
        std::cout << "La subcadena '" << subString << "' comienza en la posición " << found << std::endl;
    } else {
        std::cout << "La subcadena '" << subString << "' no se encontró en la frase." << std::endl;
    }

    return 0;
}

