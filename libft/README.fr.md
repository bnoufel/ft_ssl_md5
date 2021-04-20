# Libft

Le projet libft reprend le concept du D06 de la piscine, à savoir vous faire écrire une bibliothèque de fonctions utiles que vous pourrez ensuite utiliser dans la vaste majorité de vos projets de C cette année et ainsi vous faire gagner beaucoup de temps.

Ce projet vous demande d’écrire beaucoup de code que vous avez déja réalisé pendant la piscine, ce qui en fait un excellent moment pour faire le point sur votre avancement.

### Compiler ft_printf
`make FT_PRINTF=true`

### Compiler avec le mode debug
`make DEBUG=true`

## Fonctions

### Fonction de caratère

| nom | man |
| ---- | ---- |
| [ft_charcatindex](srcs/char/ft_charcatindex.c) | Place un caractère à un index défini suivi d'un `\0`. | 
| [ft_isalnum](srcs/char/ft_isalnum.c) | Vérifie si le caractère est alphanumérique. |
| [ft_isalpha](srcs/char/ft_isalpha.c) | Vérifie si le caractère est alphabétique. |
| [ft_isascii](srcs/char/ft_isascii.c) | Vérifie si le caractère est dans la table ascii. |
| [ft_isblank](srcs/char/ft_isblank.c) | Vérifie si le caractère est un espace ou une tabulation. |
| [ft_iscntrl](srcs/char/ft_iscntrl.c) | Vérifie si le caractère est non imprimable. |
| [ft_isdigit](srcs/char/ft_isdigit.c) | Vérifie si le caractère est numérique. |
| [ft_isgraph](srcs/char/ft_isgraph.c) | Vérifie si le caractère est imprimable (espace non inclu). |
| [ft_islower](srcs/char/ft_islower.c) | Vérifie si le caractère est une minuscule. |
| [ft_isprint](srcs/char/ft_isprint.c) | Vérifie si le caractère est imprimable (espace inclu). |
| [ft_isspace](srcs/char/ft_isspace.c) | Vérifie si le caractère est un caractère d'espacement. |
| [ft_isupper](srcs/char/ft_isupper.c) | Vérifie si le caractère est une majuscule. |
| [ft_isxdigit](srcs/char/ft_isxdigit.c) | Vérifie si le caractère fait partie d'une base héxadécimale. |
| [ft_tolower](srcs/char/ft_tolower.c) | Converti le caractère en minuscule s'il est en majuscule. |
| [ft_toupper](srcs/char/ft_toupper.c) | Converti le caractère en majuscule s'il est en minuscule. |

### Fonction de conversion

