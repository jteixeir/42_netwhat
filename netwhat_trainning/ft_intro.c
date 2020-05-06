/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intro.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <jteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 17:36:01 by jteixeir          #+#    #+#             */
/*   Updated: 2020/05/06 20:43:19 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void    ft_accept(char a)
{
    if (a == 'y' || a == 'Y')
        printf(CYAN "\n\n• ========================================================== •");
        printf("\n\n\t\t     Great, let's do it!\n\t\t\tGood Luck!!\n\n" COLOR_RESET);      
}

char    ft_ready(void)
{
    char a = 'z';
    printf("Are you ready to start? (y/n)\n");
    scanf("%c", &a);
    if (a == 'y' || a == 'Y')
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
    int fd = open("img.txt", O_RDONLY);
    int ret;
    char buffer[2000];
    ret = read(fd, buffer, 1999);
    buffer[ret] = '\0';
    printf(CYAN "%s\n\n", buffer);

    printf("\n       ======== • Welcome to NetWhat trainning test! • =========\n" COLOR_RESET);
    printf(GREEN "\t\t\t\t          by jteixeir @42saopaulo\n\n" COLOR_RESET);
    printf("\n\n                    ----- Main instructions -----\n\n");
    printf("• After you click 'y' you will have 10 minutes to answer 20 questions\n");
    printf("• You must answer the questions using numbers 1 to 9, according to the option of your choice\n\n");
    
    printf("\n\n\t     ••••••••••••••••••••••••••••••••••••••••••••••\n\n");
    ft_ready();
}