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
#include "t465617797.h"
#include "Il2CppObject.h"

extern "C"  int32_t m1754570744 (t465617797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  bool m2692262876 (t465617797 * __this, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  String_t* m3857189970 (t465617797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t465617797;
struct t465617797_marshaled_pinvoke;

extern "C" void t465617797_marshal_pinvoke(const t465617797& unmarshaled, t465617797_marshaled_pinvoke& marshaled);
extern "C" void t465617797_marshal_pinvoke_back(const t465617797_marshaled_pinvoke& marshaled, t465617797& unmarshaled);
extern "C" void t465617797_marshal_pinvoke_cleanup(t465617797_marshaled_pinvoke& marshaled);

struct t465617797;
struct t465617797_marshaled_com;

extern "C" void t465617797_marshal_com(const t465617797& unmarshaled, t465617797_marshaled_com& marshaled);
extern "C" void t465617797_marshal_com_back(const t465617797_marshaled_com& marshaled, t465617797& unmarshaled);
extern "C" void t465617797_marshal_com_cleanup(t465617797_marshaled_com& marshaled);
