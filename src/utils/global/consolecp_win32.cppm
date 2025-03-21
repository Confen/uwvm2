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

module;
#include <cstdint>

/// @brief utils.global:consolecp_win32 module declaration
export module utils.global:consolecp_win32;

/// @brief import fast_io module
import fast_io;

export namespace uwvm
{
    /// @brief The ConsoleCP of Windows is affected by system environment variables.
    /// By setting SetConsoleCP and SetConsoleOutputCP, it can be unified to UTF-8.
    /// Additionally, RAII is used for management, ensuring that the settings are applied at the beginning of the program
    /// and restored upon termination to prevent permanent modifications to the console encoding, which could affect subsequent programs.
    /// @see https://learn.microsoft.com/en-us/windows/win32/intl/code-page-identifiers
    struct set_win32_console_io_cp_to_utf8
    {
        inline static constexpr ::std::uint_least32_t utf8_coding{65001u};  // utf8

        ::std::uint_least32_t output{};
        ::std::uint_least32_t input{};

#if __has_cpp_attribute(__gnu__::__cold__)
        [[__gnu__::__cold__]]
#endif
        set_win32_console_io_cp_to_utf8() noexcept
        {
            output = ::fast_io::win32::GetConsoleOutputCP();
            input = ::fast_io::win32::GetConsoleCP();
            if(output != utf8_coding) { ::fast_io::win32::SetConsoleOutputCP(utf8_coding); }
            if(input != utf8_coding) { ::fast_io::win32::SetConsoleCP(utf8_coding); }
        }

#if __has_cpp_attribute(__gnu__::__cold__)
        [[__gnu__::__cold__]]
#endif
        ~set_win32_console_io_cp_to_utf8()
        {
            if(output != utf8_coding) { ::fast_io::win32::SetConsoleOutputCP(output); }
            if(input != utf8_coding) { ::fast_io::win32::SetConsoleCP(input); }
        }
    };

}  // namespace uwvm
