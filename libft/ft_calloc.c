/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusodici <jusodici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:35:16 by jusodici          #+#    #+#             */
/*   Updated: 2023/10/22 12:35:32 by jusodici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
int main(void)
{
	size_t count = sizeof (float);
	size_t size = 5;
	printf("%s\n", calloc(count, size));
	printf("%s\n", ft_calloc(count, size));
}
*/