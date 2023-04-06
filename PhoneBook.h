#pragma once

#include <map>
#include <iostream>

#include "Person.h"

using namespace std;

struct PhoneBook {
    map<string, Person> _phoneBook;

    map<string, Person> FindByName(string name) {
        map<string, Person> result;

        for (auto item : _phoneBook) {
            auto person = item.second;
            if (person.first_name == name || person.last_name == name) {
                result.insert(item);
            }
        }

        return result;
    }

    void Add(string tel, Person person) {
        _phoneBook.insert(pair<string, Person> (tel, person));
    }

    map<string, Person> GetAll() {
        return _phoneBook;
    }
};

