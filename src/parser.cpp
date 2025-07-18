// src/parser.cpp
#include "parser.h"
#include <sstream>
#include <algorithm>

Query parseQuery(const std::string& input) {
    Query q;
    q.type = INVALID;

    std::string lower = input;
    std::transform(lower.begin(), lower.end(), lower.begin(), ::tolower);

    if (lower.find("insert into") == 0) {
        q.type = INSERT;
        size_t start = lower.find('(');
        size_t end = lower.find(')');

        if (start != std::string::npos && end != std::string::npos && end > start) {
            std::string values_str = input.substr(start + 1, end - start - 1);
            std::stringstream ss(values_str);
            std::string token;

            while (std::getline(ss, token, ',')) {
                q.values.push_back(token);
            }
        }
    } else if (lower.find("select * from") == 0) {
        q.type = SELECT_ALL;
    }

    return q;
}
