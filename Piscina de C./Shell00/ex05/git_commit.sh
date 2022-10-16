#!/bin/sh

id_commits=$(git log -5 --pretty=format:"%H")
echo "$id_commits"
