/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusodici <jusodici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:40:56 by jusodici          #+#    #+#             */
/*   Updated: 2023/10/22 12:41:14 by jusodici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cast_dst;
	unsigned char	*cast_src;
	size_t			i;

	cast_dst = (unsigned char *)s1;
	cast_src = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (cast_dst[i] != cast_src[i])
			return (cast_dst[i] - cast_src[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char dst[100] = "hola que tal";
	char src[] = "que";
	size_t n = 2;
	printf("%d", memcmp(dst, src, n));
//	printf("%s", ft_memcpy(dst, src, n));
}
*/