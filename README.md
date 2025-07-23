# Odin

**Odin** is a lightweight, self-contained C++ feature and platform detection library.  
It provides simple macros to conditionally enable functionality based on platform, architecture, compiler, and OS capabilities — with zero dependencies.

## Features

- Unified macros for platform and feature detection
- No runtime overhead
- Minimal, header-only design

## Example Usage

```cpp
#include <odin/config.h>

#if ODIN_PLATFORM_WINDOWS
    // Windows-specific logic
#elif ODIN_PLATFORM_POSIX
    // POSIX-compliant logic
#endif

#if ODIN_FEATURE_PTHREAD
    pthread_mutex_lock(&mutex);
#endif
```

## Supported Platforms

| Platform         | Macro                          | Description                            | Status       |
|------------------|--------------------------------|----------------------------------------|--------------|
| Windows          | `ODIN_PLATFORM_WINDOWS`        | Microsoft Windows (Win32/64)           | ✅ Supported |
| Linux            | `ODIN_PLATFORM_LINUX`          | Linux-based systems                    | ✅ Supported |
| macOS / iOS      | `ODIN_PLATFORM_APPLE`          | Apple platforms (Darwin-based)         | ✅ Supported |
| Android          | `ODIN_PLATFORM_ANDROID`        | Android NDK targets                    | ✅ Supported |
| Emscripten       | `ODIN_PLATFORM_EMSCRIPTEN`     | Browser or wasm32-unknown targets      | ✅ Supported |
| POSIX-compliant  | `ODIN_PLATFORM_POSIX`          | Generic POSIX systems (fallback)       | ✅ Supported |
