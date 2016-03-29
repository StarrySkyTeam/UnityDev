#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3632007997;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1468494371  : public Il2CppObject
{
public:
	int32_t f0;
	t3632007997* f1;
	int32_t f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1468494371, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1468494371, f1)); }
	inline t3632007997* fg1() const { return f1; }
	inline t3632007997** fag1() { return &f1; }
	inline void fs1(t3632007997* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1468494371, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}
};

struct t1468494371_SFs
{
public:
	t3632007997* f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1468494371_SFs, f3)); }
	inline t3632007997* fg3() const { return f3; }
	inline t3632007997** fag3() { return &f3; }
	inline void fs3(t3632007997* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
