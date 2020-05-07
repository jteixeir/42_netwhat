/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <jteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 15:11:18 by jteixeir          #+#    #+#             */
/*   Updated: 2020/05/07 16:56:42 by jteixeir         ###   ########.fr       */
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


#define RED             "\x1b[31m"
#define GREEN           "\x1b[32m"
#define YELLOW          "\x1b[33m"
#define BLUE            "\x1b[34m"
#define MAGENTA         "\x1b[35m"
#define CYAN            "\x1b[36m"
#define COLOR_RESET     "\x1b[0m"
#define V_GREEN         "\x1b[38;5;199"
#define GREY            "\x1b[38;5;8m"


void    ft_intro(void);
char    ft_ready(void);
void    ft_accept(char a);
void    ft_deny(char a);
void    ft_timer(void);
int    ft_get_question(char **x, char **question, int fd);
int ft_get_txt(char **question, int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char     *ft_get_answer(void);
void     ft_check_result(char *a);

#endif