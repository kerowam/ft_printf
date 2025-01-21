<div align="center">
  <img src="https://raw.githubusercontent.com/15Galan/42_project-readmes/refs/heads/master/banners/cursus/projects/ft_printf-dark.png" />
  <img src="https://img.shields.io/badge/status-finished-darkgreen" />
  <img src="https://img.shields.io/badge/score-100-darkgreen" /><br/> 
  <b>English</b> · <a href="README.md">Español</a>
</div> 

---

# 📖 Introduction
The **ft_printf** project is a recreation of the standard `printf` function in C. This project challenges students to understand the inner workings of this function and to implement it in a custom way. To do so, it is necessary to learn how to use a variable number of arguments

This is the [subject](en.subject.pdf) of the project.

## 📋 Table of Contents

- ⚙️ [Requirements](#requirements)
- 🛠️ [Installation](#installation)
- 🚀 [Usage](#usage)
- 📚 [Implemented Specifications](#implemented-specs)

---

## ⚙️ Requirements

- **Operating System:** Linux or macOS
- **Compiler:** `gcc` with support for C99 standard or higher
- **Tools:** Mandatory use of `Makefile` for compilation

---

## 🛠️ Installation

1. Clone this repository to your local machine:
```bash
git clone https://github.com/your_user/ft_printf.git
cd ft_printf
```

2. Compile the library by running the command:
```bash
make
```
3. This will generate a file called `libftprintf.a`, which you can include in your projects.

Another option is to use **ft_printf** via the [libft](https://github.com/kerowam/libft) library

---

## 🚀 Usage

To use ft_printf in your project, include the ft_printf.h header file and link the library when compiling:
```c
#include "ft_printf.h"

int main() {
ft_printf("Hello, world! Value: %d\n", 42);
return (0);
}
```

Compile your program by linking the library:
```bash
gcc -o main program.c -L. -lftprintf
```

---

## 📚 Implemented Specifications

The project must support the following format specifiers:

### Mandatory specifiers:

- %c - Print a character.
- %s - Print a string.
- %p - Print a pointer in hexadecimal format.
- %d / %i - Print a signed integer.
- %u - Print an unsigned integer.
- %x / %X - Print a number in hexadecimal (lower/upper case).
- %% - Print a % character.

### Additional rules:

- Correct handling of modifiers such as field width and precision.
- Handling of null results in strings and pointers.
- Support for negative numbers and extreme values.
