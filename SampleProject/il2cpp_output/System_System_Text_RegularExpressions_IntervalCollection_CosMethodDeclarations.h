﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.RegularExpressions.IntervalCollection/CostDelegate
struct CostDelegate_t525;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t47;
// System.AsyncCallback
struct AsyncCallback_t48;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Text_RegularExpressions_Interval.h"
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"

// System.Void System.Text.RegularExpressions.IntervalCollection/CostDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void CostDelegate__ctor_m1993 (CostDelegate_t525 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::Invoke(System.Text.RegularExpressions.Interval)
extern "C" double CostDelegate_Invoke_m1994 (CostDelegate_t525 * __this, Interval_t522  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" double pinvoke_delegate_wrapper_CostDelegate_t525(Il2CppObject* delegate, Interval_t522  ___i);
// System.IAsyncResult System.Text.RegularExpressions.IntervalCollection/CostDelegate::BeginInvoke(System.Text.RegularExpressions.Interval,System.AsyncCallback,System.Object)
extern "C" Object_t * CostDelegate_BeginInvoke_m1995 (CostDelegate_t525 * __this, Interval_t522  ___i, AsyncCallback_t48 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::EndInvoke(System.IAsyncResult)
extern "C" double CostDelegate_EndInvoke_m1996 (CostDelegate_t525 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
