/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 20:41:35 by fgwyneth          #+#    #+#             */
/*   Updated: 2020/09/29 13:03:43 by fgwyneth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		find_begin(char const *s)
{
	int		i;

	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' ||
	s[i] == '\t'))
		i++;
	return (i);
}

static size_t		find_end(char const *s)
{
	int		i;

	i = ft_strlen(s) - 1;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' ||
	s[i] == '\t'))
		i--;
	return (i);
}

static char  		*zero_str(void)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char))))
		return (NULL);
	*str = '\0';
	return (str);
}


char				*ft_strtrim(char const *s)
{
	char		*new_str;
	size_t		begin;
	size_t		end;
	int			i;

	i = 0;
	if (!s)
		return (NULL);
	begin = find_begin(s);
	end = find_end(s);
	if (!s[0])
		return ((char*)s);
	if (end == 0)
		return (zero_str());
	if (!(new_str = (char *)malloc(sizeof(char) * (end - begin + 2))))
		return (NULL);
	while (begin <= end)
	{
		new_str[i] = s[begin];
		begin++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}