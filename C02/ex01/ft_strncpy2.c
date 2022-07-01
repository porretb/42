/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:25:37 by bporret           #+#    #+#             */
/*   Updated: 2022/06/19 05:15:48 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	
	i = 0;
	//comptage de la longeur de la source (scan mon gars)
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
		printf("%d\n", n);
	//
	//si chaine source taille = a longeur 
	if (i == n)
	{
		dest[i] = src[i];
		printf("%d", i);
	}
	//
	//chaine source taille plus petite que longeur
	n = 20;
	printf("%d\n", i);	
	printf("%d\n", n);	
	if (i < n)
	{	
		printf("selenmmmmmm");
		while(i < n)
		{
			dest[i] = '\0';
			i++;
		printf("%d\n", i);
		}
	}
	//si chaine source plus grande que longeur remplire de bit ascii null
	else if (i > n)
	{
		dest[i] = '\0';
	}
	//
	//renvoit la valeur de la chaine de caractere
	return (dest);

}


int	main(void)
{
	char poute[20] = "Je suis la source";
	char poutevide[20];


	ft_strncpy(poutevide, poute, 12);
	printf("%p\n", poutevide);
	printf("%s\n", poutevide);
	return (0);
}
