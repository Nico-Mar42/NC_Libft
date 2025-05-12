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