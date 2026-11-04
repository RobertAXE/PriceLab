
#include "pricelab/analysis.hpp"

#include <stdexcept>

namespace pricelab {

double calculateTotalReturn(double firstPrice, double lastPrice) {
    if (firstPrice <= 0 || lastPrice <= 0) {
        throw std::invalid_argument("Prices must be positive");
    }

    return (lastPrice - firstPrice) / firstPrice * 100.0;
}

}
