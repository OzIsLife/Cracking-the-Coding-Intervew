#include <iostream>
#include <stdio.h>
#include <string>

int main() {
    const int SIZE = 255;
    int characters[SIZE] = {0};

    std::string firstInput;
    printf("First Input: ");
    std::cin >> firstInput;

    std::string secondInput;
    printf("Second Input: ");
    std::cin >> secondInput;

    bool isEqual = firstInput.size() == secondInput.size();
    bool isPermutation = true;

    if (isEqual) {
        for (int i = 0; i < firstInput.size(); ++i) {
            int firstInputIndex = firstInput[i] - 0;
            characters[firstInputIndex] += 1;

            int secondInputIndex = secondInput[i] - 0;
            characters[secondInputIndex] += 1;
        }

        for (int i = 0; i < SIZE; ++i) {
            if (characters[i] % 2 != 0) {
                isPermutation = false;
                break;
            }
        }
    }

    bool isResult = isEqual && isPermutation;
    std::string stringContent = (isResult) ? "are" : "are not";
    printf("These string %s permutation to each other.\n", stringContent.c_str());
    return 0;
}