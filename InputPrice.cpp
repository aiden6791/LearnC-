#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string name;
    float price = 0;
    int quantity = 0;

    printf("Enter Price : ");
    getline(cin, name);
    stringstream(name) >> price;
    printf("Enter Quantity : " );
    getline(cin, name);
    stringstream(name) >> quantity;
    printf("Total Price : ", price * quantity);
}
