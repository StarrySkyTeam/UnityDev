#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1468494371;

#include "t1468494371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3558537360  : public t1468494371
{
public:
	t1468494371 * f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3558537360, f4)); }
	inline t1468494371 * fg4() const { return f4; }
	inline t1468494371 ** fag4() { return &f4; }
	inline void fs4(t1468494371 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
