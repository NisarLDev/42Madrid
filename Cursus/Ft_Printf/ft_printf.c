/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:45:40 by nlaftiss          #+#    #+#             */
/*   Updated: 2023/01/12 15:58:04 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_prinf(const char *, ...)
{
	va_list ap
	int i;
	int ret;

	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
		ret += ft_printf_arg(format, i, ap);
		i++;
		}
		else
			ret += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (ret);
}