| nom | man |
| ---- | ---- |
| [ft_llonglen_base](srcs/conversion/llong/ft_llonglen_base.c) | Calcule la longeur d'un long long. |
| [ft_ullonglen_base](srcs/conversion/ullong/ft_ullonglen_base.c) | Calcule la longeur d'un unsigned long long. |
| [ft_atos](srcs/conversion/short/ft_atos.c) | Converti une chaîne de caractères en short. |
| [ft_atos_base](srcs/conversion/short/ft_atos_base.c) | Converti une chaîne de caractères en short avec la base mise en paramètre. |
| [ft_stoa](srcs/conversion/short/ft_stoa.c) | Converti un short en une chaîne de caractères allouée. |
| [ft_stoa_base](srcs/conversion/short/ft_stoa_base.c) | Converti un short en une chaîne de caractères allouée avec la base mise en paramètre. |
| [ft_stoa_base_no_malloc](srcs/conversion/short/ft_stoa_base_no_malloc.c) | Converti un short en une chaîne de caractères non allouée avec une base mise en paramètre. |
| [ft_stoa_no_malloc](srcs/conversion/short/ft_stoa_no_malloc.c) | Converti un short en une chaîne de caractères non allouée. |
| [ft_atous](srcs/conversion/ushort/ft_atous.c) | Converti une chaîne de caractères en un unsigned short. |
| [ft_atous_base](srcs/conversion/ushort/ft_atous_base.c) | Converti une chaîne de caractères en un unsigned short avec une base mise en paramètre. |
| [ft_ustoa](srcs/conversion/ushort/ft_ustoa.c) | Converti un unsigned short en une chaîne de caractères allouée. |
| [ft_ustoa_base](srcs/conversion/ushort/ft_ustoa_base.c) | Converti un unsigned short en une chaîne de caractères allouée avec une base mise en paramètre. |
| [ft_ustoa_base_no_malloc](srcs/conversion/ushort/ft_ustoa_base_no_malloc.c) | Converti un unsigned short en une chaîne de caractères non allouée avec une base mise en paramètre. |
| [ft_ustoa_no_malloc](srcs/conversion/ushort/ft_ustoa_no_malloc.c) | Converti un unsigned short en une chaîne de caractères non allouée. |
| [ft_atoi](srcs/conversion/int/ft_atoi.c) | Converti une chaîne de caractères en int. |
| [ft_atoi_base](srcs/conversion/int/ft_atoi_base.c) | Converti une chaîne de caractères en int avec une base mise en paramètre. |
| [ft_itoa](srcs/conversion/int/ft_itoa.c) | Converti un int en une chaîne de caractères allouée. |
| [ft_itoa_base](srcs/conversion/int/ft_itoa_base.c) | Converti un int en une chaîne de caractères allouée avec une base mise en paramètre. |
| [ft_itoa_base_no_malloc](srcs/conversion/int/ft_itoa_base_no_malloc.c) | Converti un int en une chaîne de caractères non allouée avec une base mise en paramètre. |
| [ft_itoa_no_malloc](srcs/conversion/int/ft_itoa_no_malloc.c) | Converti un int en une chaîne de caractères non allouée. |
| [ft_atou](srcs/conversion/uint/ft_atou.c) | Converti une chaîne de caractères en unsigned int. |
| [ft_atou_base](srcs/conversion/uint/ft_atou_base.c) | Converti une chaîne de caractères en unsigned int avec une base mise en paramètre. |
| [ft_utoa](srcs/conversion/uint/ft_utoa.c) | Converti un unsigned int en une chaîne de caractères allouée. |
| [ft_utoa_base](srcs/conversion/uint/ft_utoa_base.c) | Converti un unsigned int en une chaîne de caractères allouée avec une base mise en paramètre. |
| [ft_utoa_base_no_malloc](srcs/conversion/uint/ft_utoa_base_no_malloc.c) | Converti un unsigned int en une chaîne de caractères non allouée avec une base mise en paramètre. |
| [ft_utoa_no_malloc](srcs/conversion/uint/ft_utoa_no_malloc.c) | Converti un unsigned int en une chaîne de caractères non allouée. |
| [ft_atol](srcs/conversion/long/ft_atol.c) | Converti une chaîne de caractères en long. |
| [ft_atol_base](srcs/conversion/long/ft_atol_base.c) | Converti une chaîne de caractères en long avec une base mise en paramètre. |
| [ft_ltoa](srcs/conversion/long/ft_ltoa.c) | Converti un long en une chaîne de caractères allouée. |
| [ft_ltoa_base](srcs/conversion/long/ft_ltoa_base.c) | Converti un long en une chaîne de caractères allouée avec une base mise en paramètre. |
| [ft_ltoa_base_no_malloc](srcs/conversion/long/ft_ltoa_base_no_malloc.c) | Converti un long en une chaîne de caractères non allouée avec une base mise en paramètre. |
| [ft_ltoa_no_malloc](srcs/conversion/long/ft_ltoa_no_malloc.c) | Converti un long en une chaîne de caractères non allouée. |
| [ft_atoul](srcs/conversion/ulong/ft_atoul.c) | Converti une chaîne de caractères en unsigned long. |
| [ft_atoul_base](srcs/conversion/ulong/ft_atoul_base.c) | Converti une chaîne de caractères en unsigned long avec une base mise en paramètre. |
| [ft_ultoa](srcs/conversion/ulong/ft_ultoa.c) | Converti un unsigned long en une chaîne de caractères allouée. |
| [ft_ultoa_base](srcs/conversion/ulong/ft_ultoa_base.c) | Converti un unsigned long en une chaîne de caractères allouée avec une base mise en paramètre. |
| [ft_ultoa_base_no_malloc](srcs/conversion/ulong/ft_ultoa_base_no_malloc.c) | Converti un unsigned long en une chaîne de caractères non allouée avec une base mise en paramètre. |
| [ft_ultoa_no_malloc](srcs/conversion/ulong/ft_ultoa_no_malloc.c) | Converti un unsigned long en une chaîne de caractères non allouée. |
| [ft_atoll](srcs/conversion/llong/ft_atoll.c) | Converti une chaîne de caractères en long long. |
| [ft_atoll_base](srcs/conversion/llong/ft_atoll_base.c) | Converti une chaîne de caractères en long long avec une base mise en paramètre. |
| [ft_lltoa](srcs/conversion/llong/ft_lltoa.c) | Converti un long long en une chaîne de caractères allouée. |
| [ft_lltoa_base](srcs/conversion/llong/ft_lltoa_base.c) | Converti un long long en une chaîne de caractères allouée avec une base mise en paramètre. |
| [ft_lltoa_base_no_malloc](srcs/conversion/llong/ft_lltoa_base_no_malloc.c) | Converti un long long en une chaîne de caractères non allouée avec une base mise en paramètre. |
| [ft_lltoa_no_malloc](srcs/conversion/llong/ft_lltoa_no_malloc.c) | Converti un long long en une chaîne de caractères non allouée. |
| [ft_atoull](srcs/conversion/ullong/ft_atoull.c) | Converti une chaîne de caractères en unsigned long long. |
| [ft_atoull_base](srcs/conversion/ullong/ft_atoull_base.c) | Converti une chaîne de caractères en unsigned long long avec une base mise en paramètre. |
| [ft_ulltoa](srcs/conversion/ullong/ft_ulltoa.c) | Converti un unsigned long long en une chaîne de caractères allouée. |
| [ft_ulltoa_base](srcs/conversion/ullong/ft_ulltoa_base.c) | Converti un unsigned long long en une chaîne de caractères allouée avec une base mise en paramètre. |
| [ft_ulltoa_base_no_malloc](srcs/conversion/ullong/ft_ulltoa_base_no_malloc.c) | Converti un unsigned long long en une chaîne de caractères non allouée avec une base mise en paramètre. |
| [ft_ulltoa_no_malloc](srcs/conversion/ullong/ft_ulltoa_no_malloc.c) | Converti un unsigned long long en une chaîne de caractères non allouée. |


