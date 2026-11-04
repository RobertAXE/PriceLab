
#include <benchmark/benchmark.h>

#include "pricelab/analysis.hpp"

static void BM_TotalReturn(benchmark::State& state) {
    for (auto _ : state) {
        benchmark::DoNotOptimize(
            pricelab::calculateTotalReturn(100.0, 120.0)
        );
    }
}

BENCHMARK(BM_TotalReturn);
BENCHMARK_MAIN();
