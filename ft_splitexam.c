/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitexam.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 00:22:03 by mmourdal          #+#    #+#             */
/*   Updated: 2022/12/23 01:55:40 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int wordlen(char *str)
{
	int i = 0;
	
	while (*str == ' ' || *str == '\t' || *str == '\n')
		*str++;
	while (str[i] != '\0' && str[i] != '\t' && str[i] != ' ' && str[i] != '\n')
		i++;
	return (i);
}

char *worddupe(char *str)
{
	int len;
	char *word;
	int i;

	len = wordlen(str);
	word = malloc(sizeof(char *) * len + 1);
	word[len] = '\0';
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

int count_word(char *str)
{
	int word = 0;

	while(*str == ' ' || *str == '\t' || *str == '\n')
		*str++;
	while(*str != '\0')
	{
		++word;
		while(*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			*str++;
		while(*str == ' ' || *str == '\t' || *str == '\n')
			*str++;
	}
	return (word);
}

char **fill_word(char **tab, char *str)
{
	int nbword;
	char **array;
	int wordindex = 0;
	nbword = count_word(str);
	array = malloc(sizeof(char *) * (nbword + 1));
	array[nbword] = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		*str++;
	while(*str != '\0')
	{
		array[wordindex] = worddupe(str);
		++wordindex;
		while(*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			*str++;
		while(*str == ' ' || *str == '\t' || *str == '\n')
			*str++;
	}
	return (array);
}

char    **ft_split(char *str)
{
	char **ret;
	ret = fill_word(ret, str);
	return (ret);
}

int main(int argc, char **argv)
{
	char **tab;
	int i = 0;
	tab = ft_split(argv[1]);
	while(tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return 0;
}