### ft_printf

| nom | man |
| ---- | ---- |
| [ft_printf](srcs/ft_printf/ft_printf.c) | Écrit la chaîne formatée sur la sortie standard. |
| [ft_asprintf](srcs/ft_printf/ft_asprintf.c) | Assigne à *ret la chaîne formatée en allouant une taille assez grande pour la contenir. |
| [ft_dprintf](srcs/ft_printf/ft_dprintf.c) | Écrit la chaîne formatée sur le file descriptor. |
| [ft_fprintf](srcs/ft_printf/ft_fprintf.c) | Écrit la chaîne formatée sur la sortie `stream`. |
| [ft_sprintf](srcs/ft_printf/ft_sprintf.c) | Remplit la chaîne formatée dans un buffer en paramètre. |
| [ft_snprintf](srcs/ft_printf/ft_snprintf.c) | Remplit la chaîne formatée dans un buffer en paramètre d'une taille donnée. |

### Fonction de mémoire

| nom | man |
| ---- | ---- |
| [ft_bzero](srcs/memory/ft_bzero.c) | Remplit de `\0` une zone mémoire d'une taille donnée. |
| [ft_calloc](srcs/memory/ft_calloc.c) | Alloue une nouvelle zone mémoire, destinée aux tableaux, réalise un ft_bzero dessus et retourne l'adresse de cette zone. |
| [ft_memalloc](srcs/memory/ft_memalloc.c) | Alloue une nouvelle zone mémoire, réalise un ft_bzero dessus et retourne l'adresse de cette zone. |
| [ft_memccpy](srcs/memory/ft_memccpy.c) | Copie une zone mémoire vers une destination. Jusqu'à ce que n octets soient copies ou que la valeur passée en paramètre soit trouvée.|
| [ft_memchr](srcs/memory/ft_memchr.c) | Cherche une valeur dans une zone mémoire en commencant du début. |
| [ft_memcmp](srcs/memory/ft_memcmp.c) | Compare deux zones mémoire. |
| [ft_memcpy](srcs/memory/ft_memcpy.c) | Copie une zone mémoire dans une autre. |
| [ft_memdel](srcs/memory/ft_memdel.c) | Libère une zone mémoire et la met à NULL. |
| [ft_memmem](srcs/memory/ft_memmem.c) | Cherche zone mémoire dans une autre. |
| [ft_memmove](srcs/memory/ft_memmove.c) | Déplace une zone mémoire dans une autre. |
| [ft_memrchr](srcs/memory/ft_memrchr.c) | Cherche un caractère dans une zone mémoire en commencant par la fin. |
| [ft_memset](srcs/memory/ft_memset.c) | Initialise une zone mémoire de taille donnée à la valeure mise en paramètre. |

