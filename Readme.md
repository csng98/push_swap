*This project has been created as part of the 42 curriculum by csekakul and rafsanch.*

# Description
### detailed explanation and justification of the algorithms selected for this project

## t_frame Structure

### Stacks
- `a : s_stack*` → Stack A  
- `b : s_stack*` → Stack B  

---

### Input / Command
- `argv : char**` → Program arguments  
- `line : char*` → Current line / command  
- `str : char*` → Temporary string  

---

### Flags / Output Control
- `print_stacks : int` → Show stacks visually  
- `do_write : int` → Write output / logging  

---

### Stack Metrics
- `stack_len : int` → Length of stack A  
- `quarter : long` → 25% value  
- `median : long` → 50% value  
- `three_quarters : long` → 75% value  

---

### Biggest Element Tracking
- `biggest : long` → Largest value  
- `big_rotate : int` → Rotations needed to bring it to top  
- `big_rrotate : int` → Reverse rotations needed  
- `big_flag : int` → Processed / marked  

---

### Smallest Element Tracking
- `smallest : long` → Smallest value  
- `small_rotate : int` → Rotations to top  
- `small_rrotate : int` → Reverse rotations  
- `small_flag : int` → Processed / marked  

---

### Other / Algorithm Flags
- `after_rotate : int` → Flag for rotation logic  

# Instructions

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
