/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 03:52:55 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/29 12:07:49 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
En el código original, en la línea while (i <= (nb / 2)), se da como vallor para dividir un número primo el 2.

En esta nueva versión del código se ha cambiado el valor de división de 2 por i para optimizarlo a la hora de encontrar nuevos números primos. Con esto, se consigue que el uso de recursos computacionales sea logarítmico en vez de tipo exponencial, como venía siendo en la versión anterior.

Aportación de la solución de optimización de Raúl Ágreda.

GitHub de Raúl Ágreda: https://github.com/RaulAgreda
*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}
