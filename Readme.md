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
