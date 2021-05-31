/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlimouni <hlimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:17:03 by hlimouni          #+#    #+#             */
/*   Updated: 2021/05/31 15:08:04 by hlimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

extern	int ft_strcmp(const char *s1, const char *s2);
extern	char *ft_strcpy(char * dst, const char * src);
extern	size_t ft_strlen(const char *str);
extern	size_t ft_write(int fildes, const void *buf, size_t nbyte);
extern	size_t ft_read(int fildes, void *buf, size_t nbyte);
extern	char	*ft_strdup(const char *str);

int main(void)
{
	char *str = "The quick brown fox jumps over the lazy dog";
	char *str1 = "alslkjfsalkj";
	char *str2 = "alslkjfsA lkj";
	printf("%d\n", ft_strcmp_c(str, str2));
	printf("%d\n", ft_strcmp(str, str2));
	return (0);
}