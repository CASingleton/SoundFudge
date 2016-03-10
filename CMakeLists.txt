cmake_minimum_required ( VERSION 3.0 )

project ( "SoundFudge" )

find_package(SDL REQUIRED)

set(SOUNDFUDGE_SRC
  "src/main.cc")


add_executable( "fudge" ${SOUNDFUDGE_SRC} )
