#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"


struct t860510703;
struct t860510703_marshaled_pinvoke;

extern "C" void t860510703_marshal_pinvoke(const t860510703& unmarshaled, t860510703_marshaled_pinvoke& marshaled);
extern "C" void t860510703_marshal_pinvoke_back(const t860510703_marshaled_pinvoke& marshaled, t860510703& unmarshaled);
extern "C" void t860510703_marshal_pinvoke_cleanup(t860510703_marshaled_pinvoke& marshaled);

struct t860510703;
struct t860510703_marshaled_com;

extern "C" void t860510703_marshal_com(const t860510703& unmarshaled, t860510703_marshaled_com& marshaled);
extern "C" void t860510703_marshal_com_back(const t860510703_marshaled_com& marshaled, t860510703& unmarshaled);
extern "C" void t860510703_marshal_com_cleanup(t860510703_marshaled_com& marshaled);
