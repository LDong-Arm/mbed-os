# Copyright (c) 2020 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

if("NUCLEO_L433RC_P" IN_LIST MBED_TARGET_LABELS)
    target_include_directories(mbed-core INTERFACE TARGET_NUCLEO_L433RC_P)
    set(PERIPHERALPINS_FILE TARGET_NUCLEO_L433RC_P/PeripheralPins.c)
    set(SYSTEM_CLOCK_FILE system_clock.c)
endif()

if(${MBED_TOOLCHAIN} STREQUAL "GCC_ARM")
    set(STARTUP_FILE TOOLCHAIN_GCC_ARM/startup_stm32l433xx.S)
    set(LINKER_FILE TOOLCHAIN_GCC_ARM/stm32l433xc.ld)
elseif(${MBED_TOOLCHAIN} STREQUAL "ARM")
    set(STARTUP_FILE TOOLCHAIN_ARM/startup_stm32l433xx.S)
    set(LINKER_FILE TOOLCHAIN_ARM/stm32l433xc.sct)
endif()

set_property(GLOBAL PROPERTY MBED_TARGET_LINKER_FILE ${CMAKE_CURRENT_SOURCE_DIR}/${LINKER_FILE})

target_sources(mbed-core
    INTERFACE
        ${PERIPHERALPINS_FILE}
        ${STARTUP_FILE}
        ${SYSTEM_CLOCK_FILE}
)

target_include_directories(mbed-core
    INTERFACE
        .
)
