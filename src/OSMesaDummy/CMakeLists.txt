
#
# Name of Project
#
PROJECT(OSMesaDummy)

#
# Need Qt for reading from resource file.
#
INCLUDE(${QT_USE_FILE})

#
# Create a library
#
ADD_LIBRARY(OSMesaDummy
OSMesaDummy.h
OSMesaDummy.c
)

#
# Include directories
#
INCLUDE_DIRECTORIES(
${CMAKE_SOURCE_DIR}/Brain
${CMAKE_SOURCE_DIR}/OSMesaDummy
)
