#include <iostream>
#include "Leaver.h"

int main() {
    std::string name;
    std::cout << "������� ���: ";
    std::getline(std::cin, name);

    Leaver leaver;
    std::cout << leaver.leave(name) << std::endl;

    system("pause");

    return 0;
}
