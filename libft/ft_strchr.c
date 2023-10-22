/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusodici <jusodici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:47:39 by jusodici          #+#    #+#             */
/*   Updated: 2023/10/22 12:47:42 by jusodici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*cast_s;

	i = 0;
	cast_s = (char *) s;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (c == 0)
		return (cast_s + i);
	return (0);
}
/*
int main(void)
{
	char *s = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
//	int c = 111;
	printf("%s\n", strchr(s, '\0'));
	printf("%s\n", ft_strchr(s, '\0'));
}
*/