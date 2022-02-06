/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rehernan <rehernan@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 10:08:40 by rehernan          #+#    #+#             */
/*   Updated: 2021/07/10 10:52:00 by rehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** DESCRIPTION
*    The  strdup() function returns a pointer to a new string which is a du‐
*    plicate of the string s.  Memory for the new string  is  obtained  with
*    malloc(3), and can be freed with free(3).
* RETURN VALUE
*    On  success,  the strdup() function returns a pointer to the duplicated
*    string.  It returns NULL if insufficient memory was available, with er‐
*    rno set to indicate the cause of the error. 
**/

char	*ft_strdup(const char *s)
{
	int		i;
	int		ls;
	char	*dup;

	i = 0;
	ls = ft_strlen(s);
	ls++;
	dup = malloc(ls);
	if (!dup)
		return (NULL);
	while (ls > 0)
	{
		dup[i] = s[i];
		i++;
		ls--;
	}
	return (dup);
}
