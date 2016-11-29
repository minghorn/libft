#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int  main(void)
{
/*	char src[] = "string with\200inside !";
	char buff1[] = "abcdefghijklmnopqrstuvwxyz";
	char buff2[] = "abcdefghijklmnopqrstuvwxyz";

	memccpy(buff1, src, '\200', 21);
	ft_memccpy(buff2, src, '\200', 21);

	if (!memcmp(buff1, buff2, 21))
		printf("%s\n", "failed"); */

	char *src = "thanks to @apellicc for this test !\r\n";
	char dst1[0xF0];
	char dst2[0xF0];
	int size = ft_strlen(src);
	memmove(dst1, src, size);
	ft_memmove(dst2, src, size);
	printf("memmove: %s", dst1);
	printf("ft_memmove: %s", dst2);
	char	*r1 = memmove("", "" - 1, 0);
	char	*r2 = ft_memmove("", "" - 1, 0);
	printf("memmove: %s", r1);
	printf("ft_memmove: %s", r2);

/*	ft_putnbr(ft_isalpha('B'));
	printf("%d\n", isalpha('B'));
	printf("%d\n", ft_atoi("\t\v\f\r\n \f- \f\t\n\r    06050"));
	printf("%d\n", atoi("\t\v\f\r\n \f- \f\t\n\r    06050"));
	printf("%d\n", ft_atoi("+23-4"));
	printf("%d\n", atoi("+23-4"));

	printf("%s\n", ft_memccpy(buff1, src, '\200', 21));
	printf("%s\n", memccpy(buff2, src, '\200', 21));

	char	*s1 = "MZIRIBMZIRIBMZE123";
	char	*s2 = "MZIRIBMZE";
	size_t	max = strlen(s2);

	char	*i1 = strnstr(s1, s2, max);
	char	*i2 = ft_strnstr(s1, s2, max);
	printf("%s/\n", i1);
	printf("%s/\n", i2);

	int i = -100;
	while (i < 530)
	{
		if (ft_tolower(i) != tolower(i))
		{
			printf("%d:\n%d\n%d\n", i, ft_isprint(i), isprint(i));
			break ;
		}
		i++;
	}

	char *s = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !";
	char *s2 = "      ";
	printf("%s\n", ft_strtrim(s2));
	printf("%s\n", ft_strtrim(s));
	
	char *s = "hello***my*name**is***ming";
	char *s2 = "****";
	char *s3 = "      split       this for   me  !       ";
	char **buff = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	char **buff2 = (char **)malloc(sizeof(char *) * (ft_strlen(s3) + 1));
	buff = ft_strsplit(s, '*');
	buff2 = ft_strsplit(s3, ' ');
	for (int i = 0; i < 5; i++)
		printf("%s ", buff[i]);
	printf("\n%s\n", ft_strsplit(s2, '*')[0]);
	int j = 0;
	while (buff2[j] != '\0')
	{
		printf("%s, ", buff2[j]);
		j++;
	}
	printf("\n");
	ft_strsplit(s, '*');
	ft_strsplit(s2, '*');
	ft_strsplit(s3, '*'); */

/*	printf("%s\n", ft_itoa(-0));
	printf("%s\n", ft_itoa(-623));
	printf("%s\n", ft_itoa(156));
*/
	return (0);
}
