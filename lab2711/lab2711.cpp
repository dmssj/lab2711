#include <iostream>     //календарь
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int year;
    cout << "год: ";
    cin >> year;

    int day_month = 31;
    int firstday = 1;

    string name_month[] = {
        "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь",
        "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"
    };

    for (int month = 0; month < 12; month++) {
        if (month == 1) day_month = 28;
        else if (month == 3 || month == 5 || month == 8 || month == 10) day_month = 30;
        else day_month = 31;

        cout << name_month[month] << endl;
        cout << "пн вт ср чт пт сб вс" << endl;

        for (int i = 0; i < firstday; i++) {
            cout << "   ";
        }

        for (int day = 1; day <= day_month; day++) {
            cout << (day < 10 ? " " : "") << day << " ";
            firstday++;
            if (firstday == 7) {
                cout << endl;
                firstday = 0;
            }
        }
        if (firstday != 0) {
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}