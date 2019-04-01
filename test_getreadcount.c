#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
	printf(1, "The read count is %d.\nLet's read something...\n", getreadcount());
	char buffer[100];
	(void) read(4, buffer, 1);
	printf(1, "Now, it is %d.\n", getreadcount());
	exit();
}
