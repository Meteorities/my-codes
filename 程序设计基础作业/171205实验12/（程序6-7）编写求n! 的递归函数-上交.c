int factorial (int n)
{
	int out;
	if (n == 0) {
		out = 1; //0�Ľ׳���1 
	} 
	else {
		out = factorial (n - 1) * n;
	}
	return out;
}
