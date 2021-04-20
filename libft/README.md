# Libft

The libft project takes up the concept of the D06 of the swimming pool, to make you write a library of useful functions that you can then use in the vast majority of your C projects this year and save you a lot of time.

This project ask you to write a lot of code that you have already done during the pool, which makes it a great time to take stock of your progress.

### ft_printf compilation
`make FT_PRINTF=true`

### debug compilation
`make DEBUG=true`

## Function

### Char function

| name | man |
| ---- | ---- |
| [ft_charcatindex](srcs/char/ft_charcatindex.c) | Put a char into a buffer in an index and put a `\0`. | 
| [ft_isalnum](srcs/char/ft_isalnum.c) | Check for any character for which ft_isalpha or ft_isdigit is true. |
| [ft_isalpha](srcs/char/ft_isalpha.c) | Check for any character for which ft_isupper or ft_islower is true. |
| [ft_isascii](srcs/char/ft_isascii.c) | Check for an ASCII character. |
| [ft_isblank](srcs/char/ft_isblank.c) | Check for a space or tab character. |
| [ft_iscntrl](srcs/char/ft_iscntrl.c) | Check for any control character. |
| [ft_isdigit](srcs/char/ft_isdigit.c) | Check for a decimal digit character. |
| [ft_isgraph](srcs/char/ft_isgraph.c) | Check for any printing character except space |
| [ft_islower](srcs/char/ft_islower.c) | Check for any lower-case letters. |
| [ft_isprint](srcs/char/ft_isprint.c) | Check for any printing character, including space. |
| [ft_isspace](srcs/char/ft_isspace.c) | Check for the white-space characters. |
| [ft_isupper](srcs/char/ft_isupper.c) | Check tests for any upper-case letter. |
| [ft_isxdigit](srcs/char/ft_isxdigit.c) | Check tests for any hexadecimal-digit character. |
| [ft_tolower](srcs/char/ft_tolower.c) | Converts an upper-case letter to the corresponding lowercase letter. |
| [ft_toupper](srcs/char/ft_toupper.c) | Converts a lower-case letter to the corresponding uppercase letter. |

### Conversion functions

