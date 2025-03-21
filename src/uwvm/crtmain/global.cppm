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

/// @brief uwvm.crtmain:global module declaration
export module uwvm.crtmain:global;

/// @brief import utils.global
import utils.global;

export namespace uwvm::global
{
    // This declares the rtti global variable

    /// @brief Automatically setup windows consolecp with ansi
#if (defined(_WIN32) || defined(__CYGWIN__)) && !defined(_WIN32_WINDOWS)
    inline ::uwvm::global::set_win32_console_io_cp_to_utf8 set_native_console_io_cp_to_utf8_ele{};
    inline ::uwvm::global::enable_win32_ansi enable_native_ansi_ele{};
#endif

    /// @brief Automatically get the correct timezone data 
    inline ::uwvm::global::tz_set_s tz_set_ele{};
}  // namespace uwvm
