/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02typedevariable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:35:08 by bporret           #+#    #+#             */
/*   Updated: 2022/06/16 15:52:12 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char c; //variable de type caractere

	c = 'z';
	printf("%lu\n", sizeof(c)); // taille de la memoire en octet
	printf("%d\n", c); // valeur du caractere dans la table ascii
	printf("%c", c); // prend la valeur de la table ascii et affiche la correspondance
}