| nom | man |
| ---- | ---- |
| [ft_llonglen_base](srcs/conversion/llong/ft_llonglen_base.c) | Function calculate the length of a long long with a base. |
| [ft_ullonglen_base](srcs/conversion/llong/ft_llonglen_base.c) | Function calculate the length of a unsigned long long with a base. |
| [ft_atos](srcs/conversion/short/ft_atos.c) | Function converts the initial portion of the string pointed to by str to a short representation. |
| [ft_atos_base](srcs/conversion/short/ft_atos_base.c) | Function converts the initial portion of the string pointed to by str with a base to a short representation. |
| [ft_stoa](srcs/conversion/short/ft_stoa.c) | Function converts a short into a allocate string. |
| [ft_stoa_base](srcs/conversion/short/ft_stoa_base.c) | Function converts a short with a base into a allocate string. |
| [ft_stoa_base_no_malloc](srcs/conversion/short/ft_stoa_base_no_malloc.c) | Function converts a short with a base into buffer. |
| [ft_stoa_no_malloc](srcs/conversion/short/ft_stoa_no_malloc.c) | Function converts a short with into buffer. |
| [ft_atous](srcs/conversion/ushort/ft_atous.c) | Function converts the initial portion of the string pointed to by str to unsigned short representation. |
| [ft_atous_base](srcs/conversion/ushort/ft_atous_base.c) | Function converts the initial portion of the string pointed to by str with a base to unsigned short representation. |
| [ft_ustoa](srcs/conversion/ushort/ft_ustoa.c) | Function converts an unsigned short into a allocate string. |
| [ft_ustoa_base](srcs/conversion/ushort/ft_ustoa_base.c) | Function converts an unsigned short with a base into a allocate string. |
| [ft_ustoa_base_no_malloc](srcs/conversion/ushort/ft_ustoa_base_no_malloc.c) | Function converts an unsigned short with a base into buffer. |
| [ft_ustoa_no_malloc](srcs/conversion/ushort/ft_ustoa_no_malloc.c) | Function converts an unsigned short with into buffer. |
| [ft_atoi](srcs/conversion/int/ft_atoi.c) | Function converts the initial portion of the string pointed to by str to an int representation. |
| [ft_atoi_base](srcs/conversion/int/ft_atoi_base.c) | Function converts the initial portion of the string pointed to by str with a base to an int representation. |
| [ft_itoa](srcs/conversion/int/ft_itoa.c) | Function converts an int into a allocate string. |
| [ft_itoa_base](srcs/conversion/int/ft_itoa_base.c) | Function converts an int with a base into a allocate string. |
| [ft_itoa_base_no_malloc](srcs/conversion/int/ft_itoa_base_no_malloc.c) | Function converts an int with a base into buffer. |
| [ft_itoa_no_malloc](srcs/conversion/int/ft_itoa_no_malloc.c) | Function converts an int with into buffer. |
| [ft_atou](srcs/conversion/uint/ft_atou.c) | Function converts the initial portion of the string pointed to by str to an unsigned int representation. |
| [ft_atou_base](srcs/conversion/uint/ft_atou_base.c) | Function converts the initial portion of the string pointed to by str with a base to an unsigned int representation. |
| [ft_utoa](srcs/conversion/uint/ft_utoa.c) | Function converts an unsigned int into a allocate string. |
| [ft_utoa_base](srcs/conversion/uint/ft_utoa_base.c) | Function converts an unsigned int with a base into a allocate string. |
| [ft_utoa_base_no_malloc](srcs/conversion/uint/ft_utoa_base_no_malloc.c) | Function converts an unsigned int with a base into buffer. |
| [ft_utoa_no_malloc](srcs/conversion/uint/ft_utoa_no_malloc.c) | Function converts an unsigned int with into buffer. |
| [ft_atol](srcs/conversion/long/ft_atol.c) | Function converts the initial portion of the string pointed to by str to a long representation. |
| [ft_atol_base](srcs/conversion/long/ft_atol_base.c) | Function converts the initial portion of the string pointed to by str with a base to a long representation. |
| [ft_ltoa](srcs/conversion/long/ft_ltoa.c) | Function converts a long into a allocate string. |
| [ft_ltoa_base](srcs/conversion/long/ft_ltoa_base.c) | Function converts a long with a base into a allocate string. |
| [ft_ltoa_base_no_malloc](srcs/conversion/long/ft_ltoa_base_no_malloc.c) | Function converts a long with a base into buffer. |
| [ft_ltoa_no_malloc](srcs/conversion/long/ft_ltoa_no_malloc.c) | Function converts a long with into buffer. |
| [ft_atoul](srcs/conversion/ulong/ft_atoul.c) | Function converts the initial portion of the string pointed to by str to an unsigned long representation. |
| [ft_atoul_base](srcs/conversion/ulong/ft_atoul_base.c) | Function converts the initial portion of the string pointed to by str with a base to an unsigned long representation. |
| [ft_ultoa](srcs/conversion/ulong/ft_ultoa.c) | Function converts an unsigned long into a allocate string. |
| [ft_ultoa_base](srcs/conversion/ulong/ft_ultoa_base.c) | Function converts an unsigned long with a base into a allocate string. |
| [ft_ultoa_base_no_malloc](srcs/conversion/ulong/ft_ultoa_base_no_malloc.c) | Function converts an unsigned long with a base into buffer. |
| [ft_ultoa_no_malloc](srcs/conversion/ulong/ft_ultoa_no_malloc.c) | Function converts an unsigned long with into buffer. |
| [ft_atoll](srcs/conversion/llong/ft_atoll.c) | Function converts the initial portion of the string pointed to by str to a long long representation. |
| [ft_atoll_base](srcs/conversion/llong/ft_atoll_base.c) | Function converts the initial portion of the string pointed to by str with a base to a long long representation. |
| [ft_lltoa](srcs/conversion/llong/ft_lltoa.c) | Function converts a long long into a allocate string. |
| [ft_lltoa_base](srcs/conversion/llong/ft_lltoa_base.c) | Function converts a long long with a base into a allocate string. |
| [ft_lltoa_base_no_malloc](srcs/conversion/llong/ft_lltoa_base_no_malloc.c) | Function converts a long long with a base into buffer. |
| [ft_lltoa_no_malloc](srcs/conversion/llong/ft_lltoa_no_malloc.c) | Function converts a long long with into buffer. |
| [ft_atoull](srcs/conversion/ullong/ft_atoull.c) | Function converts the initial portion of the string pointed to by str to an unsigned long long representation. |
| [ft_atoull_base](srcs/conversion/ullong/ft_atoull_base.c) | Function converts the initial portion of the string pointed to by str with a base to an unsigned long long representation. |
| [ft_ulltoa](srcs/conversion/ullong/ft_ulltoa.c) | Function converts an unsigned long long into a allocate string. |
| [ft_ulltoa_base](srcs/conversion/ullong/ft_ulltoa_base.c) | Function converts an unsigned long long with a base into a allocate string. |
| [ft_ulltoa_base_no_malloc](srcs/conversion/ullong/ft_ulltoa_base_no_malloc.c) | Function converts an unsigned long long with a base into buffer. |
| [ft_ulltoa_no_malloc](srcs/conversion/ullong/ft_ulltoa_no_malloc.c) | Function converts an unsigned long long with into buffer. |

