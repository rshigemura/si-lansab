#! /usr/bin/env bash
set SCADE_PATH=../../../SCADE

set UA_NODE=Main

set APP_ID=1

set OBJDIR=./bin
set EXEC=UserApplication

set DF_SERVER_IP=127.0.0.1
set DF_SERVER_PORT=1230
let "DF_SERVER_PORT=DF_SERVER_PORT+$(APP_ID)"
set BROADCAST_GROUP=224.255.255.255
set BROADCAST_PORT=12340
set NETWORK_INTERFACE=127.0.0.1
