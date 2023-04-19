# C - Function pointers

A useful technique is the ability to have pointers to functions. Their declaration is easy: write the declaration as it would be for the function, say.
- simple function
`int function(int a, float b);`

and simply put brackets around the name and a * in front of it: that declares the pointer. Because of precedence, if you don't parenthesize the name, you declare a function returning a pointer:
- function pointer of int
`/* function returning pointer to int */`
`int *func(int a, float b);`
- pointer function of int
`/* pointer to function returning int */`
`int (*func)(int a, float b);`
