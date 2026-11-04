
# AGENTS.md

## Project Overview

PriceLab is a simple C++17 application for financial
asset analysis.

The project currently calculates asset price returns
and provides automated tests and performance benchmarks.

Keep the project simple, readable, and easy to maintain.

## Project Structure

- `src/` - C++ implementation files and application entry point.
- `include/pricelab/` - Public header files.
- `tests/` - Unit tests using GoogleTest.
- `benchmarks/` - Performance benchmarks using Google Benchmark.
- `docs/` - Doxygen configuration.
- `.github/workflows/` - GitHub Actions CI/CD configuration.

## Build Commands

Configure on Windows using Visual Studio 2026:

    cmake -S . -B build -G "Visual Studio 18 2026" -A x64

Build in Release mode:

    cmake --build build --config Release

## Testing

Run unit tests:

    ctest --test-dir build -C Release --output-on-failure

## Benchmarking

Run performance benchmarks:

    .\build\Release\pricelab_benchmarks.exe

## Code Style

- Use C++17.
- Prefer simple and readable solutions.
- Use descriptive names for functions and variables.
- Keep financial calculations separate from application logic.
- Avoid unnecessary dependencies and abstractions.
- Document public functions with Doxygen comments.

## Agent Rules

- Before completing a coding task, build the project
  and run the unit tests.
- Do not modify CI/CD configuration unless explicitly requested.
- Do not change dependency versions without permission.
- Do not introduce unnecessary complexity.
- Do not modify unrelated files.
- Explain significant code changes clearly.
- Do not commit or push changes unless explicitly requested.
