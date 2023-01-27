#include "../srcs/libasm.h"

int main(void)
{
    int len;
    int len1;
    char str[4096];
    char str1[4096];

    printf("___FT_STRLEN___\n\n");
    len = ft_strlen("Hello  |");
    len1 = strlen("Hello  |");
    printf("ft_strlen: %d\n", len);
    printf("strlen:    %d\n\n", len1);
    len = ft_strlen("");
    len1 = strlen("");
    printf("ft_strlen: %d\n", len);
    printf("strlen:    %d\n\n", len1);
    len = ft_strlen(" ");
    len1 = strlen(" ");
    printf("ft_strlen: %d\n", len);
    printf("strlen:    %d\n\n", len1);
    len = ft_strlen("You must check for errors during syscalls and properly set them when needed");
    len1 = strlen("You must check for errors during syscalls and properly set them when needed");
    printf("ft_strlen: %d\n", len);
    printf("strlen:    %d\n\n", len1);



    printf("___FT_STRCPY___\n\n");
    ft_strcpy(str, "Hello");
    strcpy(str1, "Hello");
    printf("ft_strcpy: %s\n", str);
    printf("strcpy:    %s\n\n", str1);
    ft_strcpy(str, "");
    strcpy(str1, "");
    printf("ft_strcpy: %s\n", str);
    printf("strcpy:    %s\n\n", str1);
    ft_strcpy(str, "You must check for errors during syscalls and properly set them when needed");
    strcpy(str1, "You must check for errors during syscalls and properly set them when needed");
    printf("ft_strcpy: %s\n", str);
    printf("strcpy:    %s\n\n", str1);



    printf("___FT_STRCMP___\n\n");
    len = ft_strcmp("", "");
    len1 = strcmp("", "");
    printf("ft_strcmp: %d\n", len);
    printf("strcmp:    %d\n\n", len1);
    len = ft_strcmp("Hello", "Hello");
    len1 = strcmp("Hello", "Hello");
    printf("ft_strcmp: %d\n", len);
    printf("strcmp:    %d\n\n", len1);
    len = ft_strcmp("", "Hello");
    len1 = strcmp("", "Hello");
    printf("ft_strcmp: %d\n", len);
    printf("strcmp:    %d\n\n", len1);
    len = ft_strcmp("Hello", "");
    len1 = strcmp("Hello", "");
    printf("ft_strcmp: %d\n", len);
    printf("strcmp:    %d\n\n", len1);



    printf("___FT_READ___\n\n");
    int fd;
    char buf[4096];
    char buf2[4096];
    int my;
    int original;

    fd = open("test/file1.txt", O_RDONLY);
    original = read(fd, buf, 100);
    printf("read:     len - %d, text - %s\n", original, buf);
    close(fd);
    fd = 0;

    fd = open("test/file1.txt", O_RDONLY);
    my = ft_read(fd, buf, 100);
    printf("ft_read:  len - %d, text - %s\n\n", my, buf);
    close(fd);

    fd = open("test/file1.txt", O_RDONLY);
    original = read(fd, buf, 300);
    printf("read:     len - %d, text - %s\n", original, buf);
    close(fd);
    fd = 0;

    fd = open("test/file1.txt", O_RDONLY);
    my = ft_read(fd, buf, 300);
    printf("ft_read:  len - %d, text - %s\n\n", my, buf);
    close(fd);

    fd = open("kdfjglkfdj", O_RDONLY);
    original = read(fd, buf2, 300);
    printf("read:     len  %d, errno  %d\n", original, errno);
    close(fd);
    fd = 0;
    errno = 0;

    fd = open("dfkg;fd", O_RDONLY);
    my = read(fd, buf2, 300);
    printf("ft_read:  len  %d, errno  %d\n\n", my, errno);
    close(fd);



    printf("___FT_WRITE___\n\n");
    char *test;

    test = "string\n";
    fd = open("test/write.txt", O_WRONLY);
    original = write(fd, test, strlen(test));
    my = write(fd, test, strlen(test));
    printf("write:    original - %d, my - %d\n", original, my);

    test = "To turn in bonuses to your project, you must include a rule bonus to your Makefile,which will add all the various headers, libraries or functions that are forbidden onthe main part of the project. Bonuses must be in a different file _bonus.{c/h}.Mandatory and bonus part evaluation is done separately.\n";
    fd = open("test/write2.txt", O_WRONLY);
    original = write(fd, test, strlen(test));
    my = write(fd, test, strlen(test));
    printf("write:    original - %d, my - %d\n", original, my);

    test = "";
    fd = open("test/write2.txt", O_WRONLY);
    original = write(fd, test, strlen(test));
    my = write(fd, test, strlen(test));
    printf("write:    original - %d, my - %d\n", original, my);

    test = "Hello\n";
    fd = open("fjkdghkfd", O_WRONLY);
    original = write(fd, test, strlen(test));
    printf("write:    original  %d, errno  %d\n", original, errno);
    errno = 0;
    my = write(fd, test, strlen(test));
    printf("ft_write: my        %d, errno  %d\n\n", my, errno);



    printf("___FT_STRDUP___\n\n");
    const char *string;
    char *std;
    char *test2;

    string = "Hello world";
    std = strdup(string);
    test2 = ft_strdup(string);
    printf("original - %s\n", std);
    printf("my       - %s\n", test2);

    string = "";
    std = strdup(string);
    test2 = ft_strdup(string);
    printf("original - %s\n", std);
    printf("my       - %s\n", test2);

    string = "You must check for errors during syscalls and properly set them when needed";
    std = strdup(string);
    test2 = ft_strdup(string);
    printf("original - %s\n", std);
    printf("my       - %s\n", test2);
    }
