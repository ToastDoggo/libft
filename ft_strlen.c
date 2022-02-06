/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rehernan <rehernan@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:36:54 by rehernan          #+#    #+#             */
/*   Updated: 2021/06/26 20:30:52 by rehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*DESCRIPTION
*     The strlen() function computes the length of the string s.  The strnlen()
*     function attempts to compute the length of s, but never scans beyond the
*     first maxlen bytes of s.
*
*RETURN VALUES
*     The strlen() function returns the number of characters that precede the
*     terminating NUL character.  The strnlen() function returns either the
*     same result as strlen() or maxlen, whichever is smaller.
**/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
