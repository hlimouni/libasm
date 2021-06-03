/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlimouni <hlimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:17:03 by hlimouni          #+#    #+#             */
/*   Updated: 2021/06/03 21:23:31 by hlimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fd, const void *buf, size_t count);
ssize_t	ft_read(int fd, void *buf, size_t count);
char	*ft_strdup(const char *s);

int	main(int ac, char **av)
{
	char *src;
	char *dest;
	char *ret;
	int  fd;
	int  ret_read;
	int ret_ft_read;
	char *str1 = "the quick brown fox jumps over the lazy dog";
	char *str2 = "1337";
	char *str3 = "";
	char *str4 = "hello world";
	char *str5 = "hacuna matata";

	src = malloc(30);
	dest = malloc(30);
	memcpy(dest, "Hello world", 12);
	memcpy(src, "Lorem ipsum dolor sit amet", 24);

	if (ac == 2)
	{
		if (ft_strcmp(av[1], "ft_strlen") == 0)
		{
			printf("\n-- ft_strlen --\n\n");
			printf("ft_strlen => \"%s\" : %ld\n", str1, ft_strlen(str1));
			printf("strlen => \"%s\" : %ld\n", str1, strlen(str1));
			printf("ft_strlen => \"%s\" : %ld\n", str3, ft_strlen(str3));
			printf("strlen => \"%s\" : %ld\n", str3, strlen(str3));
		}
		else if (ft_strcmp(av[1], "ft_strcpy") == 0)
		{
			printf("\n-- ft_strcpy --\n\n");
			printf("before :\nsrc : %s, dest : %s\n", src, dest);
			ret = ft_strcpy(dest, src);
			printf("after :\nsrc : %s, dest : %s\nret : %s\n", src, dest, ret);
		}
		else if (ft_strcmp(av[1], "ft_strcmp") == 0)
		{
			printf("\n-- ft_strcmp --\n\n");
			printf("ft_strcmp : %d\n", ft_strcmp(src, dest));
			printf("strcmp : %d\n", strcmp(src, dest));
			
			printf("ft_strcmp : %d\n", ft_strcmp(str1, str2));
			printf("strcmp : %d\n", strcmp(str1, str2));
			
			printf("ft_strcmp : %d\n", ft_strcmp(str3, str1));
			printf("strcmp : %d\n", strcmp(str3, str1));
			
			printf("ft_strcmp : %d\n", ft_strcmp(str1, str3));
			printf("strcmp : %d\n", strcmp(str1, str3));
			
			printf("ft_strcmp : %d\n", ft_strcmp(str4, str5));
			printf("strcmp : %d\n", strcmp(str4, str5));
			
		}
		else if (ft_strcmp(av[1], "ft_write") == 0)
		{
			printf("\n-- ft_write --\n\n");
			fd = open("./file", O_RDONLY | O_CREAT);
			errno = 0;
			printf("write : %ld", write(fd, "hello!\n", 7));
			printf(", errno : %d\n", errno);
			perror("write's error");
			errno = 0;
			printf("ft_write : %ld", ft_write(fd, "hello!\n", 7));
			printf(", errno : %d\n", errno);
			perror("ft_write's error");
			close(fd);
			
			errno = 0;
			printf("\n");
			printf("write : %ld", write(1, "hello!\n", 7));
			printf(", errno : %d\n", errno);
			errno = 0;
			printf("ft_write : %ld", ft_write(1, "hello!\n", 7));
			printf(", errno : %d\n", errno);
		}
		else if (ft_strcmp(av[1], "ft_read") == 0)
		{
			printf("\n-- ft_read --\n\n");
			
			bzero(dest, 30);
			bzero(src, 30);
			
			fd = open("./ft_read.s", O_RDONLY);
			errno = 0;
			ret_read = read(fd, src, 18);
			close(fd);
			printf("read : \"%s\", ret : %d, errno : %d\n\n", src, ret_read, errno);
			
			fd = open("./ft_read.s", O_RDONLY);
			errno = 0;
			ret_ft_read = ft_read(fd, dest, 18);
			close(fd);
			printf("ft_read : \"%s\", ret : %d, errno : %d\n\n", dest, ret_ft_read, errno);

			fd = open("./ft_read.sqsdf", O_RDONLY);
			bzero(dest, 30);
			bzero(src, 30);
			errno = 0;
			ret_read = read(fd, src, 18);
			perror("read's error");
			close(fd);
			printf("read : \"%s\", ret : %d, errno : %d\n\n", src, ret_read, errno);
			fd = open("./ft_read.sqsdf", O_RDONLY);
			errno = 0;
			ret_ft_read = ft_read(fd, dest, 18);
			perror("ft_read's error");
			close(fd);
			printf("ft_read : \"%s\", ret : %d, errno : %d\n\n", dest, ret_ft_read, errno);
		}
		else if (ft_strcmp(av[1], "ft_strdup") == 0)
		{
			printf("\n-- ft_strdup --\n\n");
			errno = 0;
			char *duplicated_str = ft_strdup("hello world");
			if (duplicated_str)
				printf("%p : %s, errno : %d\n", duplicated_str, duplicated_str, errno);
			else
				printf("%p, errno : %d\n", duplicated_str, errno);
		}
		else
			printf("Example usage:\n./test ft_strlen\n");
	}
	else
		printf("Example usage:\n./test ft_strlen\n");
	free(src);
	free(dest);
	return (0);
}
