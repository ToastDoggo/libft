/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rehernan <rehernan@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:56:08 by rehernan          #+#    #+#             */
/*   Updated: 2021/07/12 13:01:44 by rehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	len;

	if (!s)
		return (NULL);
	len = 0;
	while (len != (int)ft_strlen(s))
	{
		if (s[len] == c)
			return ((char *)s + len);
		len ++;
	}
	if (c == '\0')
		return ((char *)s + len);
	return (NULL);
}
