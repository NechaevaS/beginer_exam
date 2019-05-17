/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:17:26 by snechaev          #+#    #+#             */
/*   Updated: 2019/05/16 17:37:00 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int    ft_iswsps(char c)
{
    return (c == ' ' || c == '\t');
}

int count_word(char *str)
{
    int count;
    int i;
    
    i = 0;
    count = 0;
    while( str[i] != '\0')
    {
        if (!ft_iswsps(str[i]) && (i == 0 || ft_iswsps(str[i - 1])))
            count++;
        i++;
    }
    return (count);
}

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int    main(int argc, char **argv)
{
    int i;
    int j;
    int k;
    char *str;
    char **rev;
    
    i = 0;
    j = 0;
    if (argc == 2)
    {
        str = argv[1];
        rev = (char **)malloc(sizeof(char *) * (count_word(str) + 1));
        while (str[i] != '\0')
        {
            if(!ft_iswsps(str[i]) && (i == 0 || ft_iswsps(str[i - 1])))
            {
                rev[j] = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
                k = 0;
                while(!ft_iswsps(str[i]) && str[i] != '\0')
                {
                    rev[j][k] = str[i];
                    i++;
                    k++;
                }
                rev[j][k] = '\0';
                j++;
                if (str[i] == '\0')
                    break;
            }
            i++;
        }
        rev[j] = NULL;
        j--;
        while(j >= 0)
        {
            k = 0;
            while(rev[j][k] != '\0')
            {
                write(1, &rev[j][k], 1);
                k++;
            }
            if (j != 0)
                write(1, " ", 1);
            j--;
        }
    }
    write(1, "\n", 1);
    return (0);
}
