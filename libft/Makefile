NAME				=	libftprintf.a

CC						= 	$(shell which gcc) $(CFLAGS)
ifeq ($(DEBUG), true)
	GCC_DEBUG			= 	-g3
endif
CFLAGS					= 	-Wall 					\
							-Wextra					\
							-Werror					\
							$(GCC_DEBUG)			\

CPPFLAGS				=	-I$(INC_DIR)			\
							-I$(FT_PRINTF_INC_DIR)	\

SRC_DIR					=	srcs
INC_DIR					=	includes
OBJ_DIR					=	objects

HEADER					=	char.h					\
							conv.h					\
							libft.h					\
							mem.h					\
							print.h					\
							str.h					\
							tab.h					\
							ft_printf.h				\

FT_PRINTF_INC_DIR		=	$(INC_DIR)/$(FT_PRINTF_SUB_DIR)
FT_PRINTF_HEADER		=	internal.h				\

HEADERS					=	$(addprefix $(INC_DIR)/, $(HEADER))	\
							$(addprefix $(FT_PRINTF_INC_DIR)/, $(FT_PRINTF_HEADER))

################################################
#################### COLORS ####################
################################################

RED						=	"\033[31;1m"
GREEN					=	"\033[32;1m"
RESET					=	"\033[0m"

################################################
##################### Char #####################
################################################

CHAR_DIR				=	char

CHAR_SRC				=	ft_charcatindex.c		\
							ft_isalnum.c			\
							ft_isalpha.c			\
							ft_isascii.c			\
							ft_isblank.c			\
							ft_iscntrl.c			\
							ft_isdigit.c			\
							ft_isgraph.c			\
							ft_islower.c			\
							ft_isprint.c			\
							ft_isspace.c			\
							ft_isupper.c			\
							ft_isxdigit.c			\
							ft_tolower.c			\
							ft_toupper.c			\


CHAR_SRCS				=	$(addprefix $(CHAR_DIR)/, $(CHAR_SRC))

################################################
##################### GNL ######################
################################################

GNL_DIR				=	get_next_line

GNL_SRC				=	get_next_line.c


GNL_SRCS				=	$(addprefix $(GNL_DIR)/, $(GNL_SRC))

################################################
#################### Conv ######################
################################################

CONV_DIR				=	conversion

################################################
################### SHORT ######################
################################################

CONV_DIR_SHORT			=	$(CONV_DIR)/short

CONV_SRC_SHORT			=	ft_atos.c					\
							ft_atos_base.c				\
							ft_stoa.c					\
							ft_stoa_no_malloc.c			\
							ft_stoa_base.c				\
							ft_stoa_base_no_malloc.c	\

CONV_SRCS_SHORT			=	$(addprefix $(CONV_DIR_SHORT)/, $(CONV_SRC_SHORT))

################################################
################## UNSIGNED ####################
################### SHORT ######################
################################################

CONV_DIR_USHORT			=	$(CONV_DIR)/ushort

CONV_SRC_USHORT			=	ft_atous.c					\
							ft_atous_base.c				\
							ft_ustoa.c					\
							ft_ustoa_no_malloc.c		\
							ft_ustoa_base.c				\
							ft_ustoa_base_no_malloc.c	\

CONV_SRCS_USHORT		=	$(addprefix $(CONV_DIR_USHORT)/, $(CONV_SRC_USHORT))

################################################
#################### INT #######################
################################################

CONV_DIR_INT			=	$(CONV_DIR)/int

CONV_SRC_INT			=	ft_atoi.c					\
							ft_atoi_base.c				\
							ft_itoa.c					\
							ft_itoa_no_malloc.c			\
							ft_itoa_base.c				\
							ft_itoa_base_no_malloc.c	\

CONV_SRCS_INT			=	$(addprefix $(CONV_DIR_INT)/, $(CONV_SRC_INT))

################################################
################## UNSIGNED ####################
#################### INT #######################
################################################

CONV_DIR_UINT			=	$(CONV_DIR)/uint

