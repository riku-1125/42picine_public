*This project has been created as part of the 42 curriculum by rnishiba.*

# Description
A simplified implementation of the C standard library printf function.

# Instructions
The following commands are available.
```bash
make
make clean
make fclean
make re
```
```
make (all)	: build all object files and libftprintf.a
make clean	: remove all object files.
make fclean	: remove all object files and libftprintf.a
make re		: fclean and rebuild all.
```
# Resources
- Variadic arguments: https://youtu.be/Gp4MbIUqx74
- Pointer to integer conversion: https://www.jpcert.or.jp/sc-rules/c-int36-c.html

## AI Usage

AI was used to support understanding and review in the following areas:

- Understanding C concepts
- Understanding pointers and static storage duration
- Reviewing error handling

# Algorithm / Technical choices
- Recursive number printing
- Dispatch table using function pointers
- Static conversion table
- Error propagation strategy
## Why use dispatch table
- Avoid long if/else or switch chains
## Why static conversion table
- Avoid reallocating the table
- Keep the table private to the source file
- Return a valid pointer safely