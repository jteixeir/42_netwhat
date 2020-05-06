/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <jteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 15:11:18 by jteixeir          #+#    #+#             */
/*   Updated: 2020/05/06 15:30:29 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIB_H
#define _LIB_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

void    ft_intro(void);
char    ft_ready(void);
void    ft_accept(char a);
void    ft_deny(char a);
void    ft_timer(void);
int    ft_get_question(char **x, char **question, int fd);
int ft_get_txt(char **question, int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int     ft_get_answer(void);

#endif