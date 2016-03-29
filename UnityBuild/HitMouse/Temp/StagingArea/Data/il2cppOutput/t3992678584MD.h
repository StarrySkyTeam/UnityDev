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


struct t3992678584;
struct t3992678584_marshaled_pinvoke;

extern "C" void t3992678584_marshal_pinvoke(const t3992678584& unmarshaled, t3992678584_marshaled_pinvoke& marshaled);
extern "C" void t3992678584_marshal_pinvoke_back(const t3992678584_marshaled_pinvoke& marshaled, t3992678584& unmarshaled);
extern "C" void t3992678584_marshal_pinvoke_cleanup(t3992678584_marshaled_pinvoke& marshaled);

struct t3992678584;
struct t3992678584_marshaled_com;

extern "C" void t3992678584_marshal_com(const t3992678584& unmarshaled, t3992678584_marshaled_com& marshaled);
extern "C" void t3992678584_marshal_com_back(const t3992678584_marshaled_com& marshaled, t3992678584& unmarshaled);
extern "C" void t3992678584_marshal_com_cleanup(t3992678584_marshaled_com& marshaled);
