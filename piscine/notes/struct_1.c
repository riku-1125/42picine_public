
#include <stdio.h>

typedef struct s_point {
	int x;
	int y;
} t_point;

int main(void)
{
	t_point s;
	s.x = 3;
	s.y = 7;
	printf("%d %d", s.x, s.y);
	return 0;
}
