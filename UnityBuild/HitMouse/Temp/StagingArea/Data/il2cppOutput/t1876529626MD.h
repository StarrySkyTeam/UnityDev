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


struct t1876529626;
struct t1876529626_marshaled_pinvoke;

extern "C" void t1876529626_marshal_pinvoke(const t1876529626& unmarshaled, t1876529626_marshaled_pinvoke& marshaled);
extern "C" void t1876529626_marshal_pinvoke_back(const t1876529626_marshaled_pinvoke& marshaled, t1876529626& unmarshaled);
extern "C" void t1876529626_marshal_pinvoke_cleanup(t1876529626_marshaled_pinvoke& marshaled);

struct t1876529626;
struct t1876529626_marshaled_com;

extern "C" void t1876529626_marshal_com(const t1876529626& unmarshaled, t1876529626_marshaled_com& marshaled);
extern "C" void t1876529626_marshal_com_back(const t1876529626_marshaled_com& marshaled, t1876529626& unmarshaled);
extern "C" void t1876529626_marshal_com_cleanup(t1876529626_marshaled_com& marshaled);
