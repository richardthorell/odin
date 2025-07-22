/*
 * Copyright (c) 2025 Richard Thorell Billing
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#pragma once

#include <odin/platform/posix.h>

/**
 * @brief Indicates whether the target platform is an Apple operating system.
 */
#define ODIN_PLATFORM_APPLE 1


#if defined(__IPHONE__) || TARGET_OS_IPHONE
    #define ODIN_PLATFORM_IPHONE 1
    #if TARGET_OS_IOS
        #define ODIN_PLATFORM_IOS 1
    #elif TARGET_OS_TV
        #define ODIN_PLATFORM_TVOS 1
    #elif TARGET_OS_WATCH
        #define ODIN_PLATFORM_WATCHOS 1
    #elif TARGET_OS_MACCATALYST
        #define ODIN_PLATFORM_MACCATALYST 1
    #endif

    #if TARGET_OS_SIMULATOR
        #define ODIN_PLATFORM_IPHONE_SIMULATOR 1
    #endif
#else
    #define ODIN_PLATFORM_OSX 1
#endif
