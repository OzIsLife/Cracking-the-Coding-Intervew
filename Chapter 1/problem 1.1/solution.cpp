#include <iostream>
#include <stdio.h>
#include <array>
#include <string>

int main() {
    const int SIZE = 255;
    int characters[SIZE] = {0};
    std::string input;

    printf("Input: ");
    std::cin >> input;

    for (int i = 0; i < input.size(); ++i) {
        int index = input[i] - 0;
        characters[index] += 1;
    }

    bool isUnique = true;
    for (int i = 0; i < SIZE; ++i) {
        if (characters[i] > 1) {
            isUnique = false;
            break;
        }
    }
    
    std::string stringContent = (isUnique) ? "is" : "is not";
    printf("This character %s unique\n", stringContent.c_str());
    return 0;
}