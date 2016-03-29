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


struct t946762668;
struct t946762668_marshaled_pinvoke;

extern "C" void t946762668_marshal_pinvoke(const t946762668& unmarshaled, t946762668_marshaled_pinvoke& marshaled);
extern "C" void t946762668_marshal_pinvoke_back(const t946762668_marshaled_pinvoke& marshaled, t946762668& unmarshaled);
extern "C" void t946762668_marshal_pinvoke_cleanup(t946762668_marshaled_pinvoke& marshaled);

struct t946762668;
struct t946762668_marshaled_com;

extern "C" void t946762668_marshal_com(const t946762668& unmarshaled, t946762668_marshaled_com& marshaled);
extern "C" void t946762668_marshal_com_back(const t946762668_marshaled_com& marshaled, t946762668& unmarshaled);
extern "C" void t946762668_marshal_com_cleanup(t946762668_marshaled_com& marshaled);
