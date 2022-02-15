#!/bin/bash

commitmsg="$1"
git add -A
git commit -m "$commitmsg" 
git push
