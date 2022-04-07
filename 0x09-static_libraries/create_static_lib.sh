gcc -c -Wall -Werror -Wextra *.c
ar -rc liball.a *.o
ranlib liball.a
ar -rcs liball.a *.o
gcc main.c -L. -lname -o main
