# Overview #

Like the name implies, **0x1E. C - Search Algorithms** introduces the **search algorithms** used in the world of *computer science and engineering.*

<hr/>

### Learning Objectives ###
It is expected that at the end of this project, you are expected to be able to explain to anyone, without the help of Google:
- What is a search algorithm
- What is a linear search
- What is a binary search
- What is the best search algorithm to use depending on your needs


### Requirements and Constraints ###
#### General ####
- Allowed editors: `vi`, `vim`, and `emacs`
- All files will be interpreted on Ubuntu 16.04 LTS
- All files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Yu are not allowed to use global variables
- No more than 5 functions per file
- You are only allowed to use the printf function of the standard library. Any call to another function like strdup, malloc, … is forbidden.
- The prototypes of all your should be included in the header file called search_algos.h
- All your header files should be include guarded


## Folder Details ###
- **Date Created:** Mon. July 15 2024.
- **Author:** [William Inyam](https.//github.com/thecypherzen).
- **Project Timeline:**
  - **Released:** Mon July 15 2024 - 6am.
  - **1st Deadline:** Wed July 18, 2024 - 6am.
  - **Duration:** 3 days.
  - **Month** 7, **Week** 1, **Day** 1


## Reference Resources
- [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
- [Space complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)
- [Serach Algorithms video playlist](https://www.youtube.com/playlist?list=PLEJXowNB4kPwTb4BivkY0dENHmXdOEM3V)



## Technologies ##
- C files are C-89 GNU.
- File types can be identified by their extensions
- Code tested on Ubuntu 20.04 LTS.

## File Tree ##
├── 0-linear.c<br />
├── 1-binary.c<br />
├── 100-jump.c<br />
├── 101-O<br />
├── 102-interpolation.c<br />
├── 103-exponential.c<br />
├── 104-advanced_binary.c<br />
├── 105-jump_list.c<br />
├── 106-linear_skip.c<br />
├── 107-O<br />
├── 108-O<br />
├── 2-O<br />
├── 3-O<br />
├── 4-O<br />
├── 5-O<br />
├── 6-O<br />
├── README.md<br />
├── list_funcs.h<br />
├── search_algos.h<br />
├── task_6_algorithm<br />
└── tests<br />
    ├── task0<br />
    │	├── 0-linear.c<br />
    │	├── linear<br />
    │	├── main0.c<br />
    │	└── search_algos.h<br />
    ├── task01<br />
    │	├── 0-linear.c<br />
    │	├── 1-binary.c<br />
    │	├── binary<br />
    │	├── example.c<br />
    │	├── main1.c<br />
    │	└── search_algos.h<br />
    ├── task07<br />
    │	├── jump<br />
    │	├── jump.c<br />
    │	├── main100.c<br />
    │	└── search_algos.h<br />
    ├── task09<br />
    │	├── 102-interpolation.c<br />
    │	├── interpolation<br />
    │	├── main102.c<br />
    │	├── output<br />
    │	├── result<br />
    │	└── search_algos.h<br />
    ├── task10<br />
    │	├── 103-exponential.c<br />
    │	├── exponential<br />
    │	├── main103.c<br />
    │	└── search_algos.h<br />
    ├── task11<br />
    │	├── 104-advanced_binary.c<br />
    │	├── advanced_binary<br />
    │	├── main104.c<br />
    │	└── search_algos.h<br />
    ├── task12<br />
    │	├── 105-jump_list.c<br />
    │	├── jumplist<br />
    │	├── list_funcs.h<br />
    │	├── main105.c<br />
    │	├── res.txt<br />
    │	└── search_algos.h<br />
    └── task13<br />
        ├── 106-linear_skip.c<br />
        ├── list_funcs.h<br />
        ├── main106.c<br />
        ├── search_algos.h<br />
        └── skiplist<br />

*9 directories, 60 files*


## Files ###
- *Here is a detailed list of all files in the repo and their description*.

| SN | File | Description                                   |
|----|------|-----------------------------------------------|
| 1. | [0-linear.c](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/0-linear.c) | A function that searches for a value in an array of integers using the Linear search algorithm |
| 2. | [1-binary.c](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/1-binary.c) | A function that searches for a value in a sorted array of integers using the Binary search algorithm |
| 3. | [2-O](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/2-O) | A file containing the time complexity (worst case) of a linear search in an array of size n |
| 4. | [3-O](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/3-O) | A file containing the space complexity (worst case) of an iterative linear search algorithm in an array of size n  |
| 5. | [4-O](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/4-O) | A file containing the time complexity (worst case) of a binary search in an array of size n  |
| 6. | [5-O](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/5-O)  |  A file containing the space complexity (worst case) of a binary search in an array of size n  |
| 7. | [6-O](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/6-O)   |  A file containing the space complexity of [this function / algorithm.](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/task_6_algorithm) |
| 8. | [100-jump.c](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/100-jump.c) | A function that searches for a value in a sorted array of integers using the Jump search algorithm |
| 9. | [101-O](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/101-O) | A file containing the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)|
| 10. | [102-interpolation.c](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/102-interpolation.c) | A function that searches for a value in a sorted array of integers using the Interpolation search algorithm |
| 11. | [103-exponential.c](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/103-exponential.c) | A function that searches for a value in a sorted array of integers using the Exponential search algorithm|
| 12. | [104-advanced_binary.c](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/104-advanced_binary.c) | A function that searches for a value in a sorted array of integers using binary search algorighm in such a way that when there are more than one occurences of a value, the index of the very first occurence of the value is found. |
| 13. | [105-jump_list.c](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/105-jump_list.c) | A function that searches for a value in a sorted list(linked-list) of integers using the Jump search algorithm.|
| 14. | [106-linear_skip.c](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/106-linear_skip.c) | A function that searches for a value in a list of sorted integers using a `skip list`. |
| 15. | [107-O](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/107-O) | The time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)|
| 16. | [108-O](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/108-O) | The time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n) |
| 17. | [list_funcs.h](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/list_funcs.h) | A header file containing functions used for **linked-list** test functions. |
| 18. | [search_algos.h](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/search_algos.h) | A header file containing all defnintions and prototypes used by functions |
| 19. | [tests](https://github.com/thecypherzen/alx-low_level_programming/tree/main/0x1E-search_algorithms/tests) | Directory of task-based test cases. |
| 20. | [README.md](https://github.com/thecypherzen/alx-low_level_programming/blob/main/0x1E-search_algorithms/README.md) | Folder readme file. |