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
#include "t3446825977.h"

extern "C"  void m1442166472 (t3446825977 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t3446825977;
struct t3446825977_marshaled_pinvoke;

extern "C" void t3446825977_marshal_pinvoke(const t3446825977& unmarshaled, t3446825977_marshaled_pinvoke& marshaled);
extern "C" void t3446825977_marshal_pinvoke_back(const t3446825977_marshaled_pinvoke& marshaled, t3446825977& unmarshaled);
extern "C" void t3446825977_marshal_pinvoke_cleanup(t3446825977_marshaled_pinvoke& marshaled);

struct t3446825977;
struct t3446825977_marshaled_com;

extern "C" void t3446825977_marshal_com(const t3446825977& unmarshaled, t3446825977_marshaled_com& marshaled);
extern "C" void t3446825977_marshal_com_back(const t3446825977_marshaled_com& marshaled, t3446825977& unmarshaled);
extern "C" void t3446825977_marshal_com_cleanup(t3446825977_marshaled_com& marshaled);
