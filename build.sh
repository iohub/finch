#!/bin/bash

gyp --depth=. finch.gyp -R finch
make
