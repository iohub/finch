# Filename : CMakeLists.txt
# Author   : Zac Brown <zac@zacbrown.org>
# Date     : 06.27.2010

cmake_minimum_required(VERSION 2.8)
project(finch)

include_directories(
            ${CMAKE_SOURCE_DIR}/src 
            ${CMAKE_SOURCE_DIR}/src/Base 
			${CMAKE_SOURCE_DIR}/src/Compiler
			${CMAKE_SOURCE_DIR}/src/Interpreter
			${CMAKE_SOURCE_DIR}/src/Interpreter/Objects 
			${CMAKE_SOURCE_DIR}/src/Interpreter/Primitives
			${CMAKE_SOURCE_DIR}/src/Syntax
			${CMAKE_SOURCE_DIR}/src/Syntax/AST)

add_subdirectory(src)