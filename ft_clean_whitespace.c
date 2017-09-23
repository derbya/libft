/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 15:40:58 by aderby            #+#    #+#             */
/*   Updated: 2017/06/13 16:52:22 by aderby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_clean_whitespace(const char *s)
{
	char *ptr;
	char *ptrhold;

	ptr = ft_strdup(s);
	ptrhold = ptr;
	while (*ptr)
	{
		if (ft_iswhitespace(*ptr) == 1)
			*ptr = ' ';
		ptr++;
	}
	ptr = ptrhold;
	return (ptr);
}
