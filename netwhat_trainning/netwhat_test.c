/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   netwhat_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <jteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 16:43:46 by jteixeir          #+#    #+#             */
/*   Updated: 2020/05/07 17:00:27 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int    main(void)
{
    char *question;
    int fd = open("quiz.txt", O_RDONLY);
    int i;
    char *a;

    i = 0;

    ft_intro();
    ft_timer();
    while (i < 20)
    {
        ft_get_txt(&question, fd);
        printf("\n%s\n", question);
        a = ft_get_answer();
        i++;
    }
    ft_check_result(a);
    
    return(0);
}