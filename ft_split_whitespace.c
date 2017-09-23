/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 09:48:11 by aderby            #+#    #+#             */
/*   Updated: 2017/06/13 18:08:52 by aderby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_split_whitespace(char const *s)
{
	char	**ptrptr;
	char	*ptr;
	char	*str;
	int		i;

	i = 0;
	ptr = ft_clean_whitespace(s);
	ptrptr = ft_strsplit(ptr, ' ');
	str = ft_strnew(1);
	while (ptrptr[i])
	{
		str = ft_strjoin(str, ptrptr[i]);
		if (ptrptr[i + 1] != '\0')
			str = ft_strjoin(str, " ");
		i++;
	}
	return (str);
}
