/* ************************************************************************** */
/*																			*/
/*														:::		::::::::   */
/*   ft_ft_isalnum_test.c									:+:		:+:	:+:   */
/*													+:+ +:+			+:+		*/
/*   By: jeremi360 <jeremi360@student.42.fr>		+#+  +:+		+#+		*/
/*												+#+#+#+#+#+   +#+			*/
/*   Created: 2024/02/27 12:13:03 by jeremi360			#+#	#+#				*/
/*   Updated: 2024/02/27 12:14:28 by jeremi360		###   ########.fr		*/
/*																			*/
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char c;
	int result;

	c = '5';
	result = ft_isalnum(c);
	printf("When %c is passed, return (value is %d\n", c, result);

	c = 'Q';
	result = ft_isalnum(c);
	printf("When %c is passed, return (value is %d)\n", c, result);

	c = 'l';
	result = ft_isalnum(c);
	printf("When %c is passed, return (value is %d\n", c, result);

	c = '+';
	result = ft_isalnum(c);
	printf("When %c is passed, return (value is %d\n", c, result);

	return (0);
}