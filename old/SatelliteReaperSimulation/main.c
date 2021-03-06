/*
	FreeRTOS.org V6.0.4 - Copyright (C) 2003-2009 Richard Barry.

	This file is part of the FreeRTOS.org distribution.

	FreeRTOS.org is free software; you can redistribute it and/or modify it
	under the terms of the GNU General Public License (version 2) as published
	by the Free Software Foundation and modified by the FreeRTOS exception.

	FreeRTOS.org is distributed in the hope that it will be useful,	but WITHOUT
	ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
	FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
	more details.

	You should have received a copy of the GNU General Public License along
	with FreeRTOS.org; if not, write to the Free Software Foundation, Inc., 59
	Temple Place, Suite 330, Boston, MA  02111-1307  USA.

	A special exception to the GPL is included to allow you to distribute a
	combined work that includes FreeRTOS.org without being obliged to provide
	the source code for any proprietary components.  See the licensing section
	of http://www.FreeRTOS.org for full details.
*/

#include <stdio.h>

#include "FreeRTOS.h"
#include "task.h"

#define MAIN_PRIO ( tskIDLE_PRIORITY + 1)

static void mainTask(void *);

int main(void)
{
	xTaskCreate(mainTask,
				"main task",
				20,
				NULL,
				MAIN_PRIO,
				NULL);
	vTaskStartScheduler();
	return 0;
}

static void mainTask(void *p)
{
	char const *msg = "main task\n";

	for(;;)
	{
		printf("%s", msg);
		vTaskDelay(1000 / portTICK_RATE_MS);
	}
}
