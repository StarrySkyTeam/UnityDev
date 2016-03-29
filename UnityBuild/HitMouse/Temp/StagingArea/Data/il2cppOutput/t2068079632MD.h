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


struct t2068079632;
struct t2068079632_marshaled_pinvoke;

extern "C" void t2068079632_marshal_pinvoke(const t2068079632& unmarshaled, t2068079632_marshaled_pinvoke& marshaled);
extern "C" void t2068079632_marshal_pinvoke_back(const t2068079632_marshaled_pinvoke& marshaled, t2068079632& unmarshaled);
extern "C" void t2068079632_marshal_pinvoke_cleanup(t2068079632_marshaled_pinvoke& marshaled);

struct t2068079632;
struct t2068079632_marshaled_com;

extern "C" void t2068079632_marshal_com(const t2068079632& unmarshaled, t2068079632_marshaled_com& marshaled);
extern "C" void t2068079632_marshal_com_back(const t2068079632_marshaled_com& marshaled, t2068079632& unmarshaled);
extern "C" void t2068079632_marshal_com_cleanup(t2068079632_marshaled_com& marshaled);
