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


struct t3686309949;
struct t3686309949_marshaled_pinvoke;

extern "C" void t3686309949_marshal_pinvoke(const t3686309949& unmarshaled, t3686309949_marshaled_pinvoke& marshaled);
extern "C" void t3686309949_marshal_pinvoke_back(const t3686309949_marshaled_pinvoke& marshaled, t3686309949& unmarshaled);
extern "C" void t3686309949_marshal_pinvoke_cleanup(t3686309949_marshaled_pinvoke& marshaled);

struct t3686309949;
struct t3686309949_marshaled_com;

extern "C" void t3686309949_marshal_com(const t3686309949& unmarshaled, t3686309949_marshaled_com& marshaled);
extern "C" void t3686309949_marshal_com_back(const t3686309949_marshaled_com& marshaled, t3686309949& unmarshaled);
extern "C" void t3686309949_marshal_com_cleanup(t3686309949_marshaled_com& marshaled);
