/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 10:47:39 by aderby            #+#    #+#             */
/*   Updated: 2017/06/09 14:41:43 by aderby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *str;

	str = dst;
	while (*src && len > 0)
	{
		*dst = *src;
		dst++;
		src++;
		len--;
	}
	if (len > 0)
		ft_bzero(dst, len);
	return (str);
}
