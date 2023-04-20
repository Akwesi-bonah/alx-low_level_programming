# C - Variadic functions

- what is variadic function
Variadic functions are functions which may take a variable number of arguments and are declared with an ellipsis in place of the last parameter. An example of such a function is `printf`

- Defining variadic functions

    ``` 
long` `func(char, double, int, ...);
   ```

    ~~~~
long` `func(char a, double b, int c, ...)
{
    /* ... */
	
}

    ~~~~

- stdarg.h types
`va_list`

- stdarg.h macros
https://en.wikipedia.org/wiki/Stdarg.h#:~:text=macros%5Bedit%5D-,Name,C99,-Accessing%20the%20arguments%5B


