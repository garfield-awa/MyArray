cmake_minimum_required(VERSION 3.10.0)
project(MyArray VERSION 0.1.0 LANGUAGES C CXX)


file(REMOVE_RECURSE "${PROJECT_BINARY_DIR}/build") # 设置构建目录

include_directories(${PROJECT_SOURCE_DIR}/headers) # 指定头文件目录
aux_source_directory(${PROJECT_SOURCE_DIR}/sources SRC_LIST) # 指定源文件目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin) # 设置构建生成的二进制文件存储位置


add_executable(main ${SRC_LIST}) # 设置可执行的源文件




include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

