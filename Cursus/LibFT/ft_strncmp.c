//
// Created by Nisar Laftissi Blasco on 9/24/22.
//

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int	z;

    z = 0;
    while ((s1[z] != '\0' || s2[z] != '\0') && n--)
    {
        if (s1[z] != s2[z])
            return ((unsigned char)s1[z] - (unsigned char)s2[z]);
        z++;
    }
    return (0);
}