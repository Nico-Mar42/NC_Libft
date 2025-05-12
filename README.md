# NC_Libft

**NC_Libft** est une réimplémentation enrichie de la `libft` du cursus 42, écrite en C. Elle regroupe de nombreuses fonctions utilitaires destinées à faciliter la gestion des chaînes, de la mémoire, des conversions, des listes chaînées, et bien plus.

## 📁 Arborescence

Les fonctions sont organisées par catégories dans le dossier `libft/src` :
- `ft_is/` — Tests de caractères
- `ft_str/` — Fonctions de manipulation de chaînes
- `ft_mem/` — Fonctions mémoire
- `ft_to/` — Conversions
- `ft_put/` — Fonctions d’affichage
- `ft_lst/` — Fonctions de gestion de listes chaînées
- `ft_other/` — Divers (printf, get_next_line...)

---

## 🧠 Détails des Fonctions

### 🔤 `ft_is/` — Tests de caractères

- `ft_isalpha` : Vérifie si un caractère est une lettre.
- `ft_isdigit` : Vérifie si un caractère est un chiffre.
- `ft_isalnum` : Vérifie si un caractère est alphanumérique.
- `ft_isascii` : Vérifie si un caractère est dans la table ASCII.
- `ft_isprint` : Vérifie si un caractère est imprimable.
- `ft_is_in_set` : Vérifie si un caractère est présent dans un ensemble.
- `ft_iswhitespace` : Vérifie si un caractère est un espace blanc.

---

### 🧵 `ft_str/` — Fonctions sur chaînes

- `ft_split` : Découpe une chaîne selon un délimiteur.
- `ft_strchr` : Recherche un caractère dans une chaîne.
- `ft_strdup` : Duplique une chaîne.
- `ft_striteri` : Applique une fonction à chaque caractère (avec index).
- `ft_strjoin` : Concatène deux chaînes.
- `ft_strlcat` : Concatène avec taille limitée.
- `ft_strlcpy` : Copie avec taille limitée.
- `ft_strldup` : Duplique une chaîne avec taille limitée.
- `ft_strlen` : Retourne la longueur d’une chaîne.
- `ft_strlen_char` : Longueur jusqu’à un caractère spécifique.
- `ft_strmapi` : Applique une fonction à chaque caractère (retourne une nouvelle chaîne).
- `ft_strncmp` : Compare deux chaînes sur `n` caractères.
- `ft_strnstr` : Recherche une sous-chaîne dans une autre.
- `ft_strrchr` : Recherche la dernière occurrence d’un caractère.
- `ft_strtrim` : Supprime les caractères en trop en début et fin.
- `ft_substr` : Extrait une sous-chaîne.

---

### 🧠 `ft_mem/` — Fonctions mémoire

- `ft_bzero` : Met une zone mémoire à zéro.
- `ft_calloc` : Alloue et initialise une zone mémoire.
- `ft_memchr` : Recherche un octet dans une zone mémoire.
- `ft_memcmp` : Compare deux zones mémoire.
- `ft_memcpy` : Copie une zone mémoire.
- `ft_memmove` : Copie mémoire avec gestion du chevauchement.
- `ft_memset` : Remplit une zone mémoire.
- `ft_free_array` : Libère un tableau de chaînes.

---

### 🔁 `ft_to/` — Fonctions de conversion

- `ft_atoi` : Convertit une chaîne en entier.
- `ft_atol` : Convertit une chaîne en long.
- `ft_itoa` : Convertit un entier en chaîne.
- `ft_usitoa` : Convertit un entier non signé en chaîne.
- `ft_lst_to_strtab` : Convertit une liste en tableau de chaînes.
- `ft_toupper` : Minuscule → Majuscule.
- `ft_tolower` : Majuscule → Minuscule.

---

### 🖨️ `ft_put/` — Fonctions d’affichage

- `ft_putchar` : Affiche un caractère sur stdout.
- `ft_putchar_fd` : Affiche un caractère sur un descripteur donné.
- `ft_putstr` : Affiche une chaîne.
- `ft_putstr_fd` : Affiche une chaîne sur un descripteur donné.
- `ft_putendl_fd` : Affiche une chaîne suivie d’un retour à la ligne.
- `ft_putnbr_fd` : Affiche un entier.

---

### 📦 `ft_lst/` — Listes chaînées

- `ft_lstnew` : Crée un nouvel élément.
- `ft_lstadd_front` : Ajoute un élément en tête.
- `ft_lstadd_back` : Ajoute un élément en queue.
- `ft_lstsize` : Taille de la liste.
- `ft_lstlast` : Dernier élément.
- `ft_lstdelone` : Supprime un élément.
- `ft_lstclear` : Supprime toute la liste.
- `ft_lstiter` : Applique une fonction à chaque élément.
- `ft_lstmap` : Crée une nouvelle liste en appliquant une fonction.

---

### 🧩 `ft_other/` — Divers

- `get_next_line` : Lit une ligne depuis un descripteur.
- `ft_printf` : Affichage formaté (implémentation personnalisée de printf).
- `ft_printfbis` : Partie complémentaire utilisée par `ft_printf`.

