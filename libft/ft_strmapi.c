/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusodici <jusodici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:51:32 by jusodici          #+#    #+#             */
/*   Updated: 2023/10/22 12:55:48 by jusodici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	str = ft_calloc(sizeof (char), (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
//*****************************************************************************
// INPUT
//s: La string que iterar.
//f: La función a aplicar sobre cada carácter.
//*****************************************************************************
// OUTPUT
// La string creada tras el correcto uso de ’f’ sobre cada carácter. 
// NULL si falla la reserva de memoria.
//*****************************************************************************
// DESCRIPTION
// A cada carácter de la string ’s’, aplica la 
// función ’f’ dando como parámetros el índice de cada 
// carácter dentro de ’s’ y el propio carácter.
// Genera una nueva string con el resultado del uso sucesivo de ’f’
//*****************************************************************************
/*
static char ft_demo(unsigned int n, char c)
{
	if (1 == 1)
		return (111);
	else
		return (0);
}

int main(void)
{
	char	*ret = "hola que tal";
	printf("%s", ft_strmapi(ret, &ft_demo));
	return (0);
}
*/