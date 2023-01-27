#ifndef LIBASM_H
# define LIBASM_H

# include <stdio.h>
# include <stdlib.h>
# include <errno.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>

size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dst, char *str);
int		ft_strcmp(const char *str1, const char *str2);
char	*ft_strdup(const char *str);
size_t	ft_write(int fd, const void *str, size_t len);
size_t	ft_read(int fd, void *buf, size_t len);

#endif
