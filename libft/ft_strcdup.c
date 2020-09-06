/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbourgeo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/04 10:58:57 by gbourgeo          #+#    #+#             */
/*   Updated: 2014/02/18 23:35:05 by gbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strcdup(char *str, char c)
{
	char		*copy;
	int			len;

	len = 0;
	if (str == NULL)
		return (NULL);
	while (str[len] != c && str[len] != '\0')
		len++;
	if ((copy = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	copy[len] = '\0';
	while (--len >= 0)
		copy[len] = str[len];
	return (copy);
}
