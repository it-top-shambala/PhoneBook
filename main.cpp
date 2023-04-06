#include <iostream>
#include <map>

#include "Person.h"
#include "PhoneBook.h"
#include "ConsoleHelper.h"

using namespace std;

int main() {
    PhoneBook phoneBook;

    bool exit = false;
    do {
        cout << "--- +++ ---" << endl;
        cout << "-- 1. Add --" << endl;
        cout << "-- 2. Show all --" << endl;
        cout << "-- 3. Find by name --" << endl;
        cout << "-- 4. Find by tel --" << endl;
        cout << "-- 0. Exit --" << endl;
        cout << "--- +++ ---" << endl;
        char input;
        cin >> input;

        switch (input) {
            case '1': // 1. Add
            {
                string tel;
                string first_name;
                string last_name;

                cout << "Enter tel: ";
                cin >> tel;
                cout << "Enter first name: ";
                cin >> first_name;
                cout << "Enter last name: ";
                cin >> last_name;

                Person person;
                person.last_name = last_name;
                person.first_name = first_name;

                phoneBook.Add(tel, person);
            }
                break;
            case '2': // 2. Show all
                ShowAll(phoneBook.GetAll());
                break;
            case '3': // 3. Find by name
            {
                string name;
                cout << "Enter name: ";
                cin >> name;

                map<string, Person> result = phoneBook.FindByName(name);
                ShowAll(result);
            }
                break;
            case '4': // 4. Find by tel
                break;
            case '0': // 0. Exit
                exit = true;
                break;
            default:
                cerr << "Bad command" << endl;
                break;
        }

    } while (!exit);

    return 0;
}
