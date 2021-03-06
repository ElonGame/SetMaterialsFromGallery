﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t516;
// System.Object
struct Object_t;
// System.Single[]
struct SingleU5BU5D_t515;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
 void PCMReaderCallback__ctor_m2676 (PCMReaderCallback_t516 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
 void PCMReaderCallback_Invoke_m2677 (PCMReaderCallback_t516 * __this, SingleU5BU5D_t515* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
 Object_t * PCMReaderCallback_BeginInvoke_m2678 (PCMReaderCallback_t516 * __this, SingleU5BU5D_t515* ___data, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
 void PCMReaderCallback_EndInvoke_m2679 (PCMReaderCallback_t516 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
