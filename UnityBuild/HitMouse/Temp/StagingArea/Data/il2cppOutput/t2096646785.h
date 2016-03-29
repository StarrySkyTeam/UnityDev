#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2981625813;

#include "t561867040.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2096646785  : public t561867040
{
public:
	t2981625813 * f10;
	float f11;
	float f12;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t2096646785, f10)); }
	inline t2981625813 * fg10() const { return f10; }
	inline t2981625813 ** fag10() { return &f10; }
	inline void fs10(t2981625813 * value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t2096646785, f11)); }
	inline float fg11() const { return f11; }
	inline float* fag11() { return &f11; }
	inline void fs11(float value)
	{
		f11 = value;
	}

	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t2096646785, f12)); }
	inline float fg12() const { return f12; }
	inline float* fag12() { return &f12; }
	inline void fs12(float value)
	{
		f12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
