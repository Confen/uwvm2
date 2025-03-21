/********************************************************
 * Ultimate WebAssembly Virtual Machine (Version 2)     *
 * Copyright (c) 2025 MacroModel. All rights reserved.  *
 * Licensed under the APL-2 License (see LICENSE file). *
 ********************************************************/

/**
 * @file uwvm.cppm
 * @brief uwvm cpp main function
 * @author MacroModel
 * @version 2.0.0
 * @date 2025-03-20
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

/// @brief uwvm.crtmain:uwvm module declaration
export module uwvm.crtmain:uwvm;

/// @brief import fast_io module
import fast_io;

/// @brief import utils.io module
import utils.io;

/// @brief export uwvm namespace
export namespace uwvm
{
    /// @brief uwvm c++ main function
    /// @param argc Argument Count
    /// @param argv Argument Vector
    /// @return exit value
    /// @see main()
    inline int uwvm_main(int argc, char const* const* argv) noexcept
    {
        ::fast_io::io::perr(::uwvm::u8err, 5, u8"test\n");
        return 0;
    }
}  // namespace uwvm
