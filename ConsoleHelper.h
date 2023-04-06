#pragma once

#include <map>
#include <iostream>

#include "Person.h"

using namespace std;

void ShowOne(string tel, Person person) {
    cout << tel << " : ";
    cout << person.last_name << " " << person.first_name << endl;
}

void ShowAll(map<string, Person> phoneBook) {
    for (auto item : phoneBook) {
        ShowOne(item.first, item.second);
    }
}