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


struct t382951447;
struct t382951447_marshaled_pinvoke;

extern "C" void t382951447_marshal_pinvoke(const t382951447& unmarshaled, t382951447_marshaled_pinvoke& marshaled);
extern "C" void t382951447_marshal_pinvoke_back(const t382951447_marshaled_pinvoke& marshaled, t382951447& unmarshaled);
extern "C" void t382951447_marshal_pinvoke_cleanup(t382951447_marshaled_pinvoke& marshaled);

struct t382951447;
struct t382951447_marshaled_com;

extern "C" void t382951447_marshal_com(const t382951447& unmarshaled, t382951447_marshaled_com& marshaled);
extern "C" void t382951447_marshal_com_back(const t382951447_marshaled_com& marshaled, t382951447& unmarshaled);
extern "C" void t382951447_marshal_com_cleanup(t382951447_marshaled_com& marshaled);
