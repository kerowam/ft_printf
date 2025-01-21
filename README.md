<div align="center">
  <img src="https://raw.githubusercontent.com/15Galan/42_project-readmes/refs/heads/master/banners/cursus/projects/ft_printf-dark.png" />
  <img src="https://img.shields.io/badge/status-finished-darkgreen" />
  <img src="https://img.shields.io/badge/score-100-darkgreen" /><br/> 
   <a href="/README-en.md">English<a> · <b>Español</b>
</div> 

---

# 📖 Introducción
El proyecto **ft_printf** es una recreación de la función estándar `printf` en C. Este proyecto desafía a los estudiantes a comprender el funcionamiento interno de esta función y a implementarla de manera personalizada. Para ello, es necesario aprender a utilizar un número variable de argumentos

Este es el [subject](es.subject.pdf) del proyecto.

## 📋 Tabla de Contenidos

- ⚙️ [Requisitos](#requisitos)
- 🛠️ [Instalación](#instalación)
- 🚀 [Uso](#uso)
- 📚 [Especificaciones Implementadas](#especificaciones-implementadas)

---

## ⚙️ Requisitos

- **Sistema operativo:** Linux o macOS  
- **Compilador:** `gcc` con soporte para el estándar C99 o superior  
- **Herramientas:** Uso obligatorio de `Makefile` para la compilación  

---

## 🛠️ Instalación

1. Clona este repositorio en tu máquina local:
   ```bash
   git clone https://github.com/tu_usuario/ft_printf.git
   cd ft_printf
   ```
   
2. Compila la biblioteca ejecutando el comando:
   ```bash
   make
   ```
3. Esto generará un archivo llamado `libftprintf.a`, que puedes incluir en tus proyectos.

Otra opción es utilizar **ft_printf** a través de la librería [libft](https://github.com/kerowam/libft)

---

## 🚀 Uso

Para usar ft_printf en tu proyecto, incluye el archivo de cabecera ft_printf.h y enlaza la biblioteca al compilar:
```c
#include "ft_printf.h"

int main() {
    ft_printf("Hola, mundo! Valor: %d\n", 42);
    return (0);
}
```

Compila tu programa enlazando la biblioteca:
```bash
gcc -o programa principal.c -L. -lftprintf
```

---

## 📚 Especificaciones Implementadas

El proyecto debe soportar los siguientes especificadores de formato:

### Especificadores obligatorios:

  - %c - Imprime un carácter.
  - %s - Imprime una cadena de caracteres.
  - %p - Imprime un puntero en formato hexadecimal.
  - %d / %i - Imprime un número entero con signo.
  - %u - Imprime un número entero sin signo.
  - %x / %X - Imprime un número en hexadecimal (minúsculas/mayúsculas).
  - %% - Imprime un carácter %.

### Reglas adicionales:

  - Manejo correcto de modificadores como ancho de campo y precisión.
  - Gestión de resultados nulos (NULL) en cadenas y punteros.
  - Compatibilidad con números negativos y valores extremos.
