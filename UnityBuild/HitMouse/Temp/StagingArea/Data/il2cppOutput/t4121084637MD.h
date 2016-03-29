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

#include "codegen/il2cpp-codegen.h"
#include "t4121084637.h"
#include "t465617797.h"

extern "C"  t465617797  m4059191533 (t4121084637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  String_t* m2019179238 (t4121084637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t4121084637;
struct t4121084637_marshaled_pinvoke;

extern "C" void t4121084637_marshal_pinvoke(const t4121084637& unmarshaled, t4121084637_marshaled_pinvoke& marshaled);
extern "C" void t4121084637_marshal_pinvoke_back(const t4121084637_marshaled_pinvoke& marshaled, t4121084637& unmarshaled);
extern "C" void t4121084637_marshal_pinvoke_cleanup(t4121084637_marshaled_pinvoke& marshaled);

struct t4121084637;
struct t4121084637_marshaled_com;

extern "C" void t4121084637_marshal_com(const t4121084637& unmarshaled, t4121084637_marshaled_com& marshaled);
extern "C" void t4121084637_marshal_com_back(const t4121084637_marshaled_com& marshaled, t4121084637& unmarshaled);
extern "C" void t4121084637_marshal_com_cleanup(t4121084637_marshaled_com& marshaled);
