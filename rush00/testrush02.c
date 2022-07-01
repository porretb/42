/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testrush02.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 14:17:08 by bporret           #+#    #+#             */
/*   Updated: 2022/06/11 14:51:20 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int x;//nb de colonne
	int y;//nb de ligne
	int l1;//premiere ligne
	int l2;//ligne du millieu
	int countx;//compteur de nb de colonne
	int county;//compteur de nb de ligne

	x = 3;
	y = 3;

	if(x > 0 && y > 0)
	{
		while(countx = x && county = y)
		{
			countx = 0;
			county = 0;
			while(countx <1 && county <1)
			{
				write(1, 0, 1);
			}
			while(countx >1 && countx < x-1 && county >1 && county < x-1)
			{
				write(1, 
			}	
			countx++
			county++

		}
	}

}
