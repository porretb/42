/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testrush02.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 14:17:08 by bporret           #+#    #+#             */
/*   Updated: 2022/06/11 16:51:03 by bporret          ###   ########.fr       */
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
	char carac [3];//tableau characteres

	carac[0] = 'o';
	carac[1] = '-';
	carac[2] = '|';
	x = 2;
	y = 1;

	county = 0;
	countx = 0;

	if(x > 0 && y > 0)
	{
		while(countx <= x || county <= y)
		{
			if(countx < 1 && county < 1)
			{
				write(1, &carac[0], 1);
			}	return (0);
			else
			{
				while(countx > 1 && countx < x-1 && county >1 && county < x-1)
				{	
					while(countx > 1 && countx == x)
					{
						write(1, &carac[2], 1);
					}
				}		
		
			return (0);
			}	

		}
	}

	countx++;
	county++;
}
