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


struct t709180306;
struct t709180306_marshaled_pinvoke;

extern "C" void t709180306_marshal_pinvoke(const t709180306& unmarshaled, t709180306_marshaled_pinvoke& marshaled);
extern "C" void t709180306_marshal_pinvoke_back(const t709180306_marshaled_pinvoke& marshaled, t709180306& unmarshaled);
extern "C" void t709180306_marshal_pinvoke_cleanup(t709180306_marshaled_pinvoke& marshaled);

struct t709180306;
struct t709180306_marshaled_com;

extern "C" void t709180306_marshal_com(const t709180306& unmarshaled, t709180306_marshaled_com& marshaled);
extern "C" void t709180306_marshal_com_back(const t709180306_marshaled_com& marshaled, t709180306& unmarshaled);
extern "C" void t709180306_marshal_com_cleanup(t709180306_marshaled_com& marshaled);
