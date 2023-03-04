#include "task.h"


void taskE() {
    std::vector<int> calc;
    std::string s;
    int top = -1;
    std::getline(std::cin, s);
    for (auto i = s.begin(); i < s.end(); i++) {
        if (*i == ' ') continue;
        if (std::isdigit(*i)) {
            calc.push_back(*i - '0');
            top++;
        }
        if (*i == '+') {
            int a = calc[top - 1] + calc[top];
            calc.pop_back();
            calc.pop_back();
            calc.push_back(a);
            top--;
        }
        if (*i == '-') {
            int a = calc[top - 1] - calc[top];
            calc.pop_back();
            calc.pop_back();
            calc.push_back(a);
            top--;
        }
        if (*i == '*') {
            int a = calc[top - 1] * calc[top];
            calc.pop_back();
            calc.pop_back();
            calc.push_back(a);
            top--;
        }
    }
    std::cout << calc[0] << std::endl;
}
