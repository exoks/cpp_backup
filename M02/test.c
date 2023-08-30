#include <stdio.h>

typedef struct s_point
{
	float	x;
	float	y;
}				t_point;

float	lineEquation(t_point *p1, t_point *p2, t_point *p)
{
	float	slop;
	float	b;

	if (p1->x > p2->x)
		slop = (p1->y - p2->y) / (p1->x - p2->x);
	else
		slop = (p2->y - p1->y) / (p2->x - p1->x);
	b = -slop * p1->x + p1->y;
	printf("Slop| => %f\nb| => %f\n", slop, b);
	return (slop * p->x + b - p->y);
}

float	sign(float nbr)
{
	if (nbr < 0)
		return (-1);
	return (1);
}

int	main(void)
{
	t_point	a;
	t_point	b;
	t_point	c;
	t_point	p;
	float	xx;

	a.x = 5;
	a.y = 4;

	b.x = 3;
	b.y = 2;

	c.x = 6;
	c.y = 1;

	p.x = 7;
	p.y = -1;
	
//	xx = (-3 * p.x -p.y + 19);// (sign((4 * p.x / 5) - p.y) + 1) * (sign((p.x / 6) - p.y) - 1);
	xx = (-3 * p.x -p.y + 19) * (sign((4 * p.x / 5) - p.y) - 1) * (sign((p.x / 6) - p.y) - 1);
	xx += (p.x -p.y - 1) * (sign((4 * p.x / 5) - p.y) - 1) * (sign((p.x * 2 / 3) - p.y) - 1); 
	xx += (-p.x / 3 -p.y + 3) * (sign((p.x * 2 / 3) - p.y) - 1) * (sign((p.x / 6) - p.y) - 1); 
	printf("slop ==> %f\n", xx);
	return (0);
}
