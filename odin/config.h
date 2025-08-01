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

#include <cstddef>

#if defined(__APPLE__) && __APPLE__
    #include <TargetConditionals.h>

    #if defined(__IPHONE__) || TARGET_OS_IPHONE
        #include <Availability.h>
    #else
        #include <AvailabilityMacros.h>
    #endif
#endif

#if defined(_MSC_VER)
    #include <winapifamily.h>
#endif

#if defined(__EMSCRIPTEN__)
    #include <odin/platform/emscripten.h>
#elif defined(__ANDROID__)
    #include <odin/platform/android.h>
#elif defined(__APPLE__) && __APPLE__
    #include <odin/platform/apple.h>
#elif defined(_WIN32) || defined(__WIN32__) || defined(__WINDOWS__)
    #include <odin/platform/windows.h>
#elif defined(linux) || defined(__linux) || defined(__linux__)
    #include <odin/platform/linux.h>
#else
    #error Unsupported platform
#endif
