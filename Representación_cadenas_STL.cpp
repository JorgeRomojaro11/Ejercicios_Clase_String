#include <iostream>
#include <string>

int main() {
    std::string sentence = "OpenAI is a leading AI research lab.";

    std::cout << "Frase: " << sentence << std::endl;
    std::cout << "Tamaño de la cadena: " << sentence.size() << " caracteres." << std::endl;

    std::cout << "¿La cadena está vacía? " << (sentence.empty() ? "Sí" : "No") << std::endl;

    std::cout << "Primer caracter: " << sentence[0] << std::endl;
    std::cout << "Último caracter: " << sentence[sentence.size() - 1] << std::endl;

    sentence += " They focus on advancing AI for the benefit of all humanity.";

    std::cout << "Frase actualizada: " << sentence << std::endl;

    std::string subSentence = sentence.substr(23, 15);
    std::cout << "Subcadena: " << subSentence << std::endl;

    return 0;
}

