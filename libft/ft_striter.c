/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 07:34:50 by pmogwere          #+#    #+#             */
/*   Updated: 2019/06/22 12:24:57 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	int		i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i] != '\0')
			f(&s[i++]);
	}
}
