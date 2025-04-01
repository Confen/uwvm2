﻿/********************************************************
 * Ultimate WebAssembly Virtual Machine (Version 2)     *
 * Copyright (c) 2025 MacroModel. All rights reserved.  *
 * Licensed under the APL-2 License (see LICENSE file). *
 ********************************************************/

/**
 * @author      MacroModel
 * @run     2.0.0
 * @date        2025-03-31
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

#include <memory>

#include <utils/macro/push_macros.h>
#include <utils/ansies/ansi_push_macro.h>

export module uwvm.cmdline.params:mode;

import fast_io;
import utils.io;
import utils.cmdline;

export namespace uwvm::cmdline::paras
{
    namespace details
    {
        inline bool mode_is_exist{};
        inline constexpr ::fast_io::u8string_view mode_alias{u8"-m"};
        extern "C++" ::utils::cmdline::parameter_return_type mode_callback(::utils::cmdline::parameter_parsing_results*,
                                                                           ::utils::cmdline::parameter_parsing_results*,
                                                                           ::utils::cmdline::parameter_parsing_results*) noexcept;

    }  // namespace details

    inline constexpr ::utils::cmdline::parameter mode{
        .name{u8"--mode"},
        .describe{u8"Select operation mode, (DEFAULT: objdump)."},
        .usage{u8"[objdump]"},
        .alias{::utils::cmdline::kns_u8_str_scatter_t{::std::addressof(details::mode_alias), 1}},
        .handle{::std::addressof(details::mode_callback)},
        .is_exist{::std::addressof(details::mode_is_exist)}};
}  // namespace uwvm::cmdline::paras
