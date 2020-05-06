/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_timer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <jteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 17:10:56 by jteixeir          #+#    #+#             */
/*   Updated: 2020/05/06 20:17:05 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void ft_counter(void)
{
    int iCounter = 3;

    while (iCounter != 0)
    {
        printf(CYAN "\n\n\t\t\t    %d\n\n" COLOR_RESET, iCounter--);
        sleep(1);
    }
}

void ft_timer(void) {
    
    struct  tm *local, *gm;
    time_t  t;
    t = time(NULL);
    local = localtime(&t);
    
    int     day = local->tm_mday;
    int     month = local->tm_mon + 1;
    int     year = local->tm_year + 1900;

    int     hour = local->tm_hour;
    int     min = local->tm_min;
    int     sec = local->tm_sec;

    printf(CYAN "\t\t     %d/%d/%d  ", day, month, year);
    printf(" %d:%2d\n", hour, min);
    printf("\n\n• ========================================================== •" COLOR_RESET);

    ft_counter();
}