CONV_SRC_UINT			=	ft_atou.c					\
							ft_atou_base.c				\
							ft_utoa.c					\
							ft_utoa_no_malloc.c			\
							ft_utoa_base.c				\
							ft_utoa_base_no_malloc.c	\

CONV_SRCS_UINT			=	$(addprefix $(CONV_DIR_UINT)/, $(CONV_SRC_UINT))

################################################
#################### LONG #######################
################################################

CONV_DIR_LONG			=	$(CONV_DIR)/long

CONV_SRC_LONG			=	ft_atol.c					\
							ft_atol_base.c				\
							ft_ltoa.c					\
							ft_ltoa_no_malloc.c			\
							ft_ltoa_base.c				\
							ft_ltoa_base_no_malloc.c	\

CONV_SRCS_LONG			=	$(addprefix $(CONV_DIR_LONG)/, $(CONV_SRC_LONG))

################################################
################## UNSIGNED ####################
#################### LONG ######################
################################################

CONV_DIR_ULONG			=	$(CONV_DIR)/ulong

CONV_SRC_ULONG			=	ft_atoul.c					\
							ft_atoul_base.c				\
							ft_ultoa.c					\
							ft_ultoa_no_malloc.c		\
							ft_ultoa_base.c				\
							ft_ultoa_base_no_malloc.c	\

CONV_SRCS_ULONG			=	$(addprefix $(CONV_DIR_ULONG)/, $(CONV_SRC_ULONG))

################################################
################## LLONG #######################
################################################

CONV_DIR_LLONG			=	$(CONV_DIR)/llong

CONV_SRC_LLONG			=	ft_atoll.c					\
							ft_atoll_base.c				\
							ft_lltoa.c					\
							ft_lltoa_no_malloc.c		\
							ft_lltoa_base.c				\
							ft_lltoa_base_no_malloc.c	\
							ft_llonglen_base.c			\

CONV_SRCS_LLONG			=	$(addprefix $(CONV_DIR_LLONG)/, $(CONV_SRC_LLONG))

################################################
################## UNSIGNED ####################
################### LLONG ######################
################################################

CONV_DIR_ULLONG			=	$(CONV_DIR)/ullong

CONV_SRC_ULLONG			=	ft_atoull.c					\
							ft_atoull_base.c			\
							ft_ulltoa.c					\
							ft_ulltoa_no_malloc.c		\
							ft_ulltoa_base.c			\
							ft_ulltoa_base_no_malloc.c	\
							ft_ullonglen_base.c			\

CONV_SRCS_ULLONG		=	$(addprefix $(CONV_DIR_ULLONG)/, $(CONV_SRC_ULLONG))

CONVS_DIR				=	$(CONV_DIR_SHORT)			\
							$(CONV_DIR_USHORT)			\
							$(CONV_DIR_INT)				\
							$(CONV_DIR_UINT)			\
							$(CONV_DIR_LONG)			\
							$(CONV_DIR_ULONG)			\
							$(CONV_DIR_LLONG)			\
							$(CONV_DIR_ULLONG)			\

CONV_SRCS				=	$(CONV_SRCS_SHORT)			\
							$(CONV_SRCS_USHORT)			\
							$(CONV_SRCS_INT)			\
							$(CONV_SRCS_UINT)			\
							$(CONV_SRCS_LONG)			\
							$(CONV_SRCS_ULONG)			\
							$(CONV_SRCS_LLONG)			\
							$(CONV_SRCS_ULLONG)			\

################################################
################### ft_printf ##################
################################################

FT_PRINTF_SUB_DIR		=	ft_printf

################################################
##################### buff #####################
################################################

FT_PRINTF_BUFF_DIR		=	$(FT_PRINTF_SUB_DIR)/buff

FT_PRINTF_BUFF_SRC		=	ft_prefix.c				\
							ft_put_buffer.c			\
							ft_put_buffer2.c		\
							ft_reset_buff.c			\

FT_PRINTF_BUFF_SRCS		=	$(addprefix $(FT_PRINTF_BUFF_DIR)/, $(FT_PRINTF_BUFF_SRC))

################################################
#################### CONVERT ###################
################################################

