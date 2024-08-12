#include <iostream>
#include <locale>


int main()
{

    std::locale::global(std::locale("pt_BR.UTF-8"));

    int nota1, nota2, nota3;
    int media;


    std::cout << "Digite a nota da primeira matéria ";
    std::cin >> nota1;

    std::cout << "Digite a nota da segunda matéria: ";
    std::cin >> nota2;

    std::cout << "Digite a nota da terceira matéria: ";
    std::cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3;

    std::cout << "Essa é media de suas notas: " << media << '\n';
}
