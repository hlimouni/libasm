/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlimouni <hlimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 11:27:18 by hlimouni          #+#    #+#             */
/*   Updated: 2021/05/30 16:51:21 by hlimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strcpy(char *dest, char *src);

char	*ft_strdup(const char *str)
{
	char			*ptr;
	unsigned int	i;

	ptr = malloc(ft_strlen(str) + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strcpy(ptr, str);
	return (ptr);
}