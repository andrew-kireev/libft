/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 21:23:04 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/27 21:43:39 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *str1, char *str2, size_t n)
{
	size_t		i;

	i = 0;
	if (*str1 == '\0' && str2 == '\0')
		return (0);
	while (str1[i] != '\0' && i != n && str1[i] == str2[i])
		i++;
	if (n)
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	return (0);
}