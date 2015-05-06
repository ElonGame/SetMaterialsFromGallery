﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct X509ChainElementEnumerator_t844;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t839;
// System.Collections.IEnumerable
struct IEnumerable_t641;

// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::.ctor(System.Collections.IEnumerable)
 void X509ChainElementEnumerator__ctor_m3550 (X509ChainElementEnumerator_t844 * __this, Object_t * ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::System.Collections.IEnumerator.get_Current()
 Object_t * X509ChainElementEnumerator_System_Collections_IEnumerator_get_Current_m3551 (X509ChainElementEnumerator_t844 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::get_Current()
 X509ChainElement_t839 * X509ChainElementEnumerator_get_Current_m3552 (X509ChainElementEnumerator_t844 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::MoveNext()
 bool X509ChainElementEnumerator_MoveNext_m3553 (X509ChainElementEnumerator_t844 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;