### ft_printf

| name | man |
| ---- | ---- |
| [ft_asprintf](srcs/ft_printf/ft_asprintf.c) | Function set *ret to be a pointer to a buffer sufficiently large to hold the formatted string. |
| [ft_dprintf](srcs/ft_printf/ft_dprintf.c) | Write output to the given file descriptor. |
| [ft_fprintf](srcs/ft_printf/ft_fprintf.c) | Write output to the given output stream. |
| [ft_printf](srcs/ft_printf/ft_printf.c) | Function write output to stdout. |
| [ft_snprintf](srcs/ft_printf/ft_snprintf.c) | Function will write at most size - 1 of the characters printed into the output string.  |
| [ft_sprintf](srcs/ft_printf/ft_sprintf.c) | Function effectively assume a size of INT_MAX + 1. |

### Memory function

| name | man |
| ---- | ---- |
| [ft_bzero](srcs/memory/ft_bzero.c) | Writes n zeroed bytes to the string s.  If n is zero, ft_bzero does nothing. |
| [ft_calloc](srcs/memory/ft_calloc.c) | Contiguously allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory.  The allocated memory is filled with bytes of value zero. |
| [ft_memalloc](srcs/memory/ft_memalloc.c) | Allocated memory and filled with bytes of value zero. |
| [ft_memccpy](srcs/memory/ft_memccpy.c) | Copies bytes from string src to string dst. |
| [ft_memchr](srcs/memory/ft_memchr.c) | Locates the first occurrence of c (converted to an unsigned char) in string s. |
| [ft_memcmp](srcs/memory/ft_memcmp.c) | Compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long. |
| [ft_memcpy](srcs/memory/ft_memcpy.c) | Copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined. |
| [ft_memdel](srcs/memory/ft_memdel.c) | Free a memory zone. |
| [ft_memmem](srcs/memory/ft_memmem.c) | Locates the first occurrence of the byte string little in the byte string big. |
| [ft_memmove](srcs/memory/ft_memmove.c) | Copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-destructive manner. |
| [ft_memrchr](srcs/memory/ft_memrchr.c) | Locates the first occurrence of c (converted to an unsigned char) in string s starting at the end. |
| [ft_memset](srcs/memory/ft_memset.c) | Writes len bytes of value c (converted to an unsigned char) to the string b. |

### Print Function

