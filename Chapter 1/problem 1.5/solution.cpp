#include <iostream>
#include <stdio.h>
#include <string>

int main() {
    const int CHARACTER_SIZE = 255;
    int characters[CHARACTER_SIZE] = {0};

    std::string firstInput;
    printf("First Input: ");
    std::cin >> firstInput;

    std::string secondInput;
    printf("Second Input: ");
    std::cin >> secondInput;

    for (int i = 0; i < firstInput.size(); ++i) {
        int currIndex = firstInput[i] - 0;
        ++characters[currIndex];
    }
    for (int i = 0; i < secondInput.size(); ++i) {
        int currIndex= secondInput[i] - 0;
        ++characters[currIndex];
    }

    int numOfEdit = 0;
    for (int i = 0; i < CHARACTER_SIZE; ++i) {
        if (characters[i] % 2 == 1) {
            ++numOfEdit;
        }
    }

    bool isEditMoreThanTwo = numOfEdit > 2;
    std::string result = (isEditMoreThanTwo) ? "False" : "True";
    printf("%s\n", result.c_str());
    return 0;
}