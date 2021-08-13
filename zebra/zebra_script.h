#ifndef _ZEBRA_SCRIPT_H
#define _ZEBRA_SCRIPT_H

#include "zebra.h"
#include "zebra/zebra_dplane.h"

#ifdef HAVE_SCRIPTING

#include "frrlua.h"

void lua_pushvrf(lua_State *L, struct vrf *vrf);

void lua_pushzebra_dplane_ctx(lua_State *L, struct zebra_dplane_ctx *ctx);

void lua_decode_zebra_dplane_ctx(lua_State *L, int idx, struct zebra_dplane_ctx *ctx);

#endif /* HAVE_SCRIPTING */

#endif // _ZEBRA_SCRIPT_H
