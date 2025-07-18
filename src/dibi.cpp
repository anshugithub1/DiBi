// src/dibi.cpp
#include "dibi.h"
#include <iostream>

void Table::insert(const std::vector<std::string>& values) {
    rows.push_back(values);
    std::cout << "Row inserted.\n";
}

void Table::selectAll() const {
    std::cout << "Stored Rows:\n";
    for (const auto& row : rows) {
        for (const auto& cell : row) {
            std::cout << cell << "\t";
        }
        std::cout << "\n";
    }
}
