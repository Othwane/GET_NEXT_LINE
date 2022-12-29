/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 00:24:36 by omajdoub          #+#    #+#             */
/*   Updated: 2022/12/28 16:18:07 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	slength(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

char	*searchr(char *string, int x)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == x)
			return (string + i);
		i++;
	}
	return (0);
}

char	*stringjoin(char *pref, char *suff)
{
	int		i;
	int		ii;
	char	*both;

	if (pref == NULL)
		pref = "";
	both = malloc(slength(pref) + slength(suff) + 1);
	i = 0;
	while (pref[i])
	{
		both[i] = pref[i];
		i++;
	}
	ii = 0;
	while (suff && suff[ii])
	{
		both[i] = suff[ii];
		i++;
		ii++;
	}
	both[i] = '\0';
	return (both);
}
