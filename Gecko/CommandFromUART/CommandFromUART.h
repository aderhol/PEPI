#ifndef COMMANDFROMUART_H
#define COMMANDFROMUART_H

#include <stdbool.h>
#include <stdint.h>

typedef enum {
	INIT,
	UNCONNECTED,
	CONNECTED
}Status;

extern void CommandFromUARTInit(void);
extern bool CommandFromUARTInitGet_status(Status* status);
extern bool CommandFromUARTInitGet_reply(char** reply, int_fast16_t maxLength); //sets reply to NULL, if maxLength is too small

#endif