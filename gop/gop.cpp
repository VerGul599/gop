#include <iostream>
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int sum = 0;
    int count = 0;

    for (int i = 1; i <= 1000; i++) 
    {
        sum += i;
        count++;
    }

    double average = static_cast<double>(sum) / count;

    std::cout << "Среднее арифметическое всех целых чисел от 1 до 1000 равно: " << average ;

    return 0;
}
