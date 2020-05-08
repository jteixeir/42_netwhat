/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_question.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <jteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 14:59:07 by jteixeir          #+#    #+#             */
/*   Updated: 2020/05/07 18:32:10 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int     ft_get_question(char **x, char **question, int fd)
{
    int     i = 0;
    char    *aux;

    while (x[fd][i] != '@' && x[fd][i])
        i++;
    if (x[fd][i] == '@')
    {
        *question = ft_substr(x[fd], 0, i);
        aux = strdup(&x[fd][i + 1]);
        free(x[fd]);
        x[fd] = strdup(aux);
        free(aux);
    }
    else
    {
        *question = strdup(x[fd]);
        free(x[fd]);
        return (0);
    }
    return(1);
}

int ft_get_txt(char **question, int fd)
{
    int     ret;
    char    *buffer;
    static char *x[256];
    char *aux;

    buffer = malloc(sizeof(*buffer) * 50 + 1);
    if(!buffer)
        return(-1);
    while ((ret = read(fd, buffer, 50)) > 0)
    {
        buffer[ret] = '\0';
        if (x[fd] == NULL)
            x[fd] = strdup(buffer);
        else
        {
            aux = ft_strjoin(x[fd], buffer);
            free(x[fd]);
            x[fd] = strdup(aux);
        } 
        if (strchr (x[fd], '@'))
            break ;
    }
    return(ft_get_question(x, question, fd));
}