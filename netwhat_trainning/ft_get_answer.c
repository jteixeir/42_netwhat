/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_answer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <jteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 13:54:53 by jteixeir          #+#    #+#             */
/*   Updated: 2020/05/06 20:43:42 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char *ft_get_answer(char *a)
{
    static char user_answer[21] = "00000000000000000000";
    int a = 0;
    static int i = 0;

    printf("Answer:\t");
    scanf("%d", &a);
    user_answer[i++]= (char)a + 48;

    return(user_answer);
}
