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


struct t3076502791;
struct t3076502791_marshaled_pinvoke;

extern "C" void t3076502791_marshal_pinvoke(const t3076502791& unmarshaled, t3076502791_marshaled_pinvoke& marshaled);
extern "C" void t3076502791_marshal_pinvoke_back(const t3076502791_marshaled_pinvoke& marshaled, t3076502791& unmarshaled);
extern "C" void t3076502791_marshal_pinvoke_cleanup(t3076502791_marshaled_pinvoke& marshaled);

struct t3076502791;
struct t3076502791_marshaled_com;

extern "C" void t3076502791_marshal_com(const t3076502791& unmarshaled, t3076502791_marshaled_com& marshaled);
extern "C" void t3076502791_marshal_com_back(const t3076502791_marshaled_com& marshaled, t3076502791& unmarshaled);
extern "C" void t3076502791_marshal_com_cleanup(t3076502791_marshaled_com& marshaled);
