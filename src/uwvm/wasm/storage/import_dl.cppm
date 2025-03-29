﻿/********************************************************
 * Ultimate WebAssembly Virtual Machine (Version 2)     *
 * Copyright (c) 2025 MacroModel. All rights reserved.  *
 * Licensed under the APL-2 License (see LICENSE file). *
 ********************************************************/

/**
 * @brief       Imported local dynamic libraries
 * @details     "--wasm-load-dl" or "-Wld"
 * @author      MacroModel
 * @version     2.0.0
 * @date        2025-03-28
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

export module uwvm.wasm.storage:import_dl;

#if UWVM_CAN_LOAD_DL

import fast_io;

export namespace uwvm::wasm::storage
{
    inline ::fast_io::vector<::fast_io::native_dll_file> import_dl_file{};

    // TODO: import_dl_func // The result of parsing the dl is used to add the import module directly.
}

#endif
