/********************************************************
 * Ultimate WebAssembly Virtual Machine (Version 2)     *
 * Copyright (c) 2025 MacroModel. All rights reserved.  *
 * Licensed under the APL-2 License (see LICENSE file). *
 ********************************************************/

/**
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

/// @brief utils.global:tzset module declaration
export module utils.global:tzset;

/// @brief import fast_io module
import fast_io;

export namespace uwvm
{
    /// @brief Declare this via a global variable to get the correct timezone data when the program is run.
    struct tz_set_s
    {
        /// @brief The tzset() function initializes the tzname variable from the TZ environment variable.
        /// @see tzset(3)
#if __has_cpp_attribute(__gnu__::__cold__)
        [[__gnu__::__cold__]]
#endif
        tz_set_s() noexcept
        {
            ::fast_io::posix_tzset();
        }
    };
}  // namespace uwvm
