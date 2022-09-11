/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smartptr.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:59:23 by gsaiago           #+#    #+#             */
/*   Updated: 2022/09/11 18:08:58 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SMARTPTR_H
# define SMARTPTR_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define smart __attribute__((cleanup(free_call)))

void	free_call(void *ptr);
#endif

