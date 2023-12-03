#include "string.h"
#include <iostream>
using namespace std;
int main() {
    String first;
    first.display();
    String second("Hello");
    second.display();
    String third = second;
    third.display();
    String fourth(10);
    fourth.input();
    fourth.display();
    return 0;
}
