#!/bin/bash
wget -P /tmp https://github.com/Akwesi-bonah/alx-low_level_programming/blob/master/0x18-dynamic_libraries/gemtest.so
export LD_PRELOAD=/tmp/gemtest.so
