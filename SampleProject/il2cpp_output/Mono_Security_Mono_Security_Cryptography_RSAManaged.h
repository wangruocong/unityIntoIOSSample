﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Math.BigInteger
struct BigInteger_t630;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t652;

#include "mscorlib_System_Security_Cryptography_RSA.h"

// Mono.Security.Cryptography.RSAManaged
struct  RSAManaged_t587  : public RSA_t566
{
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_2;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t630 * ___d_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t630 * ___p_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t630 * ___q_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t630 * ___dp_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t630 * ___dq_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t630 * ___qInv_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t630 * ___n_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t630 * ___e_13;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t652 * ___KeyGenerated_14;
};
