cmake_minimum_required ( VERSION 3.0 )

project ( "SoundFudge" )

set(SOUNDFUDGE_SRC
  "src/main.cc")


add_executable( "fudge" ${SOUNDFUDGE_SRC} )
