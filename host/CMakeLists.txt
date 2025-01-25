cmake_minimum_required(VERSION 3.16)
project(esp-miner-host VERSION 0.1)

add_executable(esp-miner
    main.c
)

# If you depend on external libraries (e.g., pthread, etc.):
# find_package(Threads REQUIRED)
# target_link_libraries(my_project_host Threads::Threads)