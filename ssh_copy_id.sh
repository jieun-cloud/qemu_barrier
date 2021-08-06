#!/bin/bash
echo Type Port
read PORT

ssh-copy-id -i ~/.ssh/id_rsa.pub root@localhost -p ${PORT}
