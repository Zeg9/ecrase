cmake_minimum_required(VERSION 2.6)

file(
	GLOB_RECURSE
	sources
	src/*.cpp
	src/*.h
)

find_package(SDL REQUIRED)
find_package(SDL_image REQUIRED)

link_libraries(
	${SDL_LIBRARY}
	${SDL_IMAGE_LIBRARY}
)

add_executable(
	ecrase
	${sources}
)
