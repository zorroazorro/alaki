#include <stdio.h>
//#include "msg.h"

int main()
{
	char msg_hi[21] = "Hi there, programmer!";
	char msg_bye[20] = "Goodbye, programmer!";
	printf("%s\n",msg_hi);
	prmsg(msg_bye);
	return 0;
}
