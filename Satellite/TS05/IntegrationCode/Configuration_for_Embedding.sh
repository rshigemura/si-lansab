#! /usr/bin/env bash
export UA_NODE=ts05

export APP_ID=5

export OBJDIR=./bin
export EXEC=UserApplication

export DF_SERVER_IP=161.24.9.14
export DF_SERVER_PORT=1230
let "DF_SERVER_PORT=DF_SERVER_PORT+$APP_ID"
export BROADCAST_GROUP=224.255.255.255
export BROADCAST_PORT=12340
export NETWORK_INTERFACE=161.24.9.105
