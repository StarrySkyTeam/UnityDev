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


struct t873863414;
struct t873863414_marshaled_pinvoke;

extern "C" void t873863414_marshal_pinvoke(const t873863414& unmarshaled, t873863414_marshaled_pinvoke& marshaled);
extern "C" void t873863414_marshal_pinvoke_back(const t873863414_marshaled_pinvoke& marshaled, t873863414& unmarshaled);
extern "C" void t873863414_marshal_pinvoke_cleanup(t873863414_marshaled_pinvoke& marshaled);

struct t873863414;
struct t873863414_marshaled_com;

extern "C" void t873863414_marshal_com(const t873863414& unmarshaled, t873863414_marshaled_com& marshaled);
extern "C" void t873863414_marshal_com_back(const t873863414_marshaled_com& marshaled, t873863414& unmarshaled);
extern "C" void t873863414_marshal_com_cleanup(t873863414_marshaled_com& marshaled);
