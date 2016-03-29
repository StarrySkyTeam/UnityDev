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


struct t1243592260;
struct t1243592260_marshaled_pinvoke;

extern "C" void t1243592260_marshal_pinvoke(const t1243592260& unmarshaled, t1243592260_marshaled_pinvoke& marshaled);
extern "C" void t1243592260_marshal_pinvoke_back(const t1243592260_marshaled_pinvoke& marshaled, t1243592260& unmarshaled);
extern "C" void t1243592260_marshal_pinvoke_cleanup(t1243592260_marshaled_pinvoke& marshaled);

struct t1243592260;
struct t1243592260_marshaled_com;

extern "C" void t1243592260_marshal_com(const t1243592260& unmarshaled, t1243592260_marshaled_com& marshaled);
extern "C" void t1243592260_marshal_com_back(const t1243592260_marshaled_com& marshaled, t1243592260& unmarshaled);
extern "C" void t1243592260_marshal_com_cleanup(t1243592260_marshaled_com& marshaled);
