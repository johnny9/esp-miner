cmake_minimum_required(VERSION 3.5)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
set(COMPONENTS main)

set(IDF_TARGET "linux")

project(esp-miner-host)