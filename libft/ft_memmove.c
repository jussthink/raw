/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusodici <jusodici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:42:23 by jusodici          #+#    #+#             */
/*   Updated: 2023/10/22 12:42:26 by jusodici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cast_dst;
	char	*cast_src;
	size_t	i;

	cast_dst = (char *) dst;
	cast_src = (char *) src;
	i = 0;
	if (cast_dst == 0 && cast_src == 0)
		return (0);
	if (cast_dst > cast_src)
		while (len--)
			cast_dst[len] = cast_src[len];
	else
	{
		while (i < len)
		{
			cast_dst[i] = cast_src[i];
			i++;
		}
	}
	return (cast_dst);
}