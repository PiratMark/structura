#include <iostream>
#include <conio.h>

using namespace std;

class worker
{
private:
    char name[80];
    int w_exp;
    int salary_p_h;
    int worked_h;
public:
    void enter()
    {
        cout << "Введите имя работника: ";
        cin >> name;
        cout << "Введите стаж работника: ";
        cin >> w_exp;
        cout << "Введите зарплату за час: ";
        cin >> salary_p_h;
        cout << "Введите кол-во отработанных часов: ";
        cin >> worked_h;
        cout << endl;
    }
    void print()
    {
        double prem = 0.0;
        if (w_exp < 1)
            prem = ((salary_p_h * worked_h) / 100) * 0;
        if (w_exp > 1 && w_exp < 3)
            prem = ((salary_p_h * worked_h) / 100) * 5;
        if (w_exp > 3 && w_exp < 5)
            prem = ((salary_p_h * worked_h) / 100) * 8;
        if (w_exp > 5)
            prem = ((salary_p_h * worked_h) / 100) * 15;

        cout << name << endl;
        cout << "Стаж работы: " << w_exp << endl;
        cout << "З/П в час: " << salary_p_h << endl;
        cout << "Отработанно часов: " << worked_h << endl;
        cout << "Зарплата: " << (salary_p_h * worked_h) << endl;
        cout << "Премия: " << prem << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    worker w;

    w.enter();
    w.print();

    _getch();

    return 0;
}