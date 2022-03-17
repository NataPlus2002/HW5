#include <iostream>
#include <regex>
#include <string>
#include <algorithm>
#include <vector>

#define C_ALL(X) cbegin(X), cend(X)

using namespace std;

int main(int argc, char ** argv)
{
	std::regex pattern(R"([\w*\.*\-*\_*\+*]*\@([\w]+\.[\w]+))");
    std::string data = "NataPlus2002_yandex.ru  abc 1234 pliuskova.na@phystech.edu def 5678 hij NataPlus2003@yandex-ru pliuskova.na@phystech.com";

    const vector<smatch> matches{
        sregex_iterator{C_ALL(data), pattern},
        sregex_iterator{}};

    for (size_t i = 0; i < matches.size(); i++) {
        cout << matches[i].str(1) << endl;
    }

	return EXIT_SUCCESS;
}
