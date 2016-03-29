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
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "t465617796.h"
#include "Il2CppObject.h"

extern "C"  void m1222289168 (t465617796 * __this, float p0, float p1, float p2, float p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  int32_t m1576457715 (t465617796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  bool m3783731577 (t465617796 * __this, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  String_t* m2340321043 (t465617796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t465617796;
struct t465617796_marshaled_pinvoke;

extern "C" void t465617796_marshal_pinvoke(const t465617796& unmarshaled, t465617796_marshaled_pinvoke& marshaled);
extern "C" void t465617796_marshal_pinvoke_back(const t465617796_marshaled_pinvoke& marshaled, t465617796& unmarshaled);
extern "C" void t465617796_marshal_pinvoke_cleanup(t465617796_marshaled_pinvoke& marshaled);

struct t465617796;
struct t465617796_marshaled_com;

extern "C" void t465617796_marshal_com(const t465617796& unmarshaled, t465617796_marshaled_com& marshaled);
extern "C" void t465617796_marshal_com_back(const t465617796_marshaled_com& marshaled, t465617796& unmarshaled);
extern "C" void t465617796_marshal_com_cleanup(t465617796_marshaled_com& marshaled);
