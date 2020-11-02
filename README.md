# **LIBFT**

Este proyecto contiene mi implementación de algunas funciones de la biblioteca estándar de C.

## **Índice**

- ¿Qué es libft?
- ¿Qué contiene libft?
- ¿Como funciona?
- ¿Cómo uso la biblioteca?
- Uso de ejemplo

## ¿Qué es libft?

Es un proyecto individual de la escuela de programación 42, en la que creamos algunas de las funciones de la biblioteca estándar de C.

Esto lo hacemos para comprender algoritmos básicos y algunas estructuras de datos. De esta forma en los siguientes proyectos usaremos esta libreria en nuestros proyectos, ya que no nos dejan usar algunas de las funciones de la libreria de C.

Esta libreria la iremos ampliando según vamos necesitando ciertas funciones en nuestros proyectos.

## ¿que contiene libft?

Contiene las siguientes funciones:

**Funciones de libc**

-  memset
-  bzero
- memcpy
- memccpy
-  memmove
- memchr
- memcmp
- strlen
- strlcpy
- strlcat
- strchr
- strrchr
- strnstr
- strncmp
- atoi
-  isalpha
- idigit
- isalnum
- isascii
- isprint
- toupper
- tolower
- calloc
- strdup

**Funciones adicionales**

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_putchar_fd
- ft_putstr_fd
- ft_putnbr_fd

**Funciones extra**

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

Según he ido avanzando en mi curso de 42 he ido añadiendo funciones.

## ¿Cómo funciona?

El objetivo es crear una biblioteca llamada libft.a a partir de los archivos fuente para luego poder usar esa biblioteca de otros proyectos en 42.

Para crear esa biblioteca, después de descargar / clonar este proyecto, haga cd en el proyecto y, finalmente, llame a make:



    git clone https://github.com/jdiaz-co/LIBFT.git
    cd libft
    make


Debería ver un archivo libft.a y algunos archivos objeto (.o).
Para borrar todos los archivos objeto y el libft.a usa el comando `make fclean`, si solo desea borrar los archivos objeto use `make clean`.

## Uso de ejemplo

Proyectos donde he usado libft:

- Get_next_line
- Ft_printf
- Cub3D
