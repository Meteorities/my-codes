#include <stdio.h>

int main(void)
{
	int array[5] = {0};
	for (int i = 0;i < 5;i++) {
		array[i] = i;
	} 
	for (i = 0;i < 5;i++) {
		printf("%d\n",array[i]);
	}
	return 0;
}

/* 
 * 猜想的原因：
 * 代码第6行里的int i = 0，C99和C11是支持这么定义的，但是也隐含了一个条件，这个int变量i的作用域就只在这个for循环中，
 * 当这个for循环结束之后（初始化完数组arr之后），变量i就会消失。导致接下来第9行的语句中的变量i未定义。
 * 代码第6行里的变量i只具有块作用域。
 */

 /*
  * C Primer Plus 第6版中文版原话（该段内容位于原书第12.1.1小节）：
  * 定义在块中的变量具有块作用域（block scope），块作用域变量的可见范围是从定义处到包含该定义的块的末尾。
  * 声明在内层块中的变量，其作用域仅局限于该声明所在的块
  * 以前，具有块作用域的变量都必须声明在块的开头。C99 标准放宽了这一限制，允许在块中的任意位置声明变量。
  * 因此，对于for的循环头，现在可以这样写：
  * for (int i = 0; i < 10; i++)
  *		printf("A C99 feature: i = %d", i);
  * 为适应这个新特性，C99把块的概念扩展到包括for循环、while循环、do while循环和if语句所控制的代码，
  * 即使这些代码没有用花括号括起来，也算是块的一部分。
  * 所以，上面for循环中的变量i被视为for循环块的一部分，它的作用域仅限于for循环。一旦程序离开for循环，就不能再访问i。
  */