FT_PRINTF_CONV_DIR		=	$(FT_PRINTF_SUB_DIR)/convert

FT_PRINTF_CONV_SRC		=	ft_convert.c			\
							ft_convert2.c			\
							ft_convert_int.c		\
							ft_convert_ptr.c		\
							ft_convert_uint.c		\
							ft_convert_uni.c		\
							ft_convert_uni2.c		\
							ft_convert_unicode.c	\
							ft_convert_unicode2.c	\

FT_PRINTF_CONV_SRCS		=	$(addprefix $(FT_PRINTF_CONV_DIR)/, $(FT_PRINTF_CONV_SRC))

################################################
#################### PARSER ####################
################################################

FT_PRINTF_PARSER_DIR	=	$(FT_PRINTF_SUB_DIR)/parser

FT_PRINTF_PARSER_SRC	=	ft_core.c				\
							ft_flags.c				\
							ft_modifier.c			\
							ft_precision.c			\
							ft_strcatindex.c		\
							ft_types.c				\

FT_PRINTF_PARSER_SRCS	=	$(addprefix $(FT_PRINTF_PARSER_DIR)/, $(FT_PRINTF_PARSER_SRC))

################################################
#################### CORE ####################
################################################

FT_PRINTF_CORE_DIR		=	$(FT_PRINTF_SUB_DIR)/core

FT_PRINTF_CORE_SRC		=	ft_asprintf.c				\
							ft_dprintf.c				\
							ft_fprintf.c				\
							ft_printf.c					\
							ft_snprintf.c				\
							ft_sprintf.c				\

FT_PRINTF_CORE_SRCS		=	$(addprefix $(FT_PRINTF_CORE_DIR)/, $(FT_PRINTF_CORE_SRC))

################################################
###################### LST #####################
################################################

FT_PRINTF_LST_DIR		=	$(FT_PRINTF_SUB_DIR)/lst

FT_PRINTF_LST_SRC		=	ft_init_struct.c		\

FT_PRINTF_LST_SRCS		=	$(addprefix $(FT_PRINTF_LST_DIR)/, $(FT_PRINTF_LST_SRC))

################################################
################### PRECISION ##################
#################### PADDING ###################
################################################

FT_PRINTF_PRECI_DIR		=	$(FT_PRINTF_SUB_DIR)/precision_padding

FT_PRINTF_PRECI_SRC		=	ft_get_precision.c		\
							ft_putzero.c			\

FT_PRINTF_PRECI_SRCS	=	$(addprefix $(FT_PRINTF_PRECI_DIR)/, $(FT_PRINTF_PRECI_SRC))


FT_PRINTF_DIR			=	$(FT_PRINTF_BUFF_DIR)	\
							$(FT_PRINTF_CONV_DIR)	\
							$(FT_PRINTF_CORE_DIR)	\
							$(FT_PRINTF_LST_DIR)	\
							$(FT_PRINTF_PRECI_DIR)	\
							$(FT_PRINTF_PARSER_DIR)	\

FT_PRINTF_SRCS			=	$(FT_PRINTF_BUFF_SRCS)	\
							$(FT_PRINTF_CONV_SRCS)	\
							$(FT_PRINTF_CORE_SRCS)	\
							$(FT_PRINTF_LST_SRCS)	\
							$(FT_PRINTF_PRECI_SRCS)	\
							$(FT_PRINTF_PARSER_SRCS)\

################################################
#################### Memory ####################
################################################

MEMORY_DIR				=	memory

MEMORY_SRC				=	ft_bzero.c				\
							ft_calloc.c				\
							ft_memalloc.c			\
							ft_memccpy.c			\
							ft_memchr.c				\
							ft_memcmp.c				\
							ft_memcpy.c				\
							ft_memdel.c				\
							ft_memmem.c				\
							ft_memmove.c			\
							ft_memrchr.c			\
							ft_memrev.c				\
							ft_memset.c				\
							ft_memjoinfreefirst.c	\

MEMORY_SRCS				=	$(addprefix $(MEMORY_DIR)/, $(MEMORY_SRC))