### Fonction d'affichage

| nom | man |
| ---- | ---- |
| [ft_putchar](srcs/print/ft_putchar.c) | Affiche un caractère sur la sortie standard. |
| [ft_putchar_fd](srcs/print/ft_putchar_fd.c) | Affiche un caractère sur le file descriptor mit en paramètre. |
| [ft_putendl](srcs/print/ft_putendl.c) | Affiche une chaîne de caractères sur la sortie standard suivit d'un retour à la ligne. |
| [ft_putendl_fd](srcs/print/ft_putendl_fd.c) | Affiche une chaîne de caractères sur le file descriptor mit en paramètre suivit d'un retour à la ligne. |
| [ft_putnbr](srcs/print/ft_putnbr.c) | Affiche un nombre sur l'entrée standard. |
| [ft_putnbr_fd](srcs/print/ft_putnbr_fd.c) | Affiche un nombre sur le file descriptor mit en paramètre. |
| [ft_puts](srcs/print/ft_puts.c) | Affiche une chaîne de caractères sur le file descriptor mit en paramètre suivit d'un retour à la ligne. Affiche (null) si la chaîne n'existe pas et retourne un EOF. |
| [ft_putstr](srcs/print/ft_putstr.c) | Affiche une chaîne de caractères sur la sortie standard. |
| [ft_putstr_fd](srcs/print/ft_putstr_fd.c) | Affiche une chaîne de caractères sur le file descriptor mit en paramètre. |

### Fonction de string

