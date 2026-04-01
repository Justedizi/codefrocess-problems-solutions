#!/bin/bash
name=$1
SCRIPT_DIR=$(dirname "$(realpath "$0")")
cat "$SCRIPT_DIR/template" >$"$name.cpp"
