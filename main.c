/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlimouni <hlimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:17:03 by hlimouni          #+#    #+#             */
/*   Updated: 2021/03/20 17:38:46 by hlimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

extern int ft_strcmp(const char *s1, const char *s2);
int ft_strcmp_c(const char *s1, const char *s2);

int main(void)
{
	char *str = "alslkjfsalkj";
	char *str2 = "alslkjfsA lkj";
	printf("%d\n", ft_strcmp_c(str, str2));
	printf("%d\n", ft_strcmp(str, str2));
	return (0);
}