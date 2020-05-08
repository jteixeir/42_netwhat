/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_result.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <jteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 20:19:36 by jteixeir          #+#    #+#             */
/*   Updated: 2020/05/08 16:36:44 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void    ft_check_result(char *a)
{
    int         result;
    int         i = 0;
    const char  right_answer [] = "12416632125174138191";

    result = strcmp(right_answer, a);
    printf(CYAN "\n\n========= • RESULTS • =========\n\n" COLOR_RESET);
    if(result == 0)
        printf(GREEN "SUCCESS! \u263A\n" COLOR_RESET);
    if (result != 0)
        printf(RED "FAIL!\n" COLOR_RESET);
    printf("\n\tCheck your answers\n");
    printf(" Question  Correct  Your  Check\n");
    while (i < 20)
    {       
        printf(" Q%d\t      %c\t      %c", i, right_answer[i], a[i]);
        if(right_answer[i] == a[i])
            printf(GREEN "    [OK]\n" COLOR_RESET);
        if(right_answer[i] != a[i])
            printf(RED "    [KO]\n" COLOR_RESET);
        i++;
    }
    printf("\n\n");   
}