workspace "libfathmath"
    configurations { "Debug", "Release" }
    platforms { "Win", "Mac", "Linux" }
    architecture "x64"

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"

    filter "platforms:Win"
        system "windows"
        defines { "FM_WINDOWS" }

    filter "platforms:Mac"
        system "macosx"
        defines { "FM_UNIX" }

    filter "platforms:Linux"
        system "linux"
        defines { "FM_LINUX" }

    filter "architecture:x32"
        defines { "FM_ARCH_32" }

    filter "architecture:x64"
        defines { "FM_ARCH_64" }

project "tests"
    language "C"
    targetdir "."
    kind "ConsoleApp"

    files { "tests/**.c" }
    includedirs { "include" }
