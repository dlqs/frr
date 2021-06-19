#include "assert.h"
#include "lib/frrscript.h"

int main(int argc, char **argv)
{
	frrscript_init("./lib");

	struct frrscript *fs = frrscript_load("script1", NULL);
	int a = 100, b = 200;
	int result = frrscript_call(fs, ("a", &a), ("b", &b));
	assert(result == 0);
	assert(a == 300);
	assert(b == 200);

	return 0;
}
