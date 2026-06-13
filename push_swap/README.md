*This project has been created as part of the 42 curriculum by rlaurean.*

# Push_swap

## Description

**Push_swap** is an algorithmic project focused on sorting a list of integers using a **limited set of operations** applied to two stacks.

The program takes a sequence of integers as input and must output the **shortest possible list of instructions** required to sort them in ascending order.

The challenge is not only to sort the data but to do it with the **minimum number of operations**, making this a problem of optimization as well as correctness.

---

## Objectives

* Implement efficient sorting algorithms
* Minimize the number of operations
* Work with stack-based data structures
* Improve algorithmic thinking
* Understand time and space complexity

---

## Instructions

### Compilation

```bash
make
```

Available Makefile rules:

```bash
make        # compile the project
make clean  # remove object files
make fclean # remove object files and executable
make re     # recompile everything
```

---

### Execution

```bash
./push_swap <list_of_integers>
```

Example:

```bash
./push_swap 2 1 3 6 5 8
```

Example output:

```
sa
pb
pb
pb
sa
pa
pa
pa
```

---

### Error Handling

The program must output:

```bash
Error
```

in the following cases:

* Non-integer arguments
* Duplicate numbers
* Values outside the integer range
* Invalid input format

---

## Allowed Operations

Only the following operations are allowed:

### Swap

* `sa` → swap the first two elements of stack A
* `sb` → swap the first two elements of stack B
* `ss` → perform `sa` and `sb` simultaneously

### Push

* `pa` → move the top element from B to A
* `pb` → move the top element from A to B

### Rotate

* `ra` → shift all elements of A up by one
* `rb` → shift all elements of B up by one
* `rr` → perform `ra` and `rb` simultaneously

### Reverse Rotate

* `rra` → shift all elements of A down by one
* `rrb` → shift all elements of B down by one
* `rrr` → perform `rra` and `rrb` simultaneously

---

## Algorithm Strategy

Different strategies are used depending on input size:

### Small inputs (≤ 5 numbers)

* Hardcoded sorting cases
* Minimal operations through conditional logic

### Medium and large inputs

Common approaches:

* **Radix Sort (base 2)**
* Value indexing (normalization)
* Bitwise sorting

### Why Radix Sort?

* Time complexity: `O(n log n)`
* Efficient for large datasets
* Well-suited for push_swap constraints

---

## Performance Benchmarks

To achieve full validation:

| Input Size  | Max Operations |
| ----------- | -------------- |
| 100 numbers | < 700          |
| 500 numbers | < 5500         |

To achieve minimal project validation:

| Input Size  | Max Operations |
| ----------- | -------------- |
| 100 numbers | < 1100         |
| 500 numbers | < 8500         |

---

## Testing

Example:

```bash
ARG="4 67 3 87 23"
./push_swap $ARG | wc -l
```

```bash
ARG="4 67 3 87 23"
./push_swap $ARG | ./checker_linux $ARG
```

Expected output:

```
OK
```

# 100 numbers test
```bash
ARG=$(shuf -i 0-999 -n 100 | tr '\n' ' ')
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG
```

# 500 numbers test
```bash
ARG=$(shuf -i 0-9999 -n 500 | tr '\n' ' ')
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG
```

# Large lists
```bash
ARG=$(python3 -c "import random; print(*random.sample(range(-500,500),100))")

echo "=== BEFORE ==="
echo $ARG

echo ""
echo "=== INSTRUCTIONS ($(./push_swap $ARG | wc -l)) ==="
./push_swap $ARG

echo ""
echo "=== CHECKER ==="
./push_swap $ARG | ./checker_linux $ARG
```

# Show sorted
```bash
ARG=$(python3 -c "import random; print(*random.sample(range(-500,500),10))")

echo "=== BEFORE ==="
echo $ARG | tr ' ' '\n'

echo ""
echo "=== AFTER ==="
echo $ARG | tr ' ' '\n' | sort -n
```

---

## Technical Choices

* Language: C
* No global variables
* Memory management with no leaks
* Custom libft implementation
* Data structures: arrays or linked lists

---

## Resources

* Sorting algorithm documentation
* Big-O complexity theory
* Radix Sort explanations
* Stack data structures

---

## AI Usage

AI tools were used responsibly during this project:

* Exploring algorithm strategies
* Understanding concepts (e.g., Radix Sort)
* Reviewing ideas

Not used for:

* Blind code generation
* Copy-paste without understanding

All implemented code was written, tested, and fully understood.

---

## Final Notes

Push_swap is a fundamental project for understanding:

* algorithm optimization
* efficient problem solving
* low-level data manipulation


---