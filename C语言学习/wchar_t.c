#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main()
{
	wchar_t a=L'中';
	
	//wchar_t字符类型的输出
	//首先要设置本地环境为简体中文
	setlocale(LC_ALL,"zh-CN");
	putwchar(a);
	return 0;
}
