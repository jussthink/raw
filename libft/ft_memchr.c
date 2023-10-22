/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusodici <jusodici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:40:11 by jusodici          #+#    #+#             */
/*   Updated: 2023/10/22 12:40:20 by jusodici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*cast_s;

	i = 0;
	cast_s = (char *) s;
	while (i < n)
	{
		if (cast_s[i] == (char)c)
			return (cast_s + i);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char s[] = {0, 1, 2, 3, 4, 5};
	int c  = 2 + 256;
	size_t n = 3;
	printf("%s", ft_memchr(s, c, n));
//	puts(s);
}
*/