################################################
##################### Print ####################
################################################

PRINT_DIR				=	print

PRINT_SRC				=	ft_putchar.c			\
							ft_putchar_fd.c			\
							ft_putendl.c			\
							ft_putendl_fd.c			\
							ft_putnbr.c				\
							ft_putnbr_fd.c			\
							ft_puts.c				\
							ft_putstr.c				\
							ft_putstr_fd.c			\

PRINT_SRCS				=	$(addprefix $(PRINT_DIR)/, $(PRINT_SRC))

################################################
#################### String ####################
################################################

STRING_DIR				=	string

STRING_SRC				=	ft_split.c				\
							ft_str_is_alpha.c		\
							ft_str_is_ascii.c		\
							ft_str_is_xdigit.c		\
							ft_str_is_lowercase.c	\
							ft_str_is_numeric.c		\
							ft_str_is_printable.c	\
							ft_str_is_uppercase.c	\
							ft_strcasecmp.c			\
							ft_strcasestr.c			\
							ft_strcat.c				\
							ft_strchr.c				\
							ft_strclr.c				\
							ft_strcmp.c				\
							ft_strcpy.c				\
							ft_strdel.c				\
							ft_strdup.c				\
							ft_strequ.c				\
							ft_striter.c			\
							ft_striteri.c			\
							ft_strjoin.c			\
							ft_strjoinfree.c		\
							ft_strlcat.c			\
							ft_strlcpy.c			\
							ft_strlen.c				\
							ft_strlen_c.c			\
							ft_strlowcase.c			\
							ft_strmap.c				\
							ft_strmapi.c			\
							ft_strncasecmp.c		\
							ft_strncat.c			\
							ft_strncatindex.c		\
							ft_strncmp.c			\
							ft_strncpy.c			\
							ft_strndup.c			\
							ft_strnequ.c			\
							ft_strnew.c				\
							ft_strnlen.c			\
							ft_strnstr.c			\
							ft_strpbrk.c			\
							ft_strrchr.c			\
							ft_strstr.c				\
							ft_strsub.c				\
							ft_strtrim.c			\
							ft_strupcase.c			\
							ft_substr.c				\


STRING_SRCS				=	$(addprefix $(STRING_DIR)/, $(STRING_SRC))

################################################
##################### Tab ######################
################################################

TAB_DIR					=	tab

TAB_SRC					=	ft_tabdup.c					\
							ft_tablen.c					\
							ft_tabndup.c				\
							ft_tabnew.c					\
							ft_tabtostr.c				\
							ft_tabtostr_c.c				\
							ft_free_tab.c				\

TAB_SRCS				=	$(addprefix $(TAB_DIR)/, $(TAB_SRC))

################################################
#################### SUBDIR ####################
################################################

OBJS_DIR				=	$(MEMORY_DIR)			\
							$(STRING_DIR)			\
							$(CHAR_DIR)				\
							$(PRINT_DIR)			\
							$(TAB_DIR)				\
							$(CONVS_DIR)			\
							$(LST_DIR)				\
							$(GNL_DIR)				\
							$(FT_PRINTF_DIR)		\

SRCS					=	$(MEMORY_SRCS)			\
							$(STRING_SRCS)			\
							$(CHAR_SRCS)			\
							$(PRINT_SRCS)			\
							$(TAB_SRCS)				\
							$(CONV_SRCS)			\
							$(GNL_SRCS)				\
							$(FT_PRINTF_SRCS)		\

OBJS					=	$(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	@ar rcs $@ $(OBJS)
	@echo $@ compiled [$(GREEN)√$(RESET)]

$(OBJ_DIR):
	@mkdir -p $(addprefix $@/, $(OBJS_DIR)) 

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADERS)
	@$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@/bin/rm -rf $(OBJ_DIR)
	@echo Objects clean [$(GREEN)√$(RESET)]

fclean: clean
	@/bin/rm -f $(NAME)
	@echo $(NAME) clean [$(GREEN)√$(RESET)]

re: fclean all

.PHONY: all clean fclean re
