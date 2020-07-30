#include <iostream>
#include <stdio.h>
#include <string>

int main() {
    const int ALPHABET_SIZE = 26;
    int alphabets[ALPHABET_SIZE] = {0};

    std::string input;
    printf("Input: ");
    std::getline(std::cin, input);

    for (int i = 0; i < input.size(); ++i) {
        if (input[i] != ' ') {
            int currIndex = (input[i] - 0) - 97;
            ++alphabets[currIndex];
        }
    }

    int numOfOdd = 0;
    for (int i = 0; i < ALPHABET_SIZE; ++i) {
        if (alphabets[i] % 2 == 1) {
            ++numOfOdd;
        }
    }

    bool isOddGreaterThanOne = numOfOdd > 1;
    std::string result = (isOddGreaterThanOne) ? "False" : "True";
    printf("%s\n", result.c_str());
    return 0;
}