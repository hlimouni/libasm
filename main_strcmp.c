/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlimouni <hlimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 14:19:26 by hlimouni          #+#    #+#             */
/*   Updated: 2021/06/02 15:13:59 by hlimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern	int ft_strcmp(const char *s1, const char *s2);

int	main(void)
{
	char *dst = "";
	char *src = "helfo";

	printf("[%d]\n", strcmp(src, dst));
	printf("[%d]\n", ft_strcmp(src, dst));
	return (0);
}
