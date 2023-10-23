/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusodici <jusodici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:27:21 by jusodici          #+#    #+#             */
/*   Updated: 2023/10/23 10:29:26 by jusodici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	ret = ft_calloc(((len) + 1), sizeof (char));
	if (!ret)
		return (NULL);
	while (i < len)
	{
		ret[i] = s[start + i];
		i++;
	}
	return (ret);
}
//****************************************************************
// INPUT
// #1. La string de la que formar la nueva.
// #2. El índice de la string por el que empezar la nueva string.
// #3. La longitud máxima de la nueva string.
//****************************************************************
// RETURN
// La nueva string. NULL si la reserva de memoria falla.
//****************************************************************
// DESCRIPTION
// Reserva con malloc(3) memoria para devolver una string nueva basada en 
// la string ’s’.La nueva string empieza en el índice ’start’ y tiene una 
// longitud máxima ’len’.
//****************************************************************
/*
int main(void)
{
char *str = "i just want this part #############";
	size_t size = 10;
	char *res;

	res = ft_substr(str, 0 , size);
	printf("%s", res);
	system("leaks a.out");
	return (0);
}
*/