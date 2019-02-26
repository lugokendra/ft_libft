#include "libft.h"

int main()
{
	long arr[4] = { 4, 7, 5, 8 };
	long len = 4;

	ft_memset((void*)arr, (int)0, (size_t)(len * sizeof(long)));

	return 0;
}
