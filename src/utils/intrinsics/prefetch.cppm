/********************************************************
 * Ultimate WebAssembly Virtual Machine (Version 2)     *
 * Copyright (c) 2025 MacroModel. All rights reserved.  *
 * Licensed under the APL-2 License (see LICENSE file). *
 ********************************************************/

/**
 * @file prefetch.cppm
 * @brief cpu prefetch instruction
 * @author MacroModel
 * @version 2.0.0
 * @date 2025-03-21
 * @copyright APL-2 License
 */

/****************************************
 *  _   _ __        ____     __ __  __  *
 * | | | |\ \      / /\ \   / /|  \/  | *
 * | | | | \ \ /\ / /  \ \ / / | |\/| | *
 * | |_| |  \ V  V /    \ V /  | |  | | *
 *  \___/    \_/\_/      \_/   |_|  |_| *
 *                                      *
 ****************************************/

module;

/// @brief Including intrin.h in the absence of __builtin_prefetch
#if !__has_builtin(__builtin_prefetch)
    #include <intrin.h>;
#endif

/// @brief utils.instrinsics:prefetch module declaration
export module uwvm.instrinsics:prefetch;

export namespace uwvm
{
    /// @brief Direct conversion to cpu prefetch instructions
    /// @param address address to be prefetched
    /// @see __builtin_prefetch and _mm_prefetch
    template <bool write = false, int level = 3>
#if __has_cpp_attribute(__gnu__::__artificial__)
    [[__gnu__::__artificial__]]
#endif
#if __has_cpp_attribute(__gnu__::__always_inline__)
    [[__gnu__::__always_inline__]]
#elif __has_cpp_attribute(msvc::forceinline)
    [[msvc::forceinline]]
#endif
    inline void
        prefetch(void const* address) noexcept
    {
#if __has_builtin(__builtin_prefetch)
        __builtin_prefetch(address, static_cast<int>(write), level);
#else
        ::_mm_prefetch(reinterpret_cast<char const*>(address), static_cast<int>(write) << 2 | level);
#endif
    }

}  // namespace uwvm
