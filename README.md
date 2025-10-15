# simple_project
Explain Branching strategy 

This repository demonstrates the complete process of how source code moves from a developer’s local environment (server/laptop) to a Source Code Management (SCM) tool, and how it is periodically released to production.

## primary branches:##
production        -----> End user environment (LIVE env)                     # This is the final and END user code for the application
main              -----> Per-production/Disaster Recovery (DR) env           # This is the env, i would use as a production backup env/server
Stagging          -----> CAT/UAT env                                         # This env is used to showcase the developmet activity/functionality to the customer/App owner
develop           -----> Testing/QA env                                      # This is the env, where the source code will get deployed for the first time for QA/Validation of functionalities/ performance of the application.

## supporting branches: ##

feature          ------>
bugfix           ------>
issue            ------>
hotfix           ------>
