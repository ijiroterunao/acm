#include<stdio.h>
/*
Scanf函数返回值就是读出的变量个数，如：scanf( “%d  %d”, &a, &b ); 
如果只有一个整数输入，返回值是1，如果有两个整数输入，返回值是2，如果一个都没有，则返回值是-1。
EOF是一个预定义的常量，等于-1。
*/
int main() {
	int a, b;
	//while (scanf("%d %d", &a, &b) != EOF)
	while (scanf("%d %d", &a, &b) == 2)
			printf("%d\n", a + b);
	return 0;
}