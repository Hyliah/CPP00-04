<!-- README.md -->
<h1 align="center">
  CPP Modules – 42
</h1>

<p align="center">
  <i>C++ learning modules from CPP00 to CPP04, part of the 42 Common Core.</i><br>
  <strong>Developed in C++ by <a href="https://github.com/Hyliah">@Hyliah</a></strong>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C++-blue.svg" />
  <img src="https://img.shields.io/badge/Standard-C++98-blueviolet.svg" />
  <img src="https://img.shields.io/badge/Status-In Progress-violet" />
  <img src="https://img.shields.io/badge/School-42 Lausanne-pink.svg" />
</p>

---

<h2 align="center">♦ Overview ♦</h2>

This repository contains my implementation of the **CPP00 to CPP04 modules** from the 42 C++ piscine.  
The goal of these projects is to progressively discover **object-oriented programming in C++**, while respecting strict constraints such as the **C++98 standard**, memory safety, and clean architecture.

Each module introduces new concepts and builds upon the previous ones.

---

<h2> ♦ Modules ♦</h2>

| Module | Main Concepts | Status |
|------|---------------|----------|
| CPP00 | Classes, namespaces, std::string, streams | 100% |
| CPP01 | Memory allocation, references, pointers | 100% |
| CPP02 | Operator overloading, canonical form | 100% |
| CPP03 | Inheritance | Waiting for evaluation |
| CPP04 | Polymorphism, abstract classes, interfaces | Waiting for evaluation |

---

<h2> ♦ Project Structure ♦</h2>

```
CPP00-04/
├── CPP00/              
│  ├── ex00/            # Megaphone : Basic program using std::cin / std::cout and string manipulation
│  ├── ex01/            # PhoneBook : Simple contact manager using classes, arrays and std::getline
│  ├── ex02/            # The Job Of Your Dreams : Recreate missing source file from header, logs and main
│
├── CPP01/              
│  ├── ex00/            # BraiiiiiiinnnzzzZ : Introduction to heap vs stack allocation
│  ├── ex01/            # Moar brainz! : Dynamic allocation of multiple objects
│  ├── ex02/            # HI THIS IS BRAIN : Pointers vs references comparison
│  ├── ex03/            # Unnecessary violence : Using references to avoid pointers
│  ├── ex04/            # Sed is for losers : File manipulation and string replacement
│  ├── ex05/            # Harl 2.0 : Function pointers and switch-like behavior
│  ├── ex06/            # Harl filter : Log filtering using levels
│
├── CPP02/              
│  ├── ex00/            # Fixed : Introduction to Orthodox Canonical Form
│  ├── ex01/            # Fixed : Floating-point conversion and operator overloads
│  ├── ex02/            # Fixed : Arithmetic and comparison operator overloading
│  ├── ex03/            # BSP : Point-in-triangle detection using fixed-point math
│
├── CPP03/              
│  ├── ex00/            # ClapTrap : Base class implementation and basic inheritance
│  ├── ex01/            # ScavTrap : Inheritance and method overriding
│  ├── ex02/            # FragTrap : Extended inheritance and specialized behavior
│  ├── ex03/            # DiamondTrap : Multiple inheritance and ambiguity resolution
│
├── CPP04/              
│  ├── ex00/            # Polymorphism : Virtual functions and base class behavior
│  ├── ex01/            # Brain : Deep copy, dynamic memory and virtual destructors
│  ├── ex02/            # Abstract class : Interfaces and pure virtual methods
│  ├── ex03/            # Materia : Interface-based design and polymorphic cloning


```

Each folder contains:
- Source files (`.cpp`, `.hpp`)
- A module-specific `README.md`
- Exercises following the 42 subject guidelines

---

<h2> ♦ Compilation & Execution ♦</h2>

All projects are compiled using a Makefile compling with flags :
 -Wall -Wextra -Werror -std=c++98

All compilator gives tailored informations
exemple : 

```bash
make
./SedIsForLosers  ready to use. Enter a file and two occurences (S1 & S2)
./SedIsForLosers  file.txt "this" "that"
```


