// Задача 2. Счётчик.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
class Counter
{
private:
    int Number = 0;
public:
    int get_priv_field() { return Number; } // геттер
    void set_priv_field(int value) // сеттер
    {
        if (value > 0) Number = value; 
    } 
    void set_priv_comm(char Commd) // сеттер
    {
        if (Commd == '+') Number = Number + 1;
        if (Commd == '-') Number = Number - 1;
    }
};

int main(int argc, char** argv)
{
    Counter test;
    std::string Meaning;
    int value;
    char Commd;
    std::cout << "Do you want to specify the initial value of the counter? Enter yes or no: ";
    std::cin >> Meaning;
    if (Meaning == "yes")
    {
        std::cout << "Enter the initial value of the counter: ";
        std::cin >> value;
        test.set_priv_field(value);
    }
    do
    {
    std::cout << "Enter the command ('+', '-', '=' or 'x'): ";
    std::cin >> Commd;
    if (Commd == '+' || Commd == '-') test.set_priv_comm(Commd);
    if (Commd == '=') std::cout << test.get_priv_field() << std::endl;
    if (Commd != '+' && Commd != '-' && Commd != '=' && Commd != 'x') std::cout << "Command is undefined" << std::endl;
    } while (Commd != 'x');
    std::cout << "Goodbye!";
    return EXIT_SUCCESS;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
