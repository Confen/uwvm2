﻿/********************************************************
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

module;

#include <utils/macro/push_macros.h>

#ifdef UWVM_SUPPORT_INSTALL_PATH
# include <fast_io.h>
# include <fast_io_driver/install_path.h>
#endif

export module utils.install_path:storage;
import :install_path;

#ifdef UWVM_SUPPORT_INSTALL_PATH
export namespace utils::install_path
{
    /// @brief Path to the program binary itself
    /// @details Only support to get by system parameter, not support to get by argv0, argv0 may be wrong
    inline ::fast_io::install_path install_path{get_module_install_path_noexcept()};  // No sequential side effects
}  // namespace utils::install_path
#endif
