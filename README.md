# NC_Libft

**NC_Libft** est une réimplémentation enrichie de la `libft` 42, écrite en C. Elle inclut une variété de fonctions utilitaires pour la gestion des chaînes, de la mémoire, des conversions, des listes chaînées, et plus encore.

**NC_Libft** is an enriched reimplementation of the 42 `libft`, written in C. It includes a variety of utility functions for managing strings, memory, conversions, linked lists, and more.

## 📁 Structure du répertoire / Directory Structure

Les fonctions sont organisées par catégories dans le répertoire `libft/src` :
Functions are organized into categories in the `libft/src` directory:
- `ft_is/` — Tests de caractères / Character tests
- `ft_str/` — Fonctions de manipulation de chaînes / String manipulation functions
- `ft_mem/` — Fonctions de mémoire / Memory functions
- `ft_to/` — Conversions / Conversions
- `ft_put/` — Fonctions d'affichage / Display functions
- `ft_lst/` — Fonctions sur les listes chaînées / Linked list functions
- `ft_other/` — Divers (printf, get_next_line...) / Miscellaneous (printf, get_next_line...)

---

## 🧠 Détails des fonctions / Function Details

### 🔤 `ft_is/` — Tests de caractères / Character Tests

- `ft_isalpha`: Vérifie si un caractère est une lettre de l'alphabet / Checks if a character is an alphabet letter.
- `ft_isdigit`: Vérifie si un caractère est un chiffre / Checks if a character is a digit.
- `ft_isalnum`: Vérifie si un caractère est alphanumérique / Checks if a character is alphanumeric.
- `ft_isascii`: Vérifie si un caractère est dans la table ASCII / Checks if a character is in the ASCII table.
- `ft_isprint`: Vérifie si un caractère est imprimable / Checks if a character is printable.
- `ft_is_in_set`: Vérifie si un caractère est présent dans un ensemble / Checks if a character is present in a set.
- `ft_iswhitespace`: Vérifie si un caractère est un espace blanc / Checks if a character is a whitespace.

---

### 🧵 `ft_str/` — Fonctions de manipulation de chaînes / String Functions

- `ft_split`: Divise une chaîne par un délimiteur / Splits a string by a delimiter.
- `ft_strchr`: Cherche un caractère dans une chaîne / Searches for a character in a string.
- `ft_strdup`: Duplique une chaîne / Duplicates a string.
- `ft_striteri`: Applique une fonction à chaque caractère (avec index) / Applies a function to each character (with index).
- `ft_strjoin`: Joins deux chaînes / Joins two strings.
- `ft_strlcat`: Concatène avec une taille limitée / Concatenates with limited size.
- `ft_strlcpy`: Copie avec une taille limitée / Copies with limited size.
- `ft_strldup`: Duplique une chaîne avec une taille limitée / Duplicates a string with limited size.
- `ft_strlen`: Retourne la longueur d'une chaîne / Returns the length of a string.
- `ft_strlen_char`: Longueur jusqu'à un caractère spécifique / Length up to a specific character.
- `ft_strmapi`: Applique une fonction à chaque caractère (retourne une nouvelle chaîne) / Applies a function to each character (returns a new string).
- `ft_strncmp`: Compare deux chaînes sur `n` caractères / Compares two strings for `n` characters.
- `ft_strnstr`: Cherche une sous-chaîne dans une chaîne / Searches for a substring in a string.
- `ft_strrchr`: Cherche la dernière occurrence d'un caractère / Searches for the last occurrence of a character.
- `ft_strtrim`: Supprime les caractères indésirables au début et à la fin / Trims unwanted characters from the beginning and end.
- `ft_substr`: Extrait une sous-chaîne / Extracts a substring.

---

### 🧠 `ft_mem/` — Fonctions de mémoire / Memory Functions

