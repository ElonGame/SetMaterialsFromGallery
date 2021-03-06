﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextReader
struct TextReader_t1254;
// System.Char[]
struct CharU5BU5D_t178;
// System.String
struct String_t;

// System.Void System.IO.TextReader::.ctor()
 void TextReader__ctor_m7361 (TextReader_t1254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::.cctor()
 void TextReader__cctor_m7362 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose()
 void TextReader_Dispose_m7363 (TextReader_t1254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose(System.Boolean)
 void TextReader_Dispose_m7364 (TextReader_t1254 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Peek()
 int32_t TextReader_Peek_m7365 (TextReader_t1254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read()
 int32_t TextReader_Read_m7366 (TextReader_t1254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t TextReader_Read_m7367 (TextReader_t1254 * __this, CharU5BU5D_t178* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadLine()
 String_t* TextReader_ReadLine_m7368 (TextReader_t1254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadToEnd()
 String_t* TextReader_ReadToEnd_m7369 (TextReader_t1254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.IO.TextReader::Synchronized(System.IO.TextReader)
 TextReader_t1254 * TextReader_Synchronized_m7370 (Object_t * __this/* static, unused */, TextReader_t1254 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
