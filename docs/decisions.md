# Decisions

Why things are the way they are. Newest at the bottom.

## 1. doctest + ctest for unit tests (#2, 2026-10-28)

I vendored doctest because it's a single header, so there's nothing to install or build,
unlike GoogleTest. ctest already comes with CMake and runs every registered test with one
command. Later the end-to-end tests will run through it too.
