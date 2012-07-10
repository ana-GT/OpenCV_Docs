# !/bin/bash

BUILD_FOLDER="../build"

echo "Building"
echo `sphinx-build -b html . ${BUILD_FOLDER}`
echo "End"