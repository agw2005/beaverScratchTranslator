#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<char> alphabet = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u',
                                  'v','w','x','y','z'};

    std::string result;
    std::string code;
    while(true)
    {
        result = "";
        code = "";
        std::getline(std::cin, code);
        for (char c: code) {
            for (int i = 0; i < (int) alphabet.size(); i++) {
                if (c == alphabet[i] && (i + 1) % 2 == 0) {
                    result += alphabet[i - 1];
                } else if (c == alphabet[i] && (i + 1) % 2 != 0) {
                    result += alphabet[i + 1];
                } else if (c == ' ') { break; }
                else { continue; }
            }
            if (c == ' ') { result += " "; }
        }
        std::cout << result<< std::endl;
    }
}