# Dynamic Libraries in C

This repository contains the work and exercises related to dynamic libraries in C, as part of the [ALX Low Level Programming](https://www.alxafrica.com/software-engineering-2022) curriculum. The project explores the creation, usage, and operational differences between static and dynamic libraries in C, with a focus on Linux environments.

## Overview

Dynamic libraries in C are files that contain one or more functions compiled, linked, and ready to be used by other programs. Unlike static libraries, dynamic libraries are not embedded into the executable at compile time; they are linked at runtime, which can save memory and disk space and allow for modular application development.

## Getting Started

### Prerequisites

Ensure you have the following installed on your system:
- A Linux operating system, preferably Ubuntu 20.04 LTS.
- The GCC compiler.

### Installation and Usage

Clone the repository to get started with the dynamic libraries:

```sh
git clone https://github.com/sidowxyz/alx-low_level_programming.git
cd alx-low_level_programming/0x18-dynamic_libraries
```

### Creating a Dynamic Library

To create your own dynamic library from the C files available in the directory, run the provided script:

```sh
./1-create_dynamic_lib.sh
```

This will compile all `.c` files in the directory into a single dynamic library named `liball.so`.

### Linking with the Dynamic Library

To use the dynamic library with your C program, compile your program with the following command, ensuring the `-L` and `-l` options are correctly pointed to your library:

```sh
gcc -L. -lall your_program.c -o your_program
```

Don't forget to adjust your `LD_LIBRARY_PATH` environment variable if your library resides outside standard directories:

```sh
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
```

## Example

Here's an example showing how to use one of the functions from the dynamic library:

```c
#include "main.h"
#include <stdio.h>

int main(void) {
    printf("Length: %d\n", _strlen("Hello, Dynamic Libraries!"));
    return 0;
}
```

## Acknowledgments

- ALX Africa for the learning opportunity.
- All mentors and peers who provided guidance and support.
