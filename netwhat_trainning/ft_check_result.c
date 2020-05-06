/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_result.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <jteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 20:19:36 by jteixeir          #+#    #+#             */
/*   Updated: 2020/05/06 20:44:00 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void ft_check_result(char *a)
{
    char check[21] = "11111111111111111111";
    int result;
    result = strcmp(check, ft_get_answer);
    printf("%d", result);
    
    return(result);
}