int factorial(int n)
{
	int fat = 1;
	for(int i = 1; i < n; i++)
		fat = fat * (i + 1);
	return fat;
}

int square_area(int side)
{
	return side * side;
}

int rectangle_area(int side, int base)
{
	return side * base;
}
