
aux_source_directory(. DIR_SRCS)
add_subdirectory(${PROJECT_SOURCE_DIR}/3rdparty/MMKV/POSIX/src mmkv)
add_executable(mmkv_test ${DIR_SRCS})
target_link_libraries(mmkv_test mmkv)