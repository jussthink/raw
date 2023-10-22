/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusodici <jusodici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:49:58 by jusodici          #+#    #+#             */
/*   Updated: 2023/10/22 12:49:59 by jusodici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;
	size_t	z;

	i = ft_strlen(dst);
	n = ft_strlen(src);
	z = 0;
	if (dstsize == 0)
		return (n);
	if (i > dstsize)
		return (n + dstsize);
	else
	{
		while (src[z] && (i + z) < dstsize)
		{
			dst[i + z] = src[z];
			z++;
		}
		if ((i + z) == dstsize && i < dstsize)
			dst[(i + z) - 1] = '\0';
		else
			dst[i + z] = '\0';
		return (i + n);
	}
}