// include/parser.h
#pragma once
#include <string>
#include <vector>

enum QueryType { INSERT, SELECT_ALL, INVALID };

struct Query {
    QueryType type;
    std::vector<std::string> values;
};

Query parseQuery(const std::string& input);
