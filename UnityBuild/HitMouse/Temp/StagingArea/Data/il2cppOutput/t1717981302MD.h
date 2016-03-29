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

struct t1717981302;
struct t1717981302_marshaled_pinvoke;

#include "codegen/il2cpp-codegen.h"

extern "C"  void m1990515539 (t1717981302 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t1717981302;
struct t1717981302_marshaled_pinvoke;

extern "C" void t1717981302_marshal_pinvoke(const t1717981302& unmarshaled, t1717981302_marshaled_pinvoke& marshaled);
extern "C" void t1717981302_marshal_pinvoke_back(const t1717981302_marshaled_pinvoke& marshaled, t1717981302& unmarshaled);
extern "C" void t1717981302_marshal_pinvoke_cleanup(t1717981302_marshaled_pinvoke& marshaled);

struct t1717981302;
struct t1717981302_marshaled_com;

extern "C" void t1717981302_marshal_com(const t1717981302& unmarshaled, t1717981302_marshaled_com& marshaled);
extern "C" void t1717981302_marshal_com_back(const t1717981302_marshaled_com& marshaled, t1717981302& unmarshaled);
extern "C" void t1717981302_marshal_com_cleanup(t1717981302_marshaled_com& marshaled);
