# First Missing Positive Integer

A C implementation of an efficient algorithm that finds the smallest missing positive integer in an unsorted array.

The algorithm runs in **O(n) time** and uses **O(1) extra space** by rearranging the elements directly in the original array.

## Problem Description

Given an unsorted array of integers, find the smallest positive integer that is not present in the array.

The answer must be strictly greater than zero.

### Examples

**Example 1**

Input:
```text
[2, 3, 5, 4]
```

Output:
```text
1
```

Explanation: The array contains `2`, `3`, `4`, and `5`, but `1` is missing.

**Example 2**

Input:
```text
[0, -2, 1, 2]
```

Output:
```text
3
```

Explanation: Both `1` and `2` are present, so the smallest missing positive integer is `3`.

**Example 3**

Input:
```text
[1, 2, 3, 4]
```

Output:
```text
5
```

Explanation: All positive integers from `1` to `4` are present, so the answer is `5`.

## Algorithm

Instead of sorting the entire array, the algorithm places each relevant positive integer at its corresponding index.

For a value `x`, its target index is:

```c
x - 1
```

For example, the value `3` belongs at index `2`, because array indices start at `0`.

The algorithm works in three steps:

1. **Place the elements:** Swap each positive integer between `1` and `n` into its corresponding position, whenever possible.
2. **Find the first missing value:** Traverse the rearranged array and check whether `nums[i] == i + 1`.
3. **Return the answer:** If a value does not match its expected position, return `i + 1`. If every position matches, return `n + 1`.

Negative numbers, zero, and values greater than `n` do not need to be placed.

## Complexity Analysis

- **Time complexity:** `O(n)` — each element is examined, and the total number of successful swaps is bounded by the array size.
- **Auxiliary space complexity:** `O(1)` — the algorithm rearranges the original array and uses only a constant amount of additional memory.

## Requirements

- A C compiler, such as GCC.
- A terminal or an IDE that supports C.

## Compilation and Execution

Clone the repository:

```bash
git clone https://github.com/YuniqueCode07/first-missing-positive-integer.git
cd first-missing-positive-integer
```

Compile the program:

```bash
gcc main.c -o first-missing-positive
```

Run it:

```bash
./first-missing-positive
```

The program asks for the array length and then prompts you to enter each integer.

## Example Run

```text
Give me the length of the table: 4
Give me the number to put in index 0 inside the table: 2
Give me the number to put in index 1 inside the table: 3
Give me the number to put in index 2 inside the table: 5
Give me the number to put in index 3 inside the table: 4

The first missing integer value is: 1
```

## Key Concepts

This project demonstrates:

- Array manipulation in C
- In-place element swapping
- Index-based placement
- Time and space complexity analysis
- Algorithm optimization

## License

This project is available for educational purposes. Add a license file if you intend to distribute it under a specific open-source license.
