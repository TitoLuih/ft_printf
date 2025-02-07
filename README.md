# ft_printf

## Descripción

`ft_printf` es una implementación personalizada de la función `printf` de la biblioteca estándar de C. El objetivo del proyecto es entender y practicar cómo funciona esta función en detalle, así como cómo manejar diferentes tipos de formato de impresión y trabajar con cadenas de caracteres, números y punteros.

Este proyecto tiene como objetivo practicar el manejo de cadenas y formatos de entrada/salida en C, así como la gestión de memoria y la implementación de funciones recursivas.

## Funcionalidades

La función `ft_printf` debe ser capaz de manejar los siguientes especificadores de formato:

- `%c` : Imprime un solo carácter.
- `%s` : Imprime una cadena de caracteres.
- `%p` : Imprime un puntero (en formato hexadecimal).
- `%d` : Imprime un número entero con signo.
- `%i` : Imprime un número entero con signo.
- `%u` : Imprime un número entero sin signo.
- `%x` : Imprime un número hexadecimal en minúsculas.
- `%X` : Imprime un número hexadecimal en mayúsculas.
- `%%` : Imprime un carácter de porcentaje literal.

## Requisitos

- El proyecto debe compilar sin errores.
- Debe ser implementado en lenguaje C.
- El código debe seguir las normas de estilo de 42.
- Debe usar solo las funciones estándar permitidas en el curso, sin utilizar bibliotecas externas.

## Instalación

Este proyecto no requiere ninguna instalación especial. Para compilarlo, simplemente sigue estos pasos:

1. Clona este repositorio en tu máquina local.
2. Abre una terminal en la carpeta donde se encuentra el proyecto.
3. Compila el proyecto usando `make`:

```bash
make
```

Esto generará un archivo ejecutable llamado `ft_printf.a`.

4. Para usar la función `ft_printf`, incluye el archivo de cabecera `ft_printf.h` en tu código y enlaza el archivo `ft_printf.a` en la compilación.

## Ejemplo de uso

```c
#include "ft_printf.h"

int main() {
    int num = 42;
    char *str = "Hello, world!";

    ft_printf("Este es un número: %d\n", num);
    ft_printf("Este es un puntero: %p\n", &num);
    ft_printf("Esta es una cadena: %s\n", str);
    ft_printf("Este es un número en hexadecimal: %x\n", num);
    ft_printf("Porcentaje: %%\n");

    return 0;
}
```

Salida esperada:

```bash
Este es un número: 42
Este es un puntero: 0x7ffee1bc5db8
Esta es una cadena: Hello, world!
Este es un número en hexadecimal: 2a
Porcentaje: %
```
