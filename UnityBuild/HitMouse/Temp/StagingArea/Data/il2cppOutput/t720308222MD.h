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


struct t720308222;
struct t720308222_marshaled_pinvoke;

extern "C" void t720308222_marshal_pinvoke(const t720308222& unmarshaled, t720308222_marshaled_pinvoke& marshaled);
extern "C" void t720308222_marshal_pinvoke_back(const t720308222_marshaled_pinvoke& marshaled, t720308222& unmarshaled);
extern "C" void t720308222_marshal_pinvoke_cleanup(t720308222_marshaled_pinvoke& marshaled);

struct t720308222;
struct t720308222_marshaled_com;

extern "C" void t720308222_marshal_com(const t720308222& unmarshaled, t720308222_marshaled_com& marshaled);
extern "C" void t720308222_marshal_com_back(const t720308222_marshaled_com& marshaled, t720308222& unmarshaled);
extern "C" void t720308222_marshal_com_cleanup(t720308222_marshaled_com& marshaled);
