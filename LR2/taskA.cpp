#include "task.h"

void taskA() {
    int size;
    std::cin >> size;
    std::vector<int> vec(size);
    std::set<int> set;

    for (auto i = vec.begin(); i < vec.end(); i++) {
        std::cin >> *i;
    }

    for (auto i = vec.begin(); i < vec.end(); ++i) {
        set.insert(*i);
    }

    std::cout << set.size() << std::endl;
}
