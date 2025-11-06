# CPP01

A C++98 project focusing on memory allocation, pointers to members, references, and switch statements.

## Table of Contents

- [Overview](#overview)
- [Requirements](#requirements)
- [Exercises](#exercises)
  - [ex00: BraiiiiiiinnnzzzZ](#ex00-braiiiiiiinnnzzzzz)
  - [ex01: Moar brainz!](#ex01-moar-brainz)
  - [ex02: HI THIS IS BRAIN](#ex02-hi-this-is-brain)
  - [ex03: Unnecessary violence](#ex03-unnecessary-violence)
  - [ex04: Sed is for losers](#ex04-sed-is-for-losers)
  - [ex05: Harl 2.0](#ex05-harl-20)
  - [ex06: Harl filter](#ex06-harl-filter)
- [Building](#building)
- [Usage](#usage)

## Overview

This project explores fundamental C++ concepts including:
- Stack vs Heap allocation
- Memory management with `new` and `delete`
- References vs Pointers
- Member function pointers
- File stream operations
- Switch statements

## Requirements

- C++ compiler with C++98 standard support
- Make

## Exercises

### ex00: BraiiiiiiinnnzzzZ

**Objective:** Understand the difference between stack and heap allocation.

**Files:**
- [`main.cpp`](ex00/main.cpp)
- [`Zombie.hpp`](ex00/Zombie.hpp)
- [`Zombie.cpp`](ex00/Zombie.cpp)
- [`newZombie.cpp`](ex00/newZombie.cpp) - Creates a zombie on the heap
- [`randomChump.cpp`](ex00/randomChump.cpp) - Creates a zombie on the stack
- [`Makefile`](ex00/Makefile)

**Build & Run:**
```bash
cd ex00
make
./zombie

Key Concepts:
newZombie allocates on heap (must be manually deleted)
randomChump allocates on stack (automatically destroyed)

ex01: Moar brainz!
Objective: Allocate multiple objects at once using array allocation.

Files:

main.cpp
Zombie.hpp
Zombie.cpp
zombieHorde.cpp - Creates an array of N zombies
Makefile

Build & Run:
cd ex01
make
./moar_brainz

Key Concepts:

Array allocation with new[]
Array deallocation with delete[]
zombieHorde function creates N zombies with the same nam

ex02: HI THIS IS BRAIN
Objective: Understand the difference between pointers and references.

Files:

main.cpp
Makefile

Build & Run:
cd ex02
make
./brain

Key Concepts:
Demonstrates that references and pointers both refer to the same memory address
Shows how to access values through pointers (*ptr) and references (direct access)

Key Concepts:
Demonstrates that references and pointers both refer to the same memory address
Shows how to access values through pointers (*ptr) and references (direct access)

ex03: Unnecessary violence
Objective: Learn when to use references vs pointers in class design.

Files:

main.cpp
Weapon.hpp / Weapon.cpp
HumanA.hpp / HumanA.cpp - Always has a weapon (reference)
HumanB.hpp / HumanB.cpp - May not have a weapon (pointer)
Makefile

Build & Run:
cd ex03
make
./violence

Key Concepts:
HumanA uses a reference (Weapon&) because it always has a weapon
HumanB uses a pointer (Weapon*) because the weapon is optional

ex04: Sed is for losers
Objective: Implement a simple file-based string replacement tool.

Files:
main.cpp
Sed.hpp / Sed.cpp
Makefile

Build & Run:
cd ex04
make
./sed <filename> <string_to_replace> <replacement_string>

Example:
echo "Hello world, world!" > test.txt
./sed test.txt world universe
cat test.txt.replace
# Output: Hello universe, universe!

Key Concepts:
File I/O with std::ifstream and std::ofstream
String manipulation with std::string::find and std::string::substr
The Sed::replaceAll method handles all occurrences

ex05: Harl 2.0
Objective: Use pointers to member functions.

Files:
main.cpp
Harl.hpp / Harl.cpp
Makefile

Build & Run:
cd ex05
make
./harl

Key Concepts:
Member function pointers: void(Harl::*_funcsPtr[4])(void)
Dynamic method selection based on string input
The Harl::complain method maps strings to functions

ex06: Harl filter
Objective: Use switch statements with fall-through behavior.

Files:
main.cpp
Harl.hpp / Harl.cpp
Makefile

Build & Run:
cd ex06
make
./harlFilter DEBUG
./harlFilter WARNING
./harlFilter UNKNOWN

Key Concepts:
Switch statement fall-through (intentionally missing break statements)
Harl::getLevel converts string to integer for switch
Filters messages based on severity level

Building
Each exercise has its own Makefile with the following targets:

make        # Compile the project
make clean  # Remove object files
make fclean # Remove object files and executable
make re     # Rebuild from scratch

Usage
Navigate to any exercise directory and run:

cd ex00  # or ex01, ex02, etc.
make
./<executable_name>

Executables for each exercise:
ex00: zombie
ex01: moar_brainz
ex02: brain
ex03: violence
ex04: sed
ex05: harl
ex06: harlFilter

Learning Outcomes
After completing this project, you will understand:

✅ Stack vs Heap allocation and when to use each
✅ Proper memory management with new/delete and new[]/delete[]
✅ Differences between pointers and references
✅ When to use pointers vs references in class design
✅ File I/O operations in C++
✅ Pointers to member functions
✅ Switch statements and fall-through behavior

Author
hparveen - 42 Student

All exercises compile with: -Wall -Wextra -Werror -std=c++98