#!/bin/bash

readonly version="$1"
readonly tagLabel=fuelpurchase-common-v${version}

git tag -f -a $tagLabel -m 'version $version'
git push -f --tags
