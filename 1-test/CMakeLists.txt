
project(test)

#添加C++11支持
add_definitions(-std=c++11)

#添加头文件搜索路径
include_directories(/usr/local/include)

#添加库文件搜索路径
link_directories(/usr/local/lib)

#用于将当前目录下的所有源文件的名字保存在变量 DIR_SRCS 中
aux_source_directory(. DIR_SRCS)

add_executable(test ${DIR_SRCS})

#在这里根据名字log4cpp寻找文件
target_link_libraries(test log4cpp pthread)
