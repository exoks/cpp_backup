/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:58:41 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/29 22:04:21 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "Point.hpp"

//=== Default Constructor ======================================================
Point::Point() : x(0), y(0)
{
}

//=== Constructor 1 ============================================================
Point::Point(float const x, float const y) : x(x), y(y)
{
}

//=== Copy Constructor =========================================================
Point::Point(Point& point) : x(point.getX()), y(point.getY())
{
}

//=== X getter =================================================================
const Fixed&	Point::getX(void) const
{
	return (x);
}

//=== Y getter =================================================================
const Fixed&	Point::getY(void) const
{
	return (y);
}

//=== Copy Assignment Operator =================================================
Point&	Point::operator= (const Point& point)
{
	(void) point;
	return (*this);
}

//=== extractCrossPoint ========================================================
Fixed	Point::extractCrossPoint(const Point& p1, const Point& p2, const Point& p) const
{
	float	slop;
	float	yIntercept;

	if (p1.getX() < p2.getX())
	{
		slop = p2.getY().toFloat() - p1.getY().toFloat();
		slop /= p2.getX().toFloat() - p1.getX().toFloat();
	}
	else
	{
		slop = p1.getY().toFloat() - p2.getY().toFloat();
		slop /= p1.getX().toFloat() - p2.getX().toFloat();
	}
	yIntercept = p1.getY().toFloat() - (slop * p1.getX().toFloat());
	return (Fixed((p.getY().toFloat() - yIntercept) / slop));
}

//=== bsp function =============================================================
bool Point::bsp(Point const a, Point const b, Point const c, Point const p)
{
	const Fixed	maxY(Fixed::max(Fixed::max(a.getY(), b.getY()), c.getY()));
	const Fixed minY(Fixed::min(Fixed::min(a.getY(), b.getY()), c.getY()));
	const Point	*v[3] = {&a, &b, &c};
	int			cross = 0;
	int			i;

	i  = -1;
	while (++i < 3)
	{
		if (extractCrossPoint(*v[i], *v[(i + 1) % 3], p) > p.getX()
				&& p.getY() < maxY && p.getY() > minY)
			cross++;
	}
	return (cross % 2 && cross);
}

//=== Destructor ===============================================================
Point::~Point()
{
}
