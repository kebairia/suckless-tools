/* See LICENSE file for copyright and license details. */
#include <stddef.h>

#include "../util.h"


#include <stdint.h>

const char *
temp(const char *file)
{
	uintmax_t temp;

	if (pscanf(file, "%ju", &temp) != 1) {
		return NULL;
	}

	return bprintf("%ju", temp / 1000);
}
