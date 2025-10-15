# simple_project
Explain Branching strategy 

This repository demonstrates the complete process of how source code moves from a developer’s local environment (server/laptop) to a Source Code Management (SCM) tool, and how it is periodically released to production.

## primary branches:##
production        -----> End user environment (LIVE env)
main              -----> Per-production env
Stagging          -----> CAT/UAT env
develop           -----> Testing/Quality env

## supporting branches: ##

feature          ------>
bugfix           ------>
issue            ------>
hotfix           ------>
