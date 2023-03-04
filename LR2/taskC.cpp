#include "task.h"

void taskC() {
    std::deque<int> first(5);
    std::deque<int> second(5);
    int count_steps = 0;
    for (int i = 0; i < 5; ++i) { std::cin >> first[i]; }
    for (int i = 0; i < 5; ++i) { std::cin >> second[i]; }

    while ((!first.empty() && !second.empty()) && count_steps < 100000) {
        int step1 = first[0], step2 = second[0];
        first.pop_front();
        second.pop_front();
        if ((step1 == 0 && step2 == 9) || (step1 == 9 && step2 == 0)) {
            if (step1 == 0) {
                first.push_back(step1);
                first.push_back(step2);
            }
            else {
                second.push_back(step1);
                second.push_back(step2);
            }
        }
        else if (step1 > step2) {
            first.push_back(step1);
            first.push_back(step2);
        }
        else if (step1 < step2) {
            second.push_back(step1);
            second.push_back(step2);
        }
        count_steps++;
    }

    if (first.empty()) {
        std::cout << "second " << count_steps << std::endl;
    }
    else if (second.empty()) {
        std::cout << "first " << count_steps << std::endl;
    }
    else {
        std::cout << "botva" << std::endl;
    }

}