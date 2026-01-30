# C++ Modules (CPP)

The C++ Modules are a 42 School curriculum that introduces C++ and object-oriented programming through 10 progressive modules (CPP00–CPP09). They mark the transition from C to C++ and cover OOP, memory management, templates, and the STL.

## Overview

Each module contains exercises that build increasingly complex applications. Students learn C++ syntax, classes, inheritance, polymorphism, templates, and standard containers—without using C++11 and later features in the early modules.

## Composition

| Module | Focus |
|--------|-------|
| CPP00 | Namespace, classes, member functions, i/o streams, initialization lists |
| CPP01 | Memory allocation, references, pointers to members |
| CPP02 | Fixed-point numbers, orthodox canonical form, operators |
| CPP03 | Inheritance, polymorphism (ClapTrap, ScavTrap, FragTrap, DiamondTrap) |
| CPP04 | Polymorphism, abstract classes, interfaces (Animal, Materia) |
| CPP05 | Repetition and exceptions (Bureaucrat, Form) |
| CPP06 | C++ casts, serialization (ScalarConverter, Serializer, identify) |
| CPP07 | Templates (function/class templates, Array) |
| CPP08 | STL algorithms, containers (easyfind, Span, std::vector) |
| CPP09 | Practical projects (BitcoinExchange, RPN calculator, PmergeMe) |

## Features

- C++98 style (no C++11+ in early modules)
- Orthodox canonical form where required
- Makefiles per exercise
- Subject PDFs for each module

## Technology

- C++ (C++98)
- Make
- Standard library (within module constraints)

## Setup

Each exercise has its own directory with a Makefile. From the exercise folder:

```bash
cd CPP00/ex00
make
./megaphone "hello world"
```

Build and run vary by exercise; check each `ex0n/` folder.

## Notes

- CPP Modules are typically done after the C common core
- Progressive difficulty; later modules assume knowledge from earlier ones
- Subject PDFs in each `CPPnn/` folder
