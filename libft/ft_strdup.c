/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusodici <jusodici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:48:10 by jusodici          #+#    #+#             */
/*   Updated: 2023/10/22 12:48:12 by jusodici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ptr;
	char	*print_ptr;

	i = ft_strlen(s1) + 1;
	ptr = ft_calloc(i, 1);
	if (!ptr)
		return (0);
	print_ptr = ptr;
	while (*s1 != 0)
		*(ptr++) = *(s1++);
	return (print_ptr);
}