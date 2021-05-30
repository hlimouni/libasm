/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlimouni <hlimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 14:19:26 by hlimouni          #+#    #+#             */
/*   Updated: 2021/05/30 14:33:37 by hlimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern	int ft_strcmp(const char *s1, const char *s2);

int	main(void)
{
	char *dst = "The quick brown fox jumps over the lazy dog";
	char *src = "The quick brown fox jumps over the lazy dog";

	printf("[%d]\n", strcmp(src, dst));
	printf("[%d]\n", ft_strcmp(src, dst));
	return (0);
}
