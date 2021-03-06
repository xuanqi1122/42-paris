/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 19:37:47 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/13 15:28:56 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int n;

	n = 0;
	while (s1[n] == s2[n] && s1[n] && s2[n])
		n++;
	return (s1[n] - s2[n]);
}
