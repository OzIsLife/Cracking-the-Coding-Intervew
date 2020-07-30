#include <iostream>
#include <stdio.h>
#include <string>

int main() {
    std::string input;
    printf("Input: ");
    std::getline(std::cin, input);

    std::string result = "";
    char prevCharacter = input[0];
    for (int i = 0; i < input.size(); ++i) {
        bool isSpace = input[i] == ' ';
        bool isCurrIndexLessThanSize = i < input.size() - 1;
        bool isNextElementASpace = input[i + 1] != ' ';
            
        bool isValid = isSpace && 
                       isCurrIndexLessThanSize && 
                       isNextElementASpace;
        result += (isValid) ? "%20" : std::string(1, input[i]);
    }

    printf("%s\n", result.c_str());
    return 0;
}