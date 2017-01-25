#!/bin/bash
exec /usr/bin/ssh -o StrictHostKeyChecking=no -i "$(dirname $0)/deploy_key" "$@"
