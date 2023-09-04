![banners-06](https://github.com/diocode/42-Ft_printf/assets/107859177/94a6c466-a792-4fcd-ac2d-3b28abd19273)

<p align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/evaluated-06%20%2F%2012%20%2F%202022-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/score-100%20%2F%20100-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/github/last-commit/diocode/philosophers?color=%2312bab9&style=flat-square"/>
	<a href='https://www.linkedin.com/in/diogo-gsilva' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=0A66C2&color=0A66C2'/></a>
</p>

<p align="center">
	<a href="#about">About</a> •
	<a href="#how-to-use">How to use</a> •
	<a href="#norminette">Norminette</a>
</p>

## ABOUT ([Subject](/.github/en.subject.pdf))

In this project, you are tasked with creating your version of the printf() function in C, called ft_printf(). The function should handle various format conversions such as characters, strings, pointers, decimals, integers, and hexadecimal numbers, along with the percent sign. You should not implement the buffer management of the original printf() and must use the 'ar' command to create a library named 'libftprintf.a' at the root of your repository for evaluation.<br>This project aims to improve your programming skills and introduces you to variadic functions in C.

<a href="/.github/en.subject.pdf">Click here</a> for the subject of this project.

<br>

## HOW TO USE
#### COMPILATION AND EXECUTION
#### 1º - Clone the repository
```bash
$ git clone git@github.com:diocode/42-Ft_printf.git
```

#### 2º - Enter the project folder and run `make`
```bash
$ ./cd 42-Ft_printf
$ ./make
```

#### 3º - Use the program
> After compiling you will get a `libftprintf.a` that can be implemented in your code so that you can use the `ft_printf()` function

<br>

#### MAKEFILE COMMANDS
`make` or `make all` - Compile program **mandatory** files.

`make bonus` - Compile program **bonus** files.

`make clean` - Delete all .o (object files) files.

`make fclean` - Delete all .o (object file) and .a (executable) files.

`make re` - Use rules `fclean` + `all`.

<br>

## NORMINETTE
At 42 School, projects are generally expected to adhere to the Norm, the school's coding standard:

```
- No for, do while, switch, case or goto are allowed
- No more than 25 lines per function and 5 functions per file
- No assigns and declarations in the same line (unless static)
- No more than 5 variables in 1 function
... 
```

* [Norminette](https://github.com/42School/norminette) - Tool by 42, to respect the code norm. `GitHub`
* [42 Header](https://github.com/42Paris/42header) - 42 header for Vim. `GitHub`
