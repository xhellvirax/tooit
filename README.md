# **Tooit Quiz**
Small quiz application forked and improved for Drupal 7

## Requirements

Drupal 7.65

## Folders

the folders contain the installable modules next to their dependencies, they are separated into custom, contribs and features modules



|      Contribs          |Custom|Features| 
|----------------|-------------------------------|-----------------------------|
|Entity - Features - Field Collection| Widget Fields FC Tooit - Tooit         |Quiz fields import            |




## Install

**Drupal Core**

Install a fresh installation to Drupal 7.65 version


**Enable the custom modules:**

**Tooit**
This module generates an API that returns the quiz nodes in json format, then the requests to the API are consumed through the vuejs framework and the axios library and with the answer the UI is built

**Widget Fields FC Tooit**
Create the field collections for a "Quiz" content type

**Quiz fields import**
Create the "Quiz" content type and setups

