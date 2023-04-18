# C - Structures, typedef

A struct in the C programming language (and many derivatives) is a composite data type (or record) declaration that defines a physically grouped list of variables under one name in a block of memory, allowing the different variables to be accessed via a single pointer or by the struct declared name which returns the same address. The struct data type can contain other data types so is used for mixed-data-type records such as a hard-drive directory entry (file length, name, extension, physical address, etc.), or other mixed-type records (name, address, telephone, balance, etc.)

- Declaration
struct point {
   int    x;
   int    y;
};

- Initialization
struct point p = { 1, 2 };
struct point p = { .y = 2, .x = 1 };

- Pointers to struct
struct point {
   int x;
   int y;
};
struct point my_point = { 3, 7 };
struct point *p = &my_point;  /* p is a pointer to my_point */
(*p).x = 8;                   /* set the first member of the struct */
p->x = 8;                     /* equivalent method to set the first member of the struct */
