/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusodici <jusodici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:01:41 by jusodici          #+#    #+#             */
/*   Updated: 2023/10/16 16:01:42 by jusodici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*r;

	c = (char)c;
	r = (char *)s;
	len = ft_strlen(s);
	while (len > 0)
	{
		if (r[len] == c)
			return (&r[len]);
		len--;
	}
	if (r[len] == c)
		return (r);
	return (0);
}
