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


struct t2918369424;
struct t2918369424_marshaled_pinvoke;

extern "C" void t2918369424_marshal_pinvoke(const t2918369424& unmarshaled, t2918369424_marshaled_pinvoke& marshaled);
extern "C" void t2918369424_marshal_pinvoke_back(const t2918369424_marshaled_pinvoke& marshaled, t2918369424& unmarshaled);
extern "C" void t2918369424_marshal_pinvoke_cleanup(t2918369424_marshaled_pinvoke& marshaled);

struct t2918369424;
struct t2918369424_marshaled_com;

extern "C" void t2918369424_marshal_com(const t2918369424& unmarshaled, t2918369424_marshaled_com& marshaled);
extern "C" void t2918369424_marshal_com_back(const t2918369424_marshaled_com& marshaled, t2918369424& unmarshaled);
extern "C" void t2918369424_marshal_com_cleanup(t2918369424_marshaled_com& marshaled);