- `ft_bzero`: Remplit une zone mémoire de zéros / Zeroes a memory area.
- `ft_calloc`: Alloue et initialise une zone mémoire / Allocates and initializes a memory area.
- `ft_memchr`: Cherche un octet dans une zone mémoire / Searches for a byte in a memory area.
- `ft_memcmp`: Compare deux zones mémoire / Compares two memory areas.
- `ft_memcpy`: Copie une zone mémoire / Copies a memory area.
- `ft_memmove`: Copie de la mémoire avec gestion de chevauchement / Copies memory with overlap handling.
- `ft_memset`: Remplit une zone mémoire / Fills a memory area.
- `ft_free_array`: Libère un tableau de chaînes / Frees an array of strings.

---

### 🔁 `ft_to/` — Fonctions de conversion / Conversion Functions

- `ft_atoi`: Convertit une chaîne en entier / Converts a string to an integer.
- `ft_atol`: Convertit une chaîne en entier long / Converts a string to a long integer.
- `ft_itoa`: Convertit un entier en chaîne / Converts an integer to a string.
- `ft_usitoa`: Convertit un entier non signé en chaîne / Converts an unsigned integer to a string.
- `ft_lst_to_strtab`: Convertit une liste en un tableau de chaînes / Converts a list to an array of strings.
- `ft_toupper`: Convertit une lettre minuscule en majuscule / Converts lowercase to uppercase.
- `ft_tolower`: Convertit une lettre majuscule en minuscule / Converts uppercase to lowercase.

---

### 🖨️ `ft_put/` — Fonctions d'affichage / Display Functions

- `ft_putchar`: Affiche un caractère / Displays a character to stdout.
- `ft_putchar_fd`: Affiche un caractère sur un descripteur de fichier donné / Displays a character to a given file descriptor.
- `ft_putstr`: Affiche une chaîne / Displays a string.
- `ft_putstr_fd`: Affiche une chaîne sur un descripteur de fichier donné / Displays a string to a given file descriptor.
- `ft_putendl_fd`: Affiche une chaîne suivie d'un saut de ligne / Displays a string followed by a newline.
- `ft_putnbr_fd`: Affiche un entier / Displays an integer.

---

### 📦 `ft_lst/` — Fonctions sur les listes chaînées / Linked List Functions

- `ft_lstnew`: Crée un nouvel élément / Creates a new element.
- `ft_lstadd_front`: Ajoute un élément au début / Adds an element to the front.
- `ft_lstadd_back`: Ajoute un élément à la fin / Adds an element to the back.
- `ft_lstsize`: Retourne la taille de la liste / Returns the size of the list.
- `ft_lstlast`: Retourne le dernier élément / Returns the last element.
- `ft_lstdelone`: Supprime un élément / Deletes an element.
- `ft_lstclear`: Supprime la liste entière / Deletes the entire list.
- `ft_lstiter`: Applique une fonction à chaque élément / Applies a function to each element.
- `ft_lstmap`: Crée une nouvelle liste en appliquant une fonction / Creates a new list by applying a function.

---

### 🧩 `ft_other/` — Divers / Miscellaneous

- `get_next_line`: Lit une ligne depuis un descripteur de fichier / Reads a line from a file descriptor.
- `ft_printf`: Affichage formaté (implémentation personnalisée de printf) / Formatted output (custom implementation of printf).
- `ft_printfbis`: Partie complémentaire utilisée par `ft_printf` / Complementary part used by `ft_printf`.

---

## ⚙️ Compilation

```bash
make        # Compile the library
make clean  # Delete object files
make fclean # Delete object files + libft.a
make re     # Recompile everything

---

Le make génère libft.a, une bibliothèque statique que vous pouvez inclure dans vos projets.

The make command generates libft.a, a static library that you can include in your projects.
👨‍💻 Auteur / Author

    Nico-Mar42 sur GitHub / GitHub

📄 Licence / License

Ce projet est éducatif, dans le cadre du programme de l'école 42. Il peut être utilisé et modifié librement à des fins pédagogiques.

This project is educational, part of the 42 curriculum. It is freely usable and modifiable for learning purposes.