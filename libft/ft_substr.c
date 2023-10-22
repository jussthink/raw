/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusodici <jusodici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:01:52 by jusodici          #+#    #+#             */
/*   Updated: 2023/10/16 16:01:52 by jusodici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;
	size_t	new_len;

	slen = ft_strlen(s);
	new_len = 0;
	if (!s)
		return (NULL);
	if (slen < start)
		return (ft_strdup(""));
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (new_len < len)
		str[new_len++] = ((char *)s)[start++];
	str[new_len] = '\0';
	return (str);
}
