﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1312997718;
struct t3722401323;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2736090941  : public Il2CppObject
{
public:
	bool f0;
	t1312997718 * f1;
	t3722401323 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2736090941, f0)); }
	inline bool fg0() const { return f0; }
	inline bool* fag0() { return &f0; }
	inline void fs0(bool value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2736090941, f1)); }
	inline t1312997718 * fg1() const { return f1; }
	inline t1312997718 ** fag1() { return &f1; }
	inline void fs1(t1312997718 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2736090941, f2)); }
	inline t3722401323 * fg2() const { return f2; }
	inline t3722401323 ** fag2() { return &f2; }
	inline void fs2(t3722401323 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
