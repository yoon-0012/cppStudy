#include<iostream>
#include<string>

int general(int i)
{
	return i >= 0 ? i : -i;
}

#define unsafe(i)((i)>=0?(i):-(i))

inline int safe(int i)
{
	return i >= 0 ? i : -i;
}

constexpr int expr(int i)
{
	return i >= 0 ? i : -i;
}

int main()
{
	int ans, x = 0;

	ans = general(x++);
	std::cout << "general(x++) = " << ans << ", " << x << std::endl;

	x = 0;
	ans = unsafe(x++);
	std::cout << "unsafe(x++) = " << ans << ", " << x << std::endl;
	x = 0;

	ans = safe(x++);
	std::cout << "safe(x++) = " << ans << ", " << x << std::endl;
	x = 0;

	x = 0;
	ans = expr(x++);
	std::cout << "expr(x++) = " << ans << ", " << x << std::endl;

	return 0;
}