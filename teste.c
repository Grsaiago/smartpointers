/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:06:29 by gsaiago           #+#    #+#             */
/*   Updated: 2022/09/11 18:06:39 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "smartptr.h"


void testecleanup(void)
{
	smart char  *ptr;

	ptr = malloc(sizeof(char) * 10);
}
int main(void)
{
	testecleanup();
	testecleanup();
	testecleanup();
	return (0);
}
