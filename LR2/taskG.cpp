#include "task.h"

void taskG() {
    std::set<std::string> set;
    std::string command, word;
    std::cin >> command;
    while (command != "#") {
        std::cin >> word;
        if (command == "+") {
            set.insert(word);
        }
        else if (command == "-") {
            set.erase(word);
        }
        else if (command == "?") {
            if (set.find(word) != set.end()) { std::cout << "YES" << std::endl; }
            else { std::cout << "NO" << std::endl; }
        }
        else {
            break;
        }
        std::cin >> command;
    }
}