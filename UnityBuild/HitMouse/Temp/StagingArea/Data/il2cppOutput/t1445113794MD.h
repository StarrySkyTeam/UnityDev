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

struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "t1445113794.h"
#include "Il2CppObject.h"

extern "C"  void m2901884110 (t1445113794 * __this, Il2CppObject * p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  Il2CppObject * m3623293571 (t1445113794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  Il2CppObject * m2812883243 (t1445113794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t1445113794;
struct t1445113794_marshaled_com;

extern "C" void t1445113794_marshal_com(const t1445113794& unmarshaled, t1445113794_marshaled_com& marshaled);
extern "C" void t1445113794_marshal_com_back(const t1445113794_marshaled_com& marshaled, t1445113794& unmarshaled);
extern "C" void t1445113794_marshal_com_cleanup(t1445113794_marshaled_com& marshaled);
