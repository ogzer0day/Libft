# 📚 libft — 1337 School

> **libft** is the first project at **42 School**, where students recreate essential C standard library functions and build a solid foundation for future projects.

🟢 **You are free to copy and reuse this README as a template for your own libft project.**

---

## 🧠 Project Objectives

- Reimplement standard C library functions
- Understand memory management and pointers
- Write clean, reusable, and norm-compliant C code
- Build a personal library for future 42 projects

---

## 📦 Project Structure

libft/
├── ft_*.c
├── libft.h
├── Makefile
└── README.md


---

## 1️⃣ Libc Functions

Reimplemented standard C functions:

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_strlen`
- `ft_strdup`
- `ft_strchr`
- `ft_strncmp`
- `ft_atoi`
- `ft_isalpha`
- `ft_isdigit`
- `ft_isascii`
- `ft_isprint`
- `ft_tolower`
- `ft_toupper`

---

## 2️⃣ Additional Functions

Utility functions not included in libc:

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

---

## 3️⃣ Bonus — Linked List Functions

Uses the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

Bonus functions:

ft_lstnew

ft_lstadd_front

ft_lstadd_back

ft_lstsize

ft_lstlast

ft_lstdelone

ft_lstclear

ft_lstiter

ft_lstmap
```

🛠️ Compilation

Compile the library:

make


This creates:
```
libft.a
```

Makefile rules
make clean     # remove object files
make fclean    # remove objects and libft.a
make re        # recompile everything
make bonus     # compile bonus functions

📌 Usage

Include the header:
```
#include "libft.h"
```

Compile your program:
```
gcc main.c -L. -lft
```
