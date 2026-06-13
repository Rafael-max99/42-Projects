/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:57:48 by rlauren           #+#    #+#             */
/*   Updated: 2026/02/23 12:26:46 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_widthprecision(const char *fmt, t_format *format)
{
	(*format).logic.width = 0;
	(*format).logic.precision = -1;
	(*format).logic.point = 0;
	while (fmt[(*format).logic.ct] >= '0' && fmt[(*format).logic.ct] <= '9')
	{
		(*format).logic.width = ((*format).logic.width * 10)
			+ (fmt[(*format).logic.ct] - '0');
		(*format).logic.ct++;
	}
	if (fmt[(*format).logic.ct] == '.')
	{
		(*format).logic.point = 1;
		(*format).logic.ct++;
		(*format).logic.precision = 0;
		while (fmt[(*format).logic.ct] >= '0' && fmt[(*format).logic.ct] <= '9')
		{
			(*format).logic.precision = ((*format).logic.precision * 10)
				+ (fmt[(*format).logic.ct] - '0');
			(*format).logic.ct++;
		}
	}
	return ((*format).logic.ct);
}

static int	ft_chosetype1(const char *fmt, va_list *args, t_format *format)
{
	if (fmt[(*format).logic.ct] == 'c')
	{
		(*format).type.c = va_arg(*args, int);
		(*format).logic.printed += ft_typechar(format);
		return ((*format).logic.ct + 1);
	}
	else if (fmt[(*format).logic.ct] == 's')
	{
		(*format).type.str = va_arg(*args, char *);
		(*format).logic.printed += ft_typestring(format);
		return ((*format).logic.ct + 1);
	}
	else if (fmt[(*format).logic.ct] == 'p')
	{
		(*format).type.ptr = va_arg(*args, void *);
		(*format).logic.printed += ft_typevoid(format);
		return ((*format).logic.ct + 1);
	}
	else if (fmt[(*format).logic.ct] == 'd' || fmt[(*format).logic.ct] == 'i')
	{
		(*format).type.n = va_arg(*args, int);
		(*format).logic.printed += ft_typeint(format);
		return ((*format).logic.ct + 1);
	}
	return (0);
}

static int	ft_chosetype2(const char *fmt, va_list *args, t_format *format)
{
	if (fmt[(*format).logic.ct] == 'u')
	{
		(*format).type.nu = va_arg(*args, unsigned int);
		(*format).logic.printed += ft_typeunsint(format);
		return ((*format).logic.ct + 1);
	}
	else if (fmt[(*format).logic.ct] == 'x' || fmt[(*format).logic.ct] == 'X')
	{
		(*format).type.nu = va_arg(*args, unsigned int);
		(*format).logic.printed += ft_typehexa(format, fmt[(*format).logic.ct]);
		return ((*format).logic.ct + 1);
	}
	else if (fmt[(*format).logic.ct] == '%')
	{
		ft_putchar('%');
		(*format).logic.printed++;
		return ((*format).logic.ct + 1);
	}
	else
	{
		ft_putchar('%');
		ft_putchar(fmt[(*format).logic.ct]);
		(*format).logic.printed += 2;
		return ((*format).logic.ct + 1);
	}
}

static int	ft_chosetypefunc(const char *fmt, va_list *args, t_format *format)
{
	int	temp_ct;

	if (fmt[(*format).logic.ct] == '\0')
		return (0);
	temp_ct = ft_chosetype1(fmt, args, format);
	if (temp_ct)
		return (temp_ct);
	else
		return (ft_chosetype2(fmt, args, format));
}

int	ft_printf(const char *fmt, ...)
{
	va_list		args;
	t_format	format;

	format.flags = ft_resetflags();
	format.logic = ft_resetlogic();
	va_start(args, fmt);
	while (fmt[format.logic.ct])
	{
		if (fmt[format.logic.ct] == '%')
		{
			format.logic.ct++;
			format.flags = ft_resetflags();
			format.logic.ct = ft_choseflags(fmt, &format);
			format.logic.ct = ft_widthprecision(fmt, &format);
			format.logic.ct = ft_chosetypefunc(fmt, &args, &format);
			if (format.logic.ct == 0)
				return (format.logic.printed + ft_putchar('%'));
		}
		else
			format.logic.printed += ft_putchar(fmt[format.logic.ct++]);
	}
	va_end(args);
	return (format.logic.printed);
}
/*int main (void)
{
    int n = 123;
    char    *format = "%-010d";
    char    *format2 = "% +d";
    char    *str = "teste1 teste2";

    printf("PREENCHIMENTO (- e 0):\n\n");

    printf("Preencher com espacos a esquerda\n");
    printf("Org: %10d\n", n);
    ft_printf("Rep: %10d\n", n);

    printf("Preencher com espacos a direita (-)\n");
    printf("Org: %-10d\n", n);
    ft_printf("Rep: %-10d\n", n);

    printf("Preencher com zeros a esquerda (0)\n");
    printf("Org: %010d\n", n);
    ft_printf("Rep: %010d\n", n);

    printf("Flag - anula flag 0\n");
    printf("Org: ");
    printf(format, n);
    putchar('\n');
    ft_printf("Rep: ");
    ft_printf(format, n);
    ft_printf("\n\n");

    printf("PRECISAO (.):\n\n");

    printf("Define numero minimo de digitos e preenche com zeros a esquerda\n");
    printf("Org: %.10d\n", n);
    ft_printf("Rep: %.10d\n", n);

    printf("Org: %.0d\n", n);
    ft_printf("Rep: %.0d\n", n);

    printf("Se o numero for 0\n");
    printf("Org: %.10d\n", 0);
    ft_printf("Rep: %.10d\n", 0);

    printf("Se ambos forem 0\n");
    printf("Org: %.0d\n", 0);
    ft_printf("Rep: %.0d\n", 0);

    printf("Strings\n");
    printf("Org: %.10s\n", str);
    ft_printf("Rep: %.10s\n\n", str);

    printf("FLAGS DE SINAL E FORMA ALTERNATIVA\n\n");
	
	printf("Padrao\n");
    printf("Org: %d\n", n);
    ft_printf("Rep: %d\n", n);

    printf("Flag (+)\n");
    printf("Org: %+d\n", n);
    ft_printf("Rep: %+d\n", n);

    printf("Flag (espaco)\n");
    printf("Org: % d\n", n);
    ft_printf("Rep: % d\n", n);

    printf("Flag (+) tem prioridade sobre (espaco)\n");
    printf("Org: ");
    printf(format2, n);
    putchar('\n');
    ft_printf("Rep: ");
    ft_printf(format2, n);
    ft_printf("\n");

    printf("Flag (#) adiciona prefixo (0x)\n");
    printf("Org: %#x\n", n);
    ft_printf("Rep: %#x\n", n);
    printf("Org: %#X\n", n);
    ft_printf("Rep: %#X\n", n);

    printf("Flag (#) nao adiciona prefixo se valor for 0\n");
    printf("Org: %#x\n", 0);
    ft_printf("Rep: %#x\n\n", 0);

    printf("COMBINACOES COMPLEXAS\n\n");
    printf("Org: %-10.5d\n", n);
    ft_printf("Rep: %-10.5d\n", n);

    printf("Org: %#010x\n", n);
    ft_printf("Rep: %#010x\n", n);
    
    printf("Precisao anula o (0)\n");
    printf("Org: %010.5d\n", n);
    ft_printf("Rep: %010.5d\n", n);

    printf("Precisao interiro zero com precisao zero\n");
    printf("Org: %5.0dt\n", 0);
    ft_printf("Rep: %5.0dt\n", 0);

    return (0);
}*/