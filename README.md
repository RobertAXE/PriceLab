# PriceLab

A simple C++ application for financial asset analysis.

## Overview

PriceLab is an educational C++17 project for calculating
financial metrics and practicing software engineering.

The current version calculates asset price returns
using example prices.

## Features

- Calculate asset price return
- Validate input prices
- Run automated unit tests
- Measure calculation performance

## Technologies

- C++17
- CMake
- GoogleTest
- Google Benchmark
- Doxygen
- GitHub Actions

## Build

Requirements: CMake 3.20+ and a C++17 compiler.

On Windows with Visual Studio Build Tools 2026:

```powershell
cmake -S . -B build -G "Visual Studio 18 2026" -A x64
cmake --build build --config Release
```

## Run

```powershell
.\build\Release\pricelab.exe
```

## Unit Tests

```powershell
ctest --test-dir build -C Release --output-on-failure
```

## Benchmarks

```powershell
.\build\Release\pricelab_benchmarks.exe
```

## CI/CD

GitHub Actions automatically builds the project,
runs unit tests and benchmarks, and publishes documentation.

## Documentation

[Doxygen Documentation](https://robertaxe.github.io/PriceLab/)

Documentation is automatically generated and published
using GitHub Actions and GitHub Pages.

## Project Status

Work in progress.
