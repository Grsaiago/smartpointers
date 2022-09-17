/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smartptr.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:59:23 by gsaiago           #+#    #+#             */
/*   Updated: 2022/09/16 22:01:53 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SMARTPTR_H
# define SMARTPTR_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define smart __attribute__((cleanup(free_call)))

typedef struct s_meta
{
	void	(*dtor)(void *pointer);
	void	*ptr;
} t_meta ;

void	sfree(void *ptr);
void	*smalloc(size_t size, void (*dtor)(void *));
void	free_call(void *ptr);

// DESTRUCTOR FUNCTIONS //
void	destroy_matrix(void	*mat);
#endif

