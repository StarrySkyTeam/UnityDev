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

struct t1518686560;
struct t1518686560_marshaled_pinvoke;

#include "codegen/il2cpp-codegen.h"

extern "C"  void m2014522928 (t1518686560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t1518686560;
struct t1518686560_marshaled_pinvoke;

extern "C" void t1518686560_marshal_pinvoke(const t1518686560& unmarshaled, t1518686560_marshaled_pinvoke& marshaled);
extern "C" void t1518686560_marshal_pinvoke_back(const t1518686560_marshaled_pinvoke& marshaled, t1518686560& unmarshaled);
extern "C" void t1518686560_marshal_pinvoke_cleanup(t1518686560_marshaled_pinvoke& marshaled);

struct t1518686560;
struct t1518686560_marshaled_com;

extern "C" void t1518686560_marshal_com(const t1518686560& unmarshaled, t1518686560_marshaled_com& marshaled);
extern "C" void t1518686560_marshal_com_back(const t1518686560_marshaled_com& marshaled, t1518686560& unmarshaled);
extern "C" void t1518686560_marshal_com_cleanup(t1518686560_marshaled_com& marshaled);
