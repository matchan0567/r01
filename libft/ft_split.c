/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumei <mumei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 17:17:26 by mumei             #+#    #+#             */
/*   Updated: 2026/05/13 17:40:58 by mumei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    **ft_split(char const *s, char c)
{
    int        i;
    int        j;
    int        start;
    char    **array;

    i = 0;
    j = 0;
    array = malloc(sizeof(char *)*(w_count(s, c) + 1));
    if (!array)
        return (NULL);
    while (s[i])
    {
        i = iskip(s, c, i, 0);
        if (s[i])
        {
            start = i;
            i = iskip(s, c, i, 1);
            array[j] = ft_substr(s, start, i - start);
            if (!array[j])
                return (sfree(array,j));
            j++;
        }
    }
    array[j] = NULL;
    return (array);
}

static size_t    w_count(char const *s, char c)
{
    size_t    count;
    size_t    i;

    i = 0;
    count = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
        {
            count++;
            while (s[i]&&s[i] != c)
                i++;
        }
    }
    return (count);
}

static int    iskip(char const *s, char c, int i, int bo)
{
    int    j;
    int    k;

    j = i;
    k = i;
    while (s[j] && s[j] == c)
        j++;
    while (s[k] && s[k] != c)
        k++;
    if (bo == 0)
        return (j);
    if (bo == 1)
        return (k);
    return (i);
}

static char *sfree(char const **array,int j)
{
	int i;
	i=0;
	while(i<j)
	{
		free(&array[i]);
		i++;
	}
	free(array);
	return(NULL);
}