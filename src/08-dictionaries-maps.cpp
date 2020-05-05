#include <iostream>
#include <map>

int main() {

    std::cout << "\n--- Phonebook Entry ---\n";
    std::cout << "How many entries?\n";
    std::string howManyEntries{};
    getline(std::cin, howManyEntries);

    std::cout << "On each line, enter a name, a space, and the phone number.\n";
    std::cout << "For example: 'sam 555-1212'\n\n";
    std::map<std::string, std::string> phoneBook;
    std::string key, val;
    for (int p{0}; p < stoi(howManyEntries); ++p) {
        getline(getline(std::cin, key, ' ') >> std::ws, val);
        phoneBook[key] = val;
    }

    // future: add a while loop here to ask if they want to search
    // or want to search for multiple items with y/n
    std::cout << "\n--- Phonebook Search ---\n";
    std::cout << "What name are you searching for?\n";
    std::string query;
    getline (std::cin, query);
    if (phoneBook.count(query)) {
        std::cout << query << "'s number is: " << phoneBook.at(query) << "\n";
    } else {
        std::cout << "Not found.\n";
    }

    return 0;
}