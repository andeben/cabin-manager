# Add executable called "helloDemo" that is built from the source files
# "demo.cxx" and "demo_b.cxx". The extensions are automatically found.
add_executable (CabinManager main.cpp ConnectionHandler.cpp)
set_property(TARGET CabinManager PROPERTY CXX_STANDARD 11)