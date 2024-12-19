#===============================================================================
# See: https://llvm.org/docs/CMake.html#developing-llvm-passes-out-of-source
#===============================================================================
add_library(CGAnalyzer MODULE
    CGAnalyzer.cpp
    CGAnalyzerPlugin.cpp)

target_include_directories(CGAnalyzer PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/../include")