﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t1211;
// Mono.Math.BigInteger
struct BigInteger_t1210;
// System.Object
struct Object_t;

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
 void SequentialSearchPrimeGeneratorBase__ctor_m6352 (SequentialSearchPrimeGeneratorBase_t1211 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
 BigInteger_t1210 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m6353 (SequentialSearchPrimeGeneratorBase_t1211 * __this, int32_t ___bits, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
 BigInteger_t1210 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m6354 (SequentialSearchPrimeGeneratorBase_t1211 * __this, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
 BigInteger_t1210 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m6355 (SequentialSearchPrimeGeneratorBase_t1211 * __this, int32_t ___bits, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
 bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m6356 (SequentialSearchPrimeGeneratorBase_t1211 * __this, BigInteger_t1210 * ___bi, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
