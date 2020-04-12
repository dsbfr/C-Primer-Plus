#include <stdio.h>
int main(void) 
{
	int num;
	num = 1;
	
	printf("I am a simple ");//这个空格在simple后面有用，要是放在computer前面就没用，显示不出来。 
	printf("computer .\n"); /*第一次，我这里的n忘记输入了 */ 
	printf("My favourite number is %d because it is first .\n",num);
	
	
	return 0;
}
