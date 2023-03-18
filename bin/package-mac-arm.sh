#!/bin/bash

chmod +x bin/build-mac.sh
# bin/build-mac.sh "-DPACKAGE_DEMO_ARM64"
# bin/build-mac.sh "-DPACKAGE_SUPER_ARM64"
bin/build-mac.sh "-DPACKAGE_SUPER_ARM64_APP"
