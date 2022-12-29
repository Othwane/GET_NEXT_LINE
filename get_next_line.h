/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:11:37 by omajdoub          #+#    #+#             */
/*   Updated: 2022/12/29 14:18:08 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif

int		slength(char *string);
char	*searchr(char *string, int x);
char	*stringjoin(char *pref, char *suff);
char	*ft_read_ln(int fd, char *line);
char	*ft_until_nl(char *string);
char	*ft_after_nl(char *string);
char	*get_next_line(int fd);

#endif
