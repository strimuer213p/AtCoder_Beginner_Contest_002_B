#include<iostream>
#include<string>

int main() {
	std::string str;
	bool flag = false;

	std::cin >> str;

	for (int i = 0; i < (int)str.size(); i++) {
		char ch = str[i];

		if (ch == 'a'|| ch == 'i' || ch == 'u' || ch == 'e' || ch == 'o') {
			str.erase(str.begin() + i);
			i--; 
		}
	}

	std::cout << str << std::endl;

	return 0;
}

