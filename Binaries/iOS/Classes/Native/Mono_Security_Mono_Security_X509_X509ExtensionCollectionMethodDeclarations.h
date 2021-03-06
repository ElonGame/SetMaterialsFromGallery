﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t976;
// Mono.Security.X509.X509Extension
struct X509Extension_t842;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t829;
// System.Collections.IEnumerator
struct IEnumerator_t112;

// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
 void X509ExtensionCollection__ctor_m4704 (X509ExtensionCollection_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
 void X509ExtensionCollection__ctor_m4705 (X509ExtensionCollection_t976 * __this, ASN1_t829 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
 Object_t * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m4706 (X509ExtensionCollection_t976 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
 int32_t X509ExtensionCollection_IndexOf_m4707 (X509ExtensionCollection_t976 * __this, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
 X509Extension_t842 * X509ExtensionCollection_get_Item_m4317 (X509ExtensionCollection_t976 * __this, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
