/*
 *
 * Quake3Arena iPad Port by Alexander Pick
 * based on iPhone Quake 3 by Seth Kingsley
 *
 */

#import	"ipad_glimp.h"

#include "../renderer/tr_local.h"

qboolean
GLimp_SpawnRenderThread(void (*function)(void))
{
	return qfalse;
}

void *
GLimp_RendererSleep(void)
{
	return NULL;
}

void
GLimp_FrontEndSleep(void)
{
}

void
GLimp_WakeRenderer(void *data)
{
}
