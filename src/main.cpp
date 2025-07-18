// src/main.cpp
#include <iostream>
#include <string>
#include "parser.h"
#include "dibi.h"

int main() {
    std::string input;
    Table users;

    std::cout << "Welcome to DiBi! Type SQL-like commands.\n";

    while (true) {
        std::cout << "> ";
        std::getline(std::cin, input);

        if (input == "exit" || input == "quit") break;

        Query q = parseQuery(input);

        if (q.type == INSERT) {
            users.insert(q.values);
        } else if (q.type == SELECT_ALL) {
            users.selectAll();
        } else {
            std::cout << "Unsupported or invalid query.\n";
        }
    }

    return 0;
}
