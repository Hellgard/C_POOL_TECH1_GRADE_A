#!/bin/bash

find . -type f -not -path '*.git*' | wc -l
