#include <stdio.h>
void butler(void);//函数原型 
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();//函数调用 
	printf("Yes.Bring me some tea and writeable DVD.\n");
	
	return 0;
}
void butler(void) //函数定义，这一块，可以写在最前面，但是他还是会按照他被调用的位置顺序出现 。 
{
	printf("Young rang,sir?\n");
}
