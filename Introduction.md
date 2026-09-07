# C++ Programs Lab

> A growing collection of everyday C++ programs and Design and Analysis of Algorithms implementations.

This repository is a practical space for learning C++ by writing, running, and improving programs. It brings together normal programming exercises for building strong fundamentals and DAA programs for understanding how algorithms solve problems efficiently.

From input/output, arrays, and problem-solving basics to recursion, divide and conquer, and complexity analysis, every program is designed to keep the logic visible and approachable.

## What is inside?

### Core C++ Programs

Small, focused programs for strengthening programming fundamentals, including:

- Input and output
- Variables, conditions, and loops
- Arrays and functions
- Recursion and problem-solving practice

### DAA Programs

Algorithm implementations that make performance and strategy easier to study:

| Program | Core idea | Average time | Extra space |
| --- | --- | ---: | ---: |
| `merge sort.cpp` | Divide the array, sort each half, then merge the results | `O(n log n)` | `O(n)` |
| `quick sort.cpp` | Choose a pivot, partition the array, then sort both sides | `O(n log n)` | `O(log n)` average |

## Why this repository?

- **Beginner-friendly:** short programs with the complete input-to-output flow.
- **Concept-focused:** each file keeps the logic visible instead of hiding it behind libraries.
- **Theory connected to practice:** explore how DAA ideas become working C++ programs.
- **Easy to experiment with:** change inputs, test edge cases, and observe the results.

## Quick start

Compile any `.cpp` program with a C++ compiler. For example:

```bash
g++ "merge sort.cpp" -o merge-sort
g++ "quick sort.cpp" -o quick-sort
```

Run one of them:

```bash
./merge-sort
```

On Windows, run the generated `.exe` file instead.

Example input:

```text
Enter the number of elements: 6
Enter the elements: 42 7 19 3 19 11
```

Example output:

```text
Sorted array: 3 7 11 19 19 42
```

## Learning path

1. Begin with the core C++ programs to build confidence with syntax and problem solving.
2. Move to `quick sort.cpp` to explore pivot selection, partitioning, and swapping.
3. Open `merge sort.cpp` to see how a problem can be divided and recombined.
4. Test algorithms with the same inputs and compare their structure, memory use, and behavior.

## Note

The Merge Sort program stores temporary values in a fixed-size array of 100 elements. Keep the input size at or below 100 when using it.

## Built with

**C++** | **Problem solving** | **Recursion** | **Arrays** | **DAA** | **Divide and conquer**
