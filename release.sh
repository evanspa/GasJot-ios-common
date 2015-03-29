#!/bin/bash

readonly version="$1"
readonly tagLabel=PEFuelPurchase-Common-v${version}

git tag -f -a $tagLabel -m 'version $version'
git push -f --tags
