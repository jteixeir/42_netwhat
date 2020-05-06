/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_timer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <jteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 17:10:56 by jteixeir          #+#    #+#             */
/*   Updated: 2020/05/06 16:42:50 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include "color.h"

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

    printf("You'll have 10 minutes to answer 20 questions.\nGood Luck!\n\n");
    printf("\tfrom:\t %d/%d/%d  ", day, month, year);
    printf("%d:%2d\t\n", hour, min);

    if(hour == 23 && min >= 50)
        day += 1;
    if(local->tm_min >= 50)
    {
        hour += 1;
        min == 0;
    }
    printf("\tto:\t %d/%d/%d  ", day, month, year);
    printf("%d:%d\n", local->tm_hour, local->tm_min + 10);

    printf("\n\t\t\t3\n");
    sleep(1);
    printf("\t\t\t2\n");
    sleep(1);
    printf("\t\t\t1\n\n\n");
    sleep(1);
}