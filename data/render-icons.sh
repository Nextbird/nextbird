#!/bin/bash

# Oh god I hate bash.

sizes=(16  24 32 48 64 96 128 256)

for size in ${sizes[@]}
do
  rsvg-convert ./nextbird.svg --width="${size}" --height="${size}" \
               --format=png -o "./hicolor/${size}x${size}/nextbird.png"
done
