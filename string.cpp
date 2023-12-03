#include "string.h"
#include <iostream>
using namespace std;
String::String() : size(0) {
    str[0] = '\0';
}

String::String(int size) : size(size) {
    str[0] = '\0';
}

String::String(const char* input) : size(0) {
    while (input[size] != '\0' && size < 80) {
        str[size] = input[size];
        size++;
    }
    str[size] = '\0';
}

String::String(const String& other) : size(other.size) {
    strcpy(str, other.str);
}

String::~String() {
    cout << "Деструктор" << this << endl;
}

void String::input() {
    cout << "Введите строку: ";
    cin >> str;
    size = 0;
    while (str[size] != '\0' && size < 80) {
        size++;
    }
}

void String::display() const {
    cout << "Строка: " << str << endl;
}
