#include <stdio.h>
typedef struct s_point {
	int x;
	int y;
} t_point;

void print_point(t_point t)
{
	printf("%d %d", t.x, t.y);
}

int main(void)
{
	t_point t;
	t.x = 3;
	t.y = 8;

	print_point(t);
	return 0;
}

