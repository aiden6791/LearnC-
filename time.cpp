#include <iostream>
#include <ctime>

// Get Clients local time 

int main() {
    time_t rawtime;
    time(&rawtime);

    printf("%s", ctime(&rawtime));
    return 0;
}
