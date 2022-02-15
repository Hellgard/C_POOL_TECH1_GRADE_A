#!/bin/bash

city="$1"
cut -d\; -f 3 | grep -c -i "$city"