| name | man |
| ---- | ---- |
| [ft_putchar](srcs/print/ft_putchar.c) | Write a char. |
| [ft_putchar_fd](srcs/print/ft_putchar_fd.c) | Write a char to a file descriptor. |
| [ft_putendl](srcs/print/ft_putendl.c) | Write a string with a newline. |
| [ft_putendl_fd](srcs/print/ft_putendl_fd.c) | Write a string with a newline to a file descriptor. |
| [ft_putnbr](srcs/print/ft_putnbr.c) | Write a int. |
| [ft_putnbr_fd](srcs/print/ft_putnbr_fd.c) | Write a int to a file descriptor. |
| [ft_puts](srcs/print/ft_puts.c) | Write a string with a newline and return an EOF. |
| [ft_putstr](srcs/print/ft_putstr.c) | Write a string. |
| [ft_putstr_fd](srcs/print/ft_putstr_fd.c) | Write a string to a file descriptor. |

### String function

| name | man |
| ---- | ---- |
| [ft_split](srcs/string/ft_split.c) | Split a strings with the char c delimiter to a tab was allocate. |
| [ft_str_is_alpha](srcs/string/ft_str_is_alpha.c) | Check if any character are alphanumeric. |
| [ft_str_is_lowercase](srcs/string/ft_str_is_lowercase.c) | Check if any character are lowercase. |
| [ft_str_is_numeric](srcs/string/ft_str_is_numeric.c) | Check if any character are numeric. |
| [ft_str_is_printable](srcs/string/ft_str_is_printable.c) | Check if any character are printable. |
| [ft_str_is_uppercase](srcs/string/ft_str_is_uppercase.c) | Check if any character are uppercase. |
| [ft_strcasecmp](srcs/string/ft_strcasecmp.c) | Function lexicographically compare the null-terminated strings s1 and s2 with no case sensitive. |
| [ft_strcasestr](srcs/string/ft_strcasestr.c) | Function locates the first occurrence of the null-terminated string needle in the null-terminated string haystack with no case sensitive. |
| [ft_strcat](srcs/string/ft_strcat.c) | Function append a copy. of the null-terminated string s2 to the end of the null-terminated string s1, then add a terminating `\0`. |
| [ft_strchr](srcs/string/ft_strchr.c) | Function locates the first occurrence of c in string s. |
| [ft_strclr](srcs/string/ft_strclr.c) | Cleans by putting `\0`. |
| [ft_strcmp](srcs/string/ft_strcmp.c) | Function lexicographically compare the null-terminated strings s1 and s2. |
| [ft_strcpy](srcs/string/ft_strcpy.c) | Function copy the string src to dst. |
| [ft_strdel](srcs/string/ft_strdel.c) | Take a ptr in param to free and put NULL. |
| [ft_strdup](srcs/string/ft_strdup.c) | Function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it. |
| [ft_strequ](srcs/string/ft_strequ.c) | Function lexicographically compare the null-terminated strings s1 and s2. |
| [ft_striter](srcs/string/ft_striter.c) | Applies the function f to each character of the character string passed in parameter. |
| [ft_striteri](srcs/string/ft_striteri.c) | Applies the function f to each character in the character string passed as a parameter, specifying its index as the first argument.  |
| [ft_strjoin](srcs/string/ft_strjoin.c) | Allocate a new string of size s1 + s2 After that s1 was copy to the new allocate, and s2 was concatenate. |
| [ft_strjoinfree](srcs/string/ft_strjoinfree.c) | Allocate a new string of size s1 + s2 After that s1 was copy to the new allocate, and s2 was concatenate. And free s1 or s2 or both with param `tofree` |
| [ft_strlcat](srcs/string/ft_strlcat.c) | Concatenate strings with the same input parameters and output result as ft_snprintf. |
| [ft_strlcpy](srcs/string/ft_strlcpy.c) | Function copy strings with the same input parameters and output result as ft_snprintf.  |
| [ft_strlen](srcs/string/ft_strlen.c) | Function computes the length of the string s. |
| [ft_strlen_c](srcs/string/ft_strlen_c.c) | Function computes the length of the string s until char c. |
| [ft_strlowcase](srcs/string/ft_strlowcase.c) | Put uppercase to lowercase on place. |
| [ft_strmap](srcs/string/ft_strmap.c) | Apply the function f to each character in the character string passed as a parameter to create a new “fresh” string resulting from the successive applications of f. |
| [ft_strmapi](srcs/string/ft_strmapi.c) | Apply the function f to each character of the character string passed in parameter by specifying its index to create a new “fresh” string resulting from the successive applications of f. |
| [ft_strncasecmp](srcs/string/ft_strncasecmp.c) | Function lexicographically compare the null-terminated strings s1 and s2 with no case sensitive. |
| [ft_strncat](srcs/string/ft_strncat.c) | Function append a copy of the null-terminated string s2 to the end of the null-terminated str s1, then add a terminating `\0`. |
| [ft_strncatindex](srcs/string/ft_strncatindex.c) | Function start to index in paramater and append a copy of the null-terminated string s2 to the end of the null-terminated str s1, then add a terminating `\0`. |
| [ft_strncmp](srcs/string/ft_strncmp.c) | Function compares not more than n characters. |
| [ft_strncpy](srcs/string/ft_strncpy.c) | Function copy at most len characters from src into dst. |
| [ft_strndup](srcs/string/ft_strndup.c) | Function copies at most n characters from the string s1 always NULL terminating the copied string. |
| [ft_strnequ](srcs/string/ft_strnequ.c) | Function lexicographically compare the null-terminated strings s1 and s2 of size n. |
| [ft_strnew](srcs/string/ft_strnew.c) | Allocate a new string of size `size`. |
| [ft_strnlen](srcs/string/ft_strnlen.c) | Function attempts to compute the length of s, but never scans beyond the first maxlen bytes of s. |
| [ft_strnstr](srcs/string/ft_strnstr.c) | Function locates the first occurrence of the null-terminated string needle in the null-terminated string haystack with length len. |
| [ft_strpbrk](srcs/string/ft_strpbrk.c) | Function locates in the null-terminated string s the first occurrence of any character in the string charset and returns a pointer to this character.  If no characters from charset occur anywhere in s ft_strpbrk returns NULL.|
| [ft_strrchr](srcs/string/ft_strrchr.c) | Function locates the first occurrence of c (converted to an unsigned char) in string s. |
| [ft_strstr](srcs/string/ft_strstr.c) | Function locates the first occurrence of the null-terminated string needle in the null-terminated string haystack. |
| [ft_strsub](srcs/string/ft_strsub.c) | Allocate a new string of size n.	After that s1 was copy to the new allocate at start 'start', and copy n char. |
| [ft_strtrim](srcs/string/ft_strtrim.c) | Remove whitespaces (`\n`, `\t`, ` `) at start and and end of string s1. |
| [ft_strupcase](srcs/string/ft_strupcase.c) | Function converts a lower-case letter to the corresponding upper-case letter. |
| [ft_substr](srcs/string/ft_substr.c) | Allocate a new string of size n. After that s1 was copy to the new allocate at start 'start', and copy n char. |

### Tab function

| name | man |
| ---- | ---- |
| [ft_tabdup](srcs/tab/ft_tabdup.c) | Function allocates sufficient memory for a copy of the tab s1, does the copy, and returns a pointer to it. |
| [ft_tablen](srcs/tab/ft_tablen.c) | Function computes the length of the tab s. |
| [ft_tabndup](srcs/tab/ft_tabndup.c) | Function allocates size n memory for a copy of the tab s1, does the copy, and returns a pointer to it. |
| [ft_tabnew](srcs/tab/ft_tabnew.c) | Function allocate a new tab of size `size`. |
| [ft_tabtostr](srcs/tab/ft_tabtostr.c) | Transform an array into a string with a space in separation. |
| [ft_tabtostr_c](srcs/tab/ft_tabtostr_c.c) | Transform an array into a string with a char `c` in separation. |

