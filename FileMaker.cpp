#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string description; // file story?

    std::ofstream file("test.txt"); // make a file
 
    file << "Hello there!"; // write file
    file.close(); // close file

    // read get file
    std::ifstream read("test.txt"); 

    // get file line read
    while (std::getline(read, description)) {
        std::cout << description;
    }
    read.close(); // read file close
    return 0; // system close
}
