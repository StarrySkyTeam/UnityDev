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

struct String_t;
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "t83606849.h"
#include "Il2CppObject.h"

extern "C"  String_t* m2638853272 (t83606849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  int32_t m2270520528 (t83606849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  bool m3730391696 (t83606849 * __this, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t83606849;
struct t83606849_marshaled_pinvoke;

extern "C" void t83606849_marshal_pinvoke(const t83606849& unmarshaled, t83606849_marshaled_pinvoke& marshaled);
extern "C" void t83606849_marshal_pinvoke_back(const t83606849_marshaled_pinvoke& marshaled, t83606849& unmarshaled);
extern "C" void t83606849_marshal_pinvoke_cleanup(t83606849_marshaled_pinvoke& marshaled);

struct t83606849;
struct t83606849_marshaled_com;

extern "C" void t83606849_marshal_com(const t83606849& unmarshaled, t83606849_marshaled_com& marshaled);
extern "C" void t83606849_marshal_com_back(const t83606849_marshaled_com& marshaled, t83606849& unmarshaled);
extern "C" void t83606849_marshal_com_cleanup(t83606849_marshaled_com& marshaled);
