/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intro.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <jteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 17:36:01 by jteixeir          #+#    #+#             */
/*   Updated: 2020/05/06 15:19:38 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include "color.h"

void    ft_accept(char a)
{
    if (a == 'y')
        printf(GREEN "\n\n--------------------------------------------------------------------" COLOR_RESET);
        printf("\n\nGreat, let's do it!\n\n");      
}

char    ft_ready(void)
{
    char a = 'z';
    printf("Are you ready to start? (y/n)\n");
    scanf("%c", &a);
    if (a == 'y')
        ft_accept(a);
    else if (a == 'n')
        ft_deny(a);
    else
    {
        printf("You should choose (y/n)");
        ft_ready();
    }
}

void    ft_deny(char a)
{
    char b = 'z';
    if (a == 'n')
    {
        printf("Ok, take your time.\n");
        printf("Click 'y' when you ready!\n");
        scanf(" %c", &b);
        if (b == 'y')
            ft_accept(b);
        else
            ft_deny(a);
    }
}

void     ft_intro(void)
{
    int fd = open("/home/jteixeir/Desktop/netwhat_test/img.txt", O_RDONLY);
    int ret;
    char buffer[2000];
    ret = read(fd, buffer, 1999);
    buffer[ret] = '\0';
    printf(GREEN "%s\n\n", buffer);

    printf("\t===== * Welcome to NetWhat trainning test! * =====\n\n" COLOR_RESET);
    ft_ready();
}