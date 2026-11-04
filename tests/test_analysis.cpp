
#include <gtest/gtest.h>

#include "pricelab/analysis.hpp"

TEST(TotalReturnTest, PositiveReturn) {
    double result = pricelab::calculateTotalReturn(100.0, 120.0);

    EXPECT_DOUBLE_EQ(result, 20.0);
}
