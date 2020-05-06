/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   netwhat_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <jteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 16:43:46 by jteixeir          #+#    #+#             */
/*   Updated: 2020/05/06 14:12:21 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int    main(void)
{
    char *question;
    int fd = open("/home/jteixeir/Desktop/netwhat_test/quiz.txt", O_RDONLY);
    int i;

    i = 0;

    ft_intro();
    ft_timer();
    while (i < 10)
    {
        ft_get_txt(&question, fd);
        printf("\n%s\n", question);
        ft_get_answer();
        i++;
    }
    return(0);
}