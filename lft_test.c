#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <fcntl.h>

int  main(void)
{
/*	char src[] = "string with\200inside !";
	char buff1[] = "abcdefghijklmnopqrstuvwxyz";
	char buff2[] = "abcdefghijklmnopqrstuvwxyz";

	memccpy(buff1, src, '\200', 21);
	ft_memccpy(buff2, src, '\200', 21);

	if (!memcmp(buff1, buff2, 21))
		printf("%s\n", "failed");

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
*/
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

//	printf("%s\n", ft_itoa(-0));
//	printf("%s\n", ft_itoa(-623));
//	printf("%s\n", ft_itoa(156));

/*  	int fd = open("test.txt", O_APPEND);
	if (fd > 0)
	{
  		ft_putnbr_fd(fd, -2147483648);
		ft_putnbr_fd(fd, 2147483647);
		ft_putnbr_fd(fd, 4588311);
		ft_putstr_fd("hello!", fd);
	}
	else
	  write(2, "error opening\n", 14);
*/
//	ft_putnbr(45808311);
//	ft_putnbr(-2147483648);
//	ft_putnbr(2147483647);
/*	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	size_t r1 = strlcat(buff1, str, max);
	size_t r2 = ft_strlcat(buff2, str, max);
	if (r1 != r2)
 		printf("Failed test 1: r1: %zu, r2: %zu\n", r1, r2);
	printf("buff1: %s\nbuff2: %s\n", buff1, buff2);
	char s1[4] = "";
	char s2[4] = "";
	r1 = strlcat(s1, "thx to ntoniolo for this test !", 4);
	r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
	if (r1 != r2)
		printf("Failed: r1: %zu, r2: %zu\n", r1, r2);
	//printf("%s\n", ft_itoa(-2147483648));
	printf("s1: %s\ns2: %s\n", s1, s2); */
	char *data = "hello, i'm a data";
	t_list *l = ft_lstnew(data, strlen(data) + 1);

	if (!strcmp(data, l->content))
  	{
  		free(l->content);
		free(l);
		printf("success\n");
	}
	else
		printf("failed\n");
	return (0);
}
