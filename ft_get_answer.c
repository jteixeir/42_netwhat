/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_answer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <jteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 13:54:53 by jteixeir          #+#    #+#             */
/*   Updated: 2020/05/06 16:49:00 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int     ft_get_answer(void)
{
    static char user_answer[11] = "0000000000";
    int a = 0;
    static int i = 0;

    printf("\nyour answer:\t");
    scanf("%d", &a);
    user_answer[i++]= (char)a + 48;
    printf("your answer was: %s", user_answer);
    return(1);
}
