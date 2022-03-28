cmake_minimum_required (VERSION {{cookiecutter.cmake_version}})
project("{{cookiecutter.project_slug}}")

set(CMAKE_CXX_STANDARD {{cookiecutter.cxx_version}})

add_subdirectory(external)
add_subdirectory("{{cookiecutter.project_slug}}_lib")
add_subdirectory("{{cookiecutter.project_slug}}_main")