| nom | man |
| ---- | ---- |
| [ft_split](srcs/string/ft_split.c) | Alloue et retourne un tableau de chaînes de caractères “fraiches” (toutes terminées par un `\0`) résultant de la découpe de s selon le caractère c. Si l’allocation échoue, la fonction retourne NULL. |
| [ft_str_is_alpha](srcs/string/ft_str_is_alpha.c) | Vérifie si chaque caractère est alphanumérique. |
| [ft_str_is_lowercase](srcs/string/ft_str_is_lowercase.c) | Vérifie si chaque caractère est en minuscule. |
| [ft_str_is_numeric](srcs/string/ft_str_is_numeric.c) | Vérifie si chaque caractère est numérique. |
| [ft_str_is_printable](srcs/string/ft_str_is_printable.c) | Vérifie si chaque caractère est imprimable. |
| [ft_str_is_uppercase](srcs/string/ft_str_is_uppercase.c) | Vérifie si chaque caractère est en majuscule. |
| [ft_strcasecmp](srcs/string/ft_strcasecmp.c) | Compare deux chaînes de caractère en étant insensible à la casse. |
| [ft_strcasestr](srcs/string/ft_strcasestr.c) | Recherche une chaîne de caractères dans une autre en étant insensible à la casse. |
| [ft_strcat](srcs/string/ft_strcat.c) | Concatène deux chaînes de caractère. |
| [ft_strchr](srcs/string/ft_strchr.c) | Cherche un caractère dans une chaîne de caractère. |
| [ft_strclr](srcs/string/ft_strclr.c) | Assigne la valeur '`\0` à tous les caractères de la chaîne passée en paramètre. |
| [ft_strcmp](srcs/string/ft_strcmp.c) | Compare lexicographiquement s1 et s2. Si les deux chaînes sont égales, la fonction retourne 0, ou -1 si s1 est inférieur à s2 sinon 1. |
| [ft_strcpy](srcs/string/ft_strcpy.c) | Copie la chaîne de caractère src dans dst. |
| [ft_strdel](srcs/string/ft_strdel.c) | Prend en paramètre l’adresse d’une chaîne de caractères qui doit être libérée avec free(3) et son pointeur mis à NULL. |
| [ft_strdup](srcs/string/ft_strdup.c) | Alloue une place suffisante pour copier la chaîne de caractère s1. Si l'allocation échoue la fonction revoie NULL. |
| [ft_strequ](srcs/string/ft_strequ.c) | Compare lexicographiquement s1 et s2. Si les deux chaînes sont égales, la fonction retourne 1, sinon 0. |
| [ft_striter](srcs/string/ft_striter.c) | Applique la fonction f à chaque caractère de la chaîne de caractères passée en paramètre. Chaque caractère est passé par adresse à la fonction f afin de pouvoir être modifié si nécessaire. |
| [ft_striteri](srcs/string/ft_striteri.c) | Applique la fonction f à chaque caractère de la chaîne de caractères passée en paramètre en précisant son index en premier argument. Chaque caractère est passé par adresse à la fonction f afin de pouvoir être modifié si nécessaire. |
| [ft_strjoin](srcs/string/ft_strjoin.c) | Alloue et retourne une chaîne de caractères “fraiche” terminée par un `\0` résultant de la concaténation de s1 et s2. Si l’allocation échoue, la fonction renvoie NULL. |
| [ft_strjoinfree](srcs/string/ft_strjoinfree.c) | Alloue et retourne une chaîne de caractères “fraiche” terminée par un `\0` résultant de la concaténation de s1 et s2 et libère la chaîne de caractère suivant `tofree`. Si l’allocation échoue, la fonction renvoie NULL. |
| [ft_strlcat](srcs/string/ft_strlcat.c) | Concatène des chaînes avec les mêmes paramètres d'entrée et résultats de sortie que ft_snprintf. |
| [ft_strlcpy](srcs/string/ft_strlcpy.c) | Copie des chaînes avec les mêmes paramètres d'entrée et résultats de sortie que ft_snprintf. |
| [ft_strlen](srcs/string/ft_strlen.c) | Retourne la longeur de la chaîne de caractère passée en paramètre. |
| [ft_strlen_c](srcs/string/ft_strlen_c.c) | Compte la longeur de la chaîne de caractère passée en paramètre jusqu'au caractère `c`. |
| [ft_strlowcase](srcs/string/ft_strlowcase.c) | Passe la chaîne de caractère en minuscule. |
| [ft_strmap](srcs/string/ft_strmap.c) | Applique la fonction f à chaque caractère de la chaîne de caractères passée en paramètre pour créer une nouvelle chaîne “fraiche” résultant des applications successives de f. |
| [ft_strmapi](srcs/string/ft_strmapi.c) | Applique la fonction f à chaque caractère de la chaîne de caractères passée en paramètre en précisant son index pour créer une nouvelle chaîne “fraiche” résultant des applications successives de f. |
| [ft_strncasecmp](srcs/string/ft_strncasecmp.c) | Compare lexicographiquement s1 et s2 d'une taille donnée en paramètre en ignorant la casse. Si les deux chaînes sont égales, la fonction retourne 0, ou -1 si s1 est inférieur à s2 sinon 1. |
| [ft_strncat](srcs/string/ft_strncat.c) | Concatène deux chaînes de caractère d'une taille passée en paramètre. |
| [ft_strncatindex](srcs/string/ft_strncatindex.c) | Concatène deux chaînes de caractère d'une taille passée en paramètre à partir d'un index donnée.  |
| [ft_strncmp](srcs/string/ft_strncmp.c) | Compare lexicographiquement s1 et s2 d'une taille donnée en paramètre. Si les deux chaînes sont égales, la fonction retourne 0, ou -1 si s1 est inférieur à s2 sinon 1. |
| [ft_strncpy](srcs/string/ft_strncpy.c) | Copie n caractères de src dans dst. |
| [ft_strndup](srcs/string/ft_strndup.c) | Alloue une taille donnée en paramètre et copie la chaîne de caractère s1. Si l'allocation échoue la fonction renvoie NULL. |
| [ft_strnequ](srcs/string/ft_strnequ.c) | Compare lexicographiquement s1 et s2 jusqu’à n caractères maximum ou bien qu’un `\0` ait été rencontré. Si les deux chaînes sont égales, la fonction retourne 1, sinon 0. |
| [ft_strnew](srcs/string/ft_strnew.c) | Alloue et retourne une chaîne de caractères initialisée à `\0`. Si l’allocation échoue, la fonction renvoie NULL. |
| [ft_strnlen](srcs/string/ft_strnlen.c) | Compte la longeur de la chaîne de caractère donnée jusqu'à une taille max passée en paramètre. |
| [ft_strnstr](srcs/string/ft_strnstr.c) | Recherche une chaîne de caractères d'une taille donnée en paramètre dans une autre et retourne son adresse. |
| [ft_strpbrk](srcs/string/ft_strpbrk.c) | Cherche un caractère d'un charset dans une chaîne de caractères et retourne son adresse, et NULL si aucune occurence n'est trouvée. |
| [ft_strrchr](srcs/string/ft_strrchr.c) | Recherche un caractère en commançant par la fin dans une chaîne et retourne son adresse. |
| [ft_strstr](srcs/string/ft_strstr.c) | Recherche une chaîne de caractères dans une autre et retourne son adresse. |
| [ft_strsub](srcs/string/ft_strsub.c) | Alloue et retourne la copie “fraiche” d’un tronçon de la chaîne de caractères passée en paramètre. Le tronçon commence à l’index start et à pour longueur len. Si start et len ne désignent pas un tronçon de chaîne valide, le comportement est indéterminé. Si l’allocation échoue, la fonction renvoie NULL. |
| [ft_strtrim](srcs/string/ft_strtrim.c) | Alloue et retourne une copie de la chaîne passée en paramètre sans les espaces blancs au debut et à la fin de cette chaîne. On considère comme espaces blancs les caractères ` `, `\n` et `\t`. Si s ne contient pas d’espaces blancs au début ou à la fin, la fonction renvoie une copie de s. Si l’allocation échoue, la fonction renvoie NULL. |
| [ft_strupcase](srcs/string/ft_strupcase.c) | Passe la chaîne de caractère en majuscule. |
| [ft_substr](srcs/string/ft_substr.c) | Alloue et retourne la copie “fraiche” d’un tronçon de la chaîne de caractères passée en paramètre. Le tronçon commence à l’index start et à pour longueur len. Si start et len ne désignent pas un tronçon de chaîne valide, le comportement est indéterminé. Si l’allocation échoue, la fonction renvoie NULL. |

### Fonction de tableau

| nom | man |
| ---- | ---- |
| [ft_tabdup](srcs/tab/ft_tabdup.c) | Crée une nouvelle copie alloué d'un tableau de chaîne de caratères. |
| [ft_tablen](srcs/tab/ft_tablen.c) | Retourne la taille d'un tableau de chaîne de caractères. |
| [ft_tabndup](srcs/tab/ft_tabndup.c) | Crée une nouvelle copie allouée d'un tableau de chaîne de caratères d'une taille définie en paramètre. |
| [ft_tabnew](srcs/tab/ft_tabnew.c) | Alloue un nouveau tableau de chaîne de caractères d'une taille définie en paramètre. |
| [ft_tabtostr](srcs/tab/ft_tabtostr.c) | Transforme un tableau de chaîne de caractères en une chaîne de caractères avec un espace entre chaque. |
| [ft_tabtostr_c](srcs/tab/ft_tabtostr_c.c) | Transforme un tableau de chaîne de caractères en une chaîne avec un caractère mit en paramètre entre chaque. |
