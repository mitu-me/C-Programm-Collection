#include <stdio.h>

/**
  * C语言指针介绍
  * C语言用变量来存储数据，用函数来定义一段可以重复使用的代码，
  * 它们最终都要放到内存中才能供 CPU 使用
  *
  * 数据和代码都以二进制的形式存储在内存中，计算机无法从格式上区分某块内存到底存储的是数据还是代码。
  * 当程序被加载到内存后，操作系统会给不同的内存块指定不同的权限，
  * 拥有读取和执行权限的内存块就是代码，
  * 而拥有读取和写入权限（也可能只有读取权限）的内存块就是数据。
  * 
  * CPU 只能通过地址来取得内存中的代码和数据，程序在执行过程中会告知 CPU 要执行的代码以及要读写的数据的地址。
  * 如果程序不小心出错，或者开发者有意为之，在 CPU 要写入数据时给它一个代码区域的地址，
  * 就会发生内存访问错误。这种内存访问错误会被硬件和操作系统拦截，强制程序崩溃，程序员没有挽救的机会。
  *
  * CPU 访问内存时需要的是地址，而不是变量名和函数名！变量名和函数名只是地址的一种助记符，
  * 当源文件被编译和链接成可执行程序后，它们都会被替换成地址。
  * 编译和链接过程的一项重要任务就是找到这些名称所对应的地址。

  * 
*/
int main(int argc, char *argv[])
{
	char name[20]="mitu-me";
	printf("%#x\t%#x",name);
	return 0;
}
