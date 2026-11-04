
#pragma once

namespace pricelab {

/**
 * @brief Calculates the price return of a financial asset.
 *
 * @param firstPrice Initial asset price.
 * @param lastPrice Final asset price.
 * @return Price return as a percentage.
 * @throws std::invalid_argument If either price is not positive.
 */
double calculateTotalReturn(double firstPrice, double lastPrice);

}
