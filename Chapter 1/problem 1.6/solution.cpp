#include <iostream>
#include <stdio.h>
#include <string>

int main() {
    std::string input;
    printf("Input: ");
    std::cin >> input;

    std::string compressInput = "";
    char currCharacter = input[0];
    int numOfSameCharacter = 1;
    for (int i = 1; i <= input.size(); ++i) {
        if (i == input.size() || currCharacter != input[i]) {
            compressInput += std::string(1, currCharacter) + std::to_string(numOfSameCharacter);
            numOfSameCharacter = 1;
            currCharacter = input[i];
        } 
        else {
            ++numOfSameCharacter;
        }
    }
    
    bool isInputSmallerThanCompress = compressInput.size() > input.size();
    std::string result = (isInputSmallerThanCompress) ? input : compressInput;
    printf("%s\n", result.c_str());
    return 0;
}