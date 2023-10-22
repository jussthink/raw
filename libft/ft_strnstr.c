/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusodici <jusodici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:53:57 by jusodici          #+#    #+#             */
/*   Updated: 2023/10/22 12:54:00 by jusodici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	if (len == 0)
		return (0);
	while (i <= len && haystack[i])
	{
		j = 0;
		while (i + j < len && haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	if (haystack[i] == needle[j])
		return ((char *)haystack + j);
	else
		return (0);
}

/*
int main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	size_t	n = 0;
//	printf("%s\n", strnstr(haystack, needle, n));
	printf("%s", ft_strnstr(haystack, needle, n));
}
*/