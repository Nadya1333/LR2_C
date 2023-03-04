#include "task.h"

int count(std::string a, char symbol) {
	int c = 0;
	for (auto i = a.begin(); i < a.end(); i++) {
		if (*i == symbol) c++;
	}
	return c;
}

void taskH() {
	int n, new_app;
	std::cin >> n;
	std::string command, app_name;
	std::deque<std::string> app_names;

	while (n > 0) {
		std::cin >> command;
		if (command == "Run") {
			std::getline(std::cin, app_name);
			app_name.erase(app_name.begin());
			app_names.push_front(app_name);
			std::cout << app_name << std::endl;
		}
		else if (command.find("Alt") != std::string::npos) {
			new_app = count(command, '+') % app_names.size();
			app_name = app_names[new_app];
			app_names.erase(app_names.begin() + new_app);
			app_names.push_front(app_name);
			std::cout << app_name << std::endl;
		}
		n--;
	}
}