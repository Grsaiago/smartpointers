/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:10:05 by gsaiago           #+#    #+#             */
/*   Updated: 2022/09/16 22:03:37 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "smartptr.h"
#include <string.h>

void testecleanup(void)
{
	smart char	**array;

	array = smalloc(sizeof(char **) * 5, destroy_matrix);
	if (!array)
		return ;
	array[0] = calloc(sizeof(char), 12);
	array[1] = calloc(sizeof(char), 12);
	array[2] = calloc(sizeof(char), 12);
	array[3] = calloc(sizeof(char), 12);
	array[4] = NULL;

	memcpy(array[0], "Posição 0", 11);
	memcpy(array[1], "Posição 1", 11);
	memcpy(array[2], "Posição 2", 11);
	memcpy(array[3], "Posição 3", 11);
	printf("%s\n", array[0]);
	printf("%s\n", array[1]);
	printf("%s\n", array[2]);
	printf("%s\n", array[3]);
}

int main(void)
{
	testecleanup();
	return (0);
}
