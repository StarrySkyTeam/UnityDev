#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1312997718;

#include "t1312997718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3573803777  : public t1312997718
{
public:
	t1312997718 * f13;

public:
	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t3573803777, f13)); }
	inline t1312997718 * fg13() const { return f13; }
	inline t1312997718 ** fag13() { return &f13; }
	inline void fs13(t1312997718 * value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
