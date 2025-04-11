// Primer15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<string>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    const int MAX_SIZE = 1000;
    char text[MAX_SIZE];

    std::cout << "Введите текст: ";
    std::cin.getline(text, MAX_SIZE);

    int word_count = 0, length = 0;
    bool in_word = false;

    std::cout << "Длины слов: ";
    for (int i = 0; text[i] != '\0'; ++i) {
        if (text[i] != ' ') {
            length++;
            in_word = true;
        }
        else if (in_word) {
            std::cout << length << ", ";
            length = 0;
            word_count++;
            in_word = false;
        }
    }
    if (in_word) {
        std::cout << length;
        word_count++;
    }

    std::cout << "\nКоличество слов: " << word_count << std::endl;

    return 0;
}

