#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

int main() {
    std::string s = "apple,banana,orange,apple,kiwi";
    std::vector<std::string> words;
    std::stringstream ss(s);
    std::string word;
    
    while (std::getline(ss, word, ','))
        words.push_back(word);
    
    std::sort(words.begin(), words.end());
    words.erase(std::unique(words.begin(), words.end()), words.end());
    
    for (const auto& w : words) std::cout << w << " ";
}