*This project has been created as part of the 42 curriculum by csekakul and rafsanch.*

# Description

The program takes a list of integers as arguments and outputs a sequence of operations that sorts the numbers in ascending order using two stacks (A and B) and a limited set of operations.

At this stage, the program supports:

- Parsing input arguments (including multiple numbers per string)
- Error handling for invalid input or duplicates
- Stack operations:
  - Swap: `sa`, `sb`, `ss`
  - Push: `pa`, `pb`
  - Rotate: `ra`, `rb`, `rr`
  - Reverse rotate: `rra`, `rrb`, `rrr`
- Sorting small stacks (2 or 3 numbers)  

---

## Algorithm Selection and Justification

### 1. Sorting 2 numbers
- **Algorithm:** Compare the first two numbers in stack A and swap if necessary (`sa`).
- **Justification:**  
  Sorting two numbers requires at most one operation. Using `sa` is the simplest and most efficient method. There’s no need for push or rotate operations.

---

### 2. Sorting 3 numbers
- **Algorithm:**  
  For three numbers, the program checks all 6 possible permutations of the stack and applies the minimal sequence of operations (`sa`, `ra`, `rra`) to sort it.

- **Justification:**  
  - The number of possible permutations for 3 numbers is small (6).  
  - By analyzing each case, we can guarantee that **no more than 2 operations** are needed to sort any 3-number stack.  
  - This method is both **efficient** and **deterministic**, producing the shortest sequence of allowed operations for any 3-number input.  
  - Using swap and rotate operations only avoids unnecessary use of stack B, which is reserved for larger stacks.  

**Examples:**

| Input Stack | Output Operations |
|------------|-----------------|
| `[2, 1, 3]` | `sa` |
| `[3, 2, 1]` | `sa` `rra` |
| `[2, 3, 1]` | `rra` |
| `[1, 3, 2]` | `sa` `ra` |

- These sequences ensure the stack is sorted in ascending order with minimal moves.

---

### 3. Use of Two Stacks (A and B)
- Even though sorting ≤3 numbers does not require stack B, the project architecture uses two stacks in preparation for **sorting larger inputs**.  
- All operations (push, swap, rotate, reverse rotate) are implemented for both stacks to allow scalability.

### TODO
- stack_and_back reallocates every time -> optimization later

---

# Instructions

Compile the program:

```bash
cc -Wall -Wextra -Werror *.c -o push_swap
```

# Resources
- [Push Swap Visualizer](https://github.com/o-reo/push_swap_visualizer)
- [Push Swap Explanation](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)
- [Inspiration](https://github.com/anyaschukin/Push_Swap)
- [Overview](https://github.com/AdrianWR/push_swap)
- [Jump/branch table](https://en.wikipedia.org/wiki/Branch_table)
- [Structures CS50 video](https://www.youtube.com/watch?v=E4lb2gkyXr8)
- [Structs CS50 video](https://www.youtube.com/watch?v=yMvRqKmbRm4)
- [Defining custom types CS50 video](https://www.youtube.com/watch?v=96M4q0OnMfY)
- [Struct Wikipedia](https://en.wikipedia.org/wiki/Struct_(C_programming_language)#:~:text=In%20the%20C%20programming%20language,single%20identifier%2C%20often%20a%20pointer.)

## AI Assistance

During the development of this project, AI tools  were used for:

- **Clarifying concepts**: understanding stack operations, parsing, and sorting logic.
- **Planning**: designing the step-by-step approach for small stack sorting.
- **Debugging guidance**: identifying compilation errors, type mismatches, and improving function structure.
- **Writing README and documentation**: creating clear explanations of algorithms and program structure.

### Important Notes

- No AI-generated code was used to bypass learning objectives.  
- All **final implementations were written and tested manually**.  
- AI assistance was strictly used as a **learning and planning aid**, similar to consulting with peers or mentors.
