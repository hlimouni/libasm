/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlimouni <hlimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 10:04:16 by hlimouni          #+#    #+#             */
/*   Updated: 2021/03/20 11:22:29 by hlimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp_c(const char *s1, const char *s2)
{
	if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (ft_strcmp_c(s1 + 1, s2 + 1));
}

// int ft_strcmp(const char *s1, const char *s2)
// {
//     while (*s1 && *s2 && *s1 == *s2)
//     {
//         (char *)s1++;
//         (char *)s2++;
//     }
//     return ((unsigned char)*s1 - (unsigned char)*s2);
// }