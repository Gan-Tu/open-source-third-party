#include "benchmark/benchmark.h"

// For more extensive functionalities, see https://github.com/google/benchmark

static void STRING_CONST(benchmark::State& state) {
  // setup goes here
  for (auto _ : state) {
    // body to be bench marked
    std::string empty;
  }
  // tear down goes here
}

static void STRING_LENGTH(benchmark::State& state) {
  for (auto _ : state) {
    state.PauseTiming();
    std::string x = "hi";
    std::string y = "!!";
    state.ResumeTiming();

    int s = (x + y).size();
  }
}

static void MULTIPLY(benchmark::State& state) {
  for (auto _ : state) {
    int x = state.range(0) * state.range(0);
  }
}

static void COUNT_EVEN_ODD(benchmark::State& state) {
  state.counters["even"] = 0;
  state.counters["odd"] = 0;
  for (auto _ : state) {
    for (size_t i = 0; i < state.range(0); i++) {
      for (size_t j = 0; j < state.range(0); j++) {
        if (i * j % 2 == 0) {
          state.counters["even"]++;
        } else {
          state.counters["odd"]++;
        }
      }
    }
  }
}

// Register the function as a benchmark
BENCHMARK(STRING_CONST);
BENCHMARK(STRING_LENGTH);
BENCHMARK(MULTIPLY)->Arg(10);
BENCHMARK(MULTIPLY)->Arg(100)->Arg(150)->Arg(200);
BENCHMARK(MULTIPLY)->Range(200, 300);
BENCHMARK(MULTIPLY)->DenseRange(300, 400, 25);
BENCHMARK(COUNT_EVEN_ODD)->Args({10, 10});;
BENCHMARK(COUNT_EVEN_ODD)->Ranges({{1,50}, {50,100}});

// Run benchmark
BENCHMARK_MAIN();

// // Instead of using BENCHMARK_MAIN, we can also manually write the main to
// // allow additional setups in the main body
// int main(int argc, char** argv) {
//   ::benchmark::Initialize(&argc, argv);
//   if (::benchmark::ReportUnrecognizedArguments(argc, argv)) return 1;
//   ::benchmark::RunSpecifiedBenchmarks();
// }