---

## ⚙️ Compilation

```bash
make        # Compile la bibliothèque
make clean  # Supprime les fichiers objets
make fclean # Supprime les objets + libft.a
make re     # Recompile tout
# NC_Libft

**NC_Libft** est une réimplémentation enrichie de la `libft` du cursus 42, écrite en C. Elle regroupe de nombreuses fonctions utilitaires destinées à faciliter la gestion des chaînes, de la mémoire, des conversions, des listes chaînées, et bien plus.

## 📁 Arborescence

Les fonctions sont organisées par catégories dans le dossier `libft/src` :
- `ft_is/` — Tests de caractères
- `ft_str/` — Fonctions de manipulation de chaînes
- `ft_mem/` — Fonctions mémoire
- `ft_to/` — Conversions
- `ft_put/` — Fonctions d’affichage
- `ft_lst/` — Fonctions de gestion de listes chaînées
- `ft_other/` — Divers (printf, get_next_line...)

---

## 🧠 Détails des Fonctions

### 🔤 `ft_is/` — Tests de caractères

- `ft_isalpha` : Vérifie si un caractère est une lettre.
- `ft_isdigit` : Vérifie si un caractère est un chiffre.
- `ft_isalnum` : Vérifie si un caractère est alphanumérique.
- `ft_isascii` : Vérifie si un caractère est dans la table ASCII.
- `ft_isprint` : Vérifie si un caractère est imprimable.
- `ft_is_in_set` : Vérifie si un caractère est présent dans un ensemble.
- `ft_iswhitespace` : Vérifie si un caractère est un espace blanc.

---

### 🧵 `ft_str/` — Fonctions sur chaînes

- `ft_split` : Découpe une chaîne selon un délimiteur.
- `ft_strchr` : Recherche un caractère dans une chaîne.
- `ft_strdup` : Duplique une chaîne.
- `ft_striteri` : Applique une fonction à chaque caractère (avec index).
- `ft_strjoin` : Concatène deux chaînes.
- `ft_strlcat` : Concatène avec taille limitée.
- `ft_strlcpy` : Copie avec taille limitée.
- `ft_strldup` : Duplique une chaîne avec taille limitée.
- `ft_strlen` : Retourne la longueur d’une chaîne.
- `ft_strlen_char` : Longueur jusqu’à un caractère spécifique.
- `ft_strmapi` : Applique une fonction à chaque caractère (retourne une nouvelle chaîne).
- `ft_strncmp` : Compare deux chaînes sur `n` caractères.
- `ft_strnstr` : Recherche une sous-chaîne dans une autre.
- `ft_strrchr` : Recherche la dernière occurrence d’un caractère.
- `ft_strtrim` : Supprime les caractères en trop en début et fin.
- `ft_substr` : Extrait une sous-chaîne.

---

### 🧠 `ft_mem/` — Fonctions mémoire

- `ft_bzero` : Met une zone mémoire à zéro.
- `ft_calloc` : Alloue et initialise une zone mémoire.
- `ft_memchr` : Recherche un octet dans une zone mémoire.
- `ft_memcmp` : Compare deux zones mémoire.
- `ft_memcpy` : Copie une zone mémoire.
- `ft_memmove` : Copie mémoire avec gestion du chevauchement.
- `ft_memset` : Remplit une zone mémoire.
- `ft_free_array` : Libère un tableau de chaînes.

---

### 🔁 `ft_to/` — Fonctions de conversion

- `ft_atoi` : Convertit une chaîne en entier.
- `ft_atol` : Convertit une chaîne en long.
- `ft_itoa` : Convertit un entier en chaîne.
- `ft_usitoa` : Convertit un entier non signé en chaîne.
- `ft_lst_to_strtab` : Convertit une liste en tableau de chaînes.
- `ft_toupper` : Minuscule → Majuscule.
- `ft_tolower` : Majuscule → Minuscule.

---

### 🖨️ `ft_put/` — Fonctions d’affichage

- `ft_putchar` : Affiche un caractère sur stdout.
- `ft_putchar_fd` : Affiche un caractère sur un descripteur donné.
- `ft_putstr` : Affiche une chaîne.
- `ft_putstr_fd` : Affiche une chaîne sur un descripteur donné.
- `ft_putendl_fd` : Affiche une chaîne suivie d’un retour à la ligne.
- `ft_putnbr_fd` : Affiche un entier.

---

### 📦 `ft_lst/` — Listes chaînées

- `ft_lstnew` : Crée un nouvel élément.
- `ft_lstadd_front` : Ajoute un élément en tête.
- `ft_lstadd_back` : Ajoute un élément en queue.
- `ft_lstsize` : Taille de la liste.
- `ft_lstlast` : Dernier élément.
- `ft_lstdelone` : Supprime un élément.
- `ft_lstclear` : Supprime toute la liste.
- `ft_lstiter` : Applique une fonction à chaque élément.
- `ft_lstmap` : Crée une nouvelle liste en appliquant une fonction.

---

### 🧩 `ft_other/` — Divers

- `get_next_line` : Lit une ligne depuis un descripteur.
- `ft_printf` : Affichage formaté (implémentation personnalisée de printf).
- `ft_printfbis` : Partie complémentaire utilisée par `ft_printf`.

---

## ⚙️ Compilation

```bash
make        # Compile la bibliothèque
make clean  # Supprime les fichiers objets
make fclean # Supprime les objets + libft.a
make re     # Recompile tout

La commande make génère libft.a, une bibliothèque statique que vous pouvez inclure dans vos projets.
👨‍💻 Auteur

Nico-Mar42 sur GitHub

📄 Licence

Ce projet est à but pédagogique, issu du cursus 42. Utilisable et modifiable librement pour l’apprentissage.


Now, let's move on to the English version of the README for those who prefer documentation in English.


# NC_Libft

**NC_Libft** is an enriched reimplementation of the 42 `libft`, written in C. It includes a variety of utility functions for managing strings, memory, conversions, linked lists, and more.

## 📁 Directory Structure

Functions are organized into categories in the `libft/src` directory:
- `ft_is/` — Character tests
- `ft_str/` — String manipulation functions
- `ft_mem/` — Memory functions
- `ft_to/` — Conversions
- `ft_put/` — Display functions
- `ft_lst/` — Linked list functions
- `ft_other/` — Miscellaneous (printf, get_next_line...)

---

## 🧠 Function Details

### 🔤 `ft_is/` — Character Tests

- `ft_isalpha`: Checks if a character is an alphabet letter.
- `ft_isdigit`: Checks if a character is a digit.
- `ft_isalnum`: Checks if a character is alphanumeric.
- `ft_isascii`: Checks if a character is in the ASCII table.
- `ft_isprint`: Checks if a character is printable.
- `ft_is_in_set`: Checks if a character is present in a set.
- `ft_iswhitespace`: Checks if a character is a whitespace.

---

### 🧵 `ft_str/` — String Functions

- `ft_split`: Splits a string by a delimiter.
- `ft_strchr`: Searches for a character in a string.
- `ft_strdup`: Duplicates a string.
- `ft_striteri`: Applies a function to each character (with index).
- `ft_strjoin`: Joins two strings.
- `ft_strlcat`: Concatenates with limited size.
- `ft_strlcpy`: Copies with limited size.
- `ft_strldup`: Duplicates a string with a limited size.
- `ft_strlen`: Returns the length of a string.
- `ft_strlen_char`: Length up to a specific character.
- `ft_strmapi`: Applies a function to each character (returns a new string).
- `ft_strncmp`: Compares two strings for `n` characters.
- `ft_strnstr`: Searches for a substring in a string.
- `ft_strrchr`: Searches for the last occurrence of a character.
- `ft_strtrim`: Trims unwanted characters from the beginning and end.
- `ft_substr`: Extracts a substring.

---

### 🧠 `ft_mem/` — Memory Functions

- `ft_bzero`: Zeroes a memory area.
- `ft_calloc`: Allocates and initializes a memory area.
- `ft_memchr`: Searches for a byte in a memory area.
- `ft_memcmp`: Compares two memory areas.
- `ft_memcpy`: Copies a memory area.
- `ft_memmove`: Copies memory with overlap handling.
- `ft_memset`: Fills a memory area.
- `ft_free_array`: Frees an array of strings.

---

### 🔁 `ft_to/` — Conversion Functions

- `ft_atoi`: Converts a string to an integer.
- `ft_atol`: Converts a string to a long integer.
- `ft_itoa`: Converts an integer to a string.
- `ft_usitoa`: Converts an unsigned integer to a string.
- `ft_lst_to_strtab`: Converts a list to an array of strings.
- `ft_toupper`: Converts lowercase to uppercase.
- `ft_tolower`: Converts uppercase to lowercase.

---

### 🖨️ `ft_put/` — Display Functions

- `ft_putchar`: Displays a character to stdout.
- `ft_putchar_fd`: Displays a character to a given file descriptor.
- `ft_putstr`: Displays a string.
- `ft_putstr_fd`: Displays a string to a given file descriptor.
- `ft_putendl_fd`: Displays a string followed by a newline.
- `ft_putnbr_fd`: Displays an integer.

---

### 📦 `ft_lst/` — Linked List Functions

- `ft_lstnew`: Creates a new element.
- `ft_lstadd_front`: Adds an element to the front.
- `ft_lstadd_back`: Adds an element to the back.
- `ft_lstsize`: Returns the size of the list.
- `ft_lstlast`: Returns the last element.
- `ft_lstdelone`: Deletes an element.
- `ft_lstclear`: Deletes the entire list.
- `ft_lstiter`: Applies a function to each element.
- `ft_lstmap`: Creates a new list by applying a function.

---

### 🧩 `ft_other/` — Miscellaneous

- `get_next_line`: Reads a line from a file descriptor.
- `ft_printf`: Formatted output (custom implementation of printf).
- `ft_printfbis`: Complementary part used by `ft_printf`.

---

## ⚙️ Compilation

```bash
make        # Compiles the library
make clean  # Deletes object files
make fclean # Deletes object files + libft.a
make re     # Recompiles everything
