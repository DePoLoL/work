#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "");
    srand(clock());
    string username;
    int num = rand() % 998 + 1;
    cout << "Программа: угадай число.\n";
    cout << "Компьютер загадал число от 1 до 999. \n";
    cout << "Угадай его за минимальное число попыток. \n";
    string usernum_str;
    int usernum_int;
    int count = 0;

    cout << "Введите число: ";
    cin >> usernum_str;

    while (true) 
    {
        bool isNum = true;
        for (int i = 0; i < usernum_str.length(); i++)
        {
           
            if (!isdigit(usernum_str[i]))
            {
               
            
                isNum = false;
                break;
            }

        }

        if (!isNum)
        {
            cout << "Ошибка! Введите число:";
                cin >> usernum_str;
                continue;

        }

        usernum_int = stoi(usernum_str);

        if (usernum_int < 1 || usernum_int > 999) 
        {
                cout << "Число должно лежать в диапазоне от 1 до 999. Повторите ввод. \n";
                cout << "Введите число: ";
                cin >> usernum_str;
                continue;
        }
        
        count++;
        if (usernum_int > num) {
            cout << "Перелёт...\n";
        }
        else if (usernum_int < num) {
            cout << "Недолёт...\n";
        }
        else {
            cout << "Вы угадали число " << num <<
                " за " << count << " попыток.\n";

            break;
        }

        cout << "Введите новое число: ";
        cin >> usernum_str;
       
    }

    return 0;
}