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
#include "t504508649.h"
#include "String_t.h"
#include "Il2CppObject.h"

extern "C"  void m3209157611 (t504508649 * __this, String_t* p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t504508649;
struct t504508649_marshaled_com;

extern "C" void t504508649_marshal_com(const t504508649& unmarshaled, t504508649_marshaled_com& marshaled);
extern "C" void t504508649_marshal_com_back(const t504508649_marshaled_com& marshaled, t504508649& unmarshaled);
extern "C" void t504508649_marshal_com_cleanup(t504508649_marshaled_com& marshaled);
