#!/bin/bash
exec /usr/bin/ssh -o StrictHostKeyChecking=no -i "$(basename $0)/deploy_key" "$@"
