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


struct t2275264244;
struct t2275264244_marshaled_pinvoke;

extern "C" void t2275264244_marshal_pinvoke(const t2275264244& unmarshaled, t2275264244_marshaled_pinvoke& marshaled);
extern "C" void t2275264244_marshal_pinvoke_back(const t2275264244_marshaled_pinvoke& marshaled, t2275264244& unmarshaled);
extern "C" void t2275264244_marshal_pinvoke_cleanup(t2275264244_marshaled_pinvoke& marshaled);

struct t2275264244;
struct t2275264244_marshaled_com;

extern "C" void t2275264244_marshal_com(const t2275264244& unmarshaled, t2275264244_marshaled_com& marshaled);
extern "C" void t2275264244_marshal_com_back(const t2275264244_marshaled_com& marshaled, t2275264244& unmarshaled);
extern "C" void t2275264244_marshal_com_cleanup(t2275264244_marshaled_com& marshaled);
