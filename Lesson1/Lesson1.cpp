// Lesson1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <limits.h>

using namespace std;
int minValue(int a, int b);
float minValue(float a, float b);
int order(int num);
int getLetterCode(char c);
void showTypeInfo();
bool beloginsToInterval(int x, int top, int botton);

int main()
{
    cout << (int('A') + int('A')) % 11;
    int a, b, x;
    float af, bf;
    string c, str;
    setlocale(LC_ALL, "ru-RU");
    char answer = NULL;
    do
    {           
        cout << endl;
        cout << "Нажмите клавишу для проверки функции:" << endl;
        cout << "       t - Информация по типам" << endl;
        cout << "       m - Минимальное значение из двух аргументов" << endl;
        cout << "       с - Кодировка символа" << endl;
        cout << "       b - Принадлежность интервалу" << endl;
        cout << "       r - Порядок числа" << endl;
        cout << "       e - Выход из программы" << endl;
        cin >> str;
        if (str.length() != 1)
            continue;
        else
            answer = str[0];
        switch (answer)
        {
        case 'b':
        {
            cout << "Введите значение, верхнюю границу, нижнюю границу" << endl;
            cin >> x >> a >> b;     
            if (cin.fail())
            {
                cin.clear();
                cout << "Неверные параметры ввода";                
                break;
            }
            else            
                cout << beloginsToInterval(x, a, b) << endl;
            break;
        }
        case 'm':
        {
            cout << "Введите 2 значения" << endl;
            cin >> af >> bf;
            if (cin.fail())
            {
                cin.clear();                
                cout << "Неверные параметры ввода";              
                break;
            }
            else
            {
                if (((int)bf == bf) && ((int)af == af))
                    cout << minValue((int)af, (int)bf) << endl;
                else
                    cout << minValue(af, bf) << endl;
            }
            break;
        }
        case 'r':
        {
            cout << "Введите число" << endl;
            cin >> x;
            if (cin.fail())
            {
                cin.clear();
                cout << "Неверные параметры ввода";
                break;
            }
            else
                cout << order(x) << endl;
            break;
        }
        case 'c':
        {
            cout << "Введите символ" << endl;
            cin >> c;
            if (cin.fail())
            {
                cin.clear();
                cout << "Неверные параметры ввода";
                break;
            }
            else
                cout << getLetterCode(c[0]) << endl;
            break;
        }
        case 't':
        {
            showTypeInfo();
            break;
        }
        }
    } while (answer != 'e');
}

bool beloginsToInterval(int x, int top, int botton)
{
    if ((x <= top) && (x >= botton))
        return true;
    else
        return false;
}
int minValue(int a, int b)
{
    return a < b ? a : b;
}
float minValue(float a, float b)
{
    return a < b ? a : b;
}
int order(int num)
{
    int res = 0;
    do
    {
        res++;
        num /= 10;

    } while (num > 0);

    return res;
}
int getLetterCode(char c)
{
    return (int)c;
}
void showTypeInfo()
{
    cout << "char is " << sizeof(char) << " min " << CHAR_MIN << " max " << CHAR_MAX << endl;
    cout << "int is " << sizeof(int) << " min " << INT_MIN << " max " << INT_MAX << endl;
    cout << "short is " << sizeof(short) << " min " << SHRT_MIN << " max " << SHRT_MAX << endl;
    cout << "long is " << sizeof(long) << " min " << LONG_MIN << " max " << LONG_MAX << endl;
    cout << "long long is " << sizeof(long long) << " min " << LLONG_MIN << " max " << LLONG_MAX << endl;
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
