/********************************************************
 * Ultimate WebAssembly Virtual Machine (Version 2)     *
 * Copyright (c) 2025 MacroModel. All rights reserved.  *
 * Licensed under the APL-2 License (see LICENSE file). *
 ********************************************************/

/**
 * @author      MacroModel
 * @version     2.0.0
 * @date        2025-03-29
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

#include <utils/macro/push_macros.h>

#ifdef UWVM_SUPPORT_INSTALL_PATH
# include <fast_io.h>
# include <fast_io_driver/install_path.h>
#endif

#ifdef UWVM_MODULE
export module utils.install_path:install_path;
#endif

#ifdef UWVM_SUPPORT_INSTALL_PATH
# ifdef UWVM_MODULE
export
# endif
    namespace utils::install_path
{
    inline ::fast_io::install_path get_module_install_path_noexcept() noexcept
    {
        ::fast_io::install_path ret{};
# ifdef __cpp_exceptions
        try
# endif
        {
            ret = ::fast_io::get_module_install_path();
        }
# ifdef __cpp_exceptions
        catch(::fast_io::error)
        {
            // If you can't get the install path, do nothing!
        }
# endif
        return ret;
    }

}  // namespace utils::install_path
#endif
