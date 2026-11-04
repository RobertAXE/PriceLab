
#include <iostream>
#include "pricelab/analysis.hpp"

int main() {
    double firstPrice = 100.0;
    double lastPrice = 120.0;

    double result = pricelab::calculateTotalReturn(
        firstPrice, lastPrice
    );

    std::cout << "PriceLab v0.1\n";
    std::cout << "Total Return: " << result << "%\n";

    return 0;
}
