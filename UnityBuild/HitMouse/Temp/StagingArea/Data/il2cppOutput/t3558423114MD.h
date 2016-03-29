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
#include "t3558423114.h"
#include "Il2CppObject.h"

extern "C"  bool m487155333 (t3558423114 * __this, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  int32_t m3498861551 (t3558423114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t3558423114;
struct t3558423114_marshaled_pinvoke;

extern "C" void t3558423114_marshal_pinvoke(const t3558423114& unmarshaled, t3558423114_marshaled_pinvoke& marshaled);
extern "C" void t3558423114_marshal_pinvoke_back(const t3558423114_marshaled_pinvoke& marshaled, t3558423114& unmarshaled);
extern "C" void t3558423114_marshal_pinvoke_cleanup(t3558423114_marshaled_pinvoke& marshaled);

struct t3558423114;
struct t3558423114_marshaled_com;

extern "C" void t3558423114_marshal_com(const t3558423114& unmarshaled, t3558423114_marshaled_com& marshaled);
extern "C" void t3558423114_marshal_com_back(const t3558423114_marshaled_com& marshaled, t3558423114& unmarshaled);
extern "C" void t3558423114_marshal_com_cleanup(t3558423114_marshaled_com& marshaled);
