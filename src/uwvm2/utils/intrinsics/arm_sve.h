/*************************************************************
 * Ultimate WebAssembly Virtual Machine (Version 2)          *
 * Copyright (c) 2025-present UlteSoft. All rights reserved. *
 * Licensed under the APL-2 License (see LICENSE file).      *
 *************************************************************/

/**
 * @file        prefetch.cppm
 * @brief       cpu prefetch instruction
 * @author      MacroModel
 * @version     2.0.0
 * @date        2025-05-16
 * @copyright   APL-2 License
 */

/****************************************
 *  _   _ __        ____     __ __  __  *
 * | | | |\ \      / /\ \   / /|  \/  | *
 * | | | | \ \ /\ / /  \ \ / / | |\/| | *
 * | |_| |  \ V  V /    \ V /  | |  | | *
 *  \___/    \_/\_/      \_/   |_|  |_| *
 *                                      *
 ****************************************/

#pragma once

#if defined(__ARM_FEATURE_SVE)

# ifdef UWVM_MODULE
// no import
# else
// std
#  include <cstddef>
#  include <cstdint>
// macro
#  include <uwvm2/utils/macro/push_macros.h>
# endif

# ifndef UWVM_MODULE_EXPORT
#  define UWVM_MODULE_EXPORT
# endif

UWVM_MODULE_EXPORT namespace uwvm2::utils::intrinsics::arm_sve
{
# if defined(__clang__)

    // clang-format off

    using svbool_t = __SVBool_t;
    using svuint8_t = __SVUint8_t;

    [[clang::__clang_arm_builtin_alias(__builtin_sve_svptrue_b8)]]
    [[__gnu__::__always_inline__]]
    [[__gnu__::__artificial__]]
    [[__gnu__::__nodebug__]]
    inline svbool_t svptrue_b8() noexcept;

    [[clang::__clang_arm_builtin_alias(__builtin_sve_svcmpne_u8)]]
    [[__gnu__::__always_inline__]]
    [[__gnu__::__artificial__]]
    [[__gnu__::__nodebug__]]
    inline svbool_t svcmpne_u8(svbool_t, svuint8_t, svuint8_t) noexcept;

    [[clang::__clang_arm_builtin_alias(__builtin_sve_svdup_n_u8)]]
    [[__gnu__::__always_inline__]]
    [[__gnu__::__artificial__]]
    [[__gnu__::__nodebug__]]
    [[clang::__overloadable__]]
    inline svuint8_t svdup_u8(::std::uint8_t) noexcept;

    [[clang::__clang_arm_builtin_alias(__builtin_sve_svptest_any)]]
    [[__gnu__::__always_inline__]]
    [[__gnu__::__artificial__]]
    [[__gnu__::__nodebug__]]
    inline bool svptest_any(svbool_t, svbool_t) noexcept;

    // clang-format on

# elif defined(__GNUC__)

    /* NOTE: This implementation of arm_sve.h is intentionally short.  It does
       not define the SVE types and intrinsic functions directly in C and C++
       code, but instead uses the following pragma to tell GCC to insert the
       necessary type and function definitions itself.  The net effect is the
       same, and the file is a complete implementation of arm_sve.h.  */

#  pragma GCC aarch64 "arm_sve.h"

# endif
}  // namespace uwvm2::utils::intrinsics::arm

# ifndef UWVM_MODULE
// macro
#  include <uwvm2/utils/macro/pop_macros.h>
# endif

#endif
