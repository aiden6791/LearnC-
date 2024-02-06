#include <iostream>

using namespace std;

int main() {
    int i;
    string from[] = {"United State of America", "United kingdom", "Germany", "France"};
    string name[] = {"Biden", "Sunak", "merkel", "Marcron"};

    for (i = 0; i < 4; i++) {
        cout <<  name[i] << " is from : " << from[i] << "\n" << endl;   
    }
    return 0;
}
