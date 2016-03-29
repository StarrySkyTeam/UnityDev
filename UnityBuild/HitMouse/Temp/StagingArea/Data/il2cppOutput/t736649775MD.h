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
#include "t736649775.h"

extern "C"  void m1944319286 (t736649775 * __this, int32_t p0, int32_t p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t736649775;
struct t736649775_marshaled_pinvoke;

extern "C" void t736649775_marshal_pinvoke(const t736649775& unmarshaled, t736649775_marshaled_pinvoke& marshaled);
extern "C" void t736649775_marshal_pinvoke_back(const t736649775_marshaled_pinvoke& marshaled, t736649775& unmarshaled);
extern "C" void t736649775_marshal_pinvoke_cleanup(t736649775_marshaled_pinvoke& marshaled);

struct t736649775;
struct t736649775_marshaled_com;

extern "C" void t736649775_marshal_com(const t736649775& unmarshaled, t736649775_marshaled_com& marshaled);
extern "C" void t736649775_marshal_com_back(const t736649775_marshaled_com& marshaled, t736649775& unmarshaled);
extern "C" void t736649775_marshal_com_cleanup(t736649775_marshaled_com& marshaled);
