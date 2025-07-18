// include/dibi.h
#pragma once
#include <vector>
#include <string>

class Table {
public:
    void insert(const std::vector<std::string>& values);
    void selectAll() const;

private:
    std::vector<std::vector<std::string>> rows;
};
