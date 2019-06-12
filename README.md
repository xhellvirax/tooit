
# **Tooit Quiz**
Small quiz application forked and improved

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


**Enable the modules: Widget Fields FC Tooit, Tooit	 and Quiz fields import**

**Tooit**
This module generates an API that returns the quiz nodes in json format, then the requests to the API are consumed through the vuejs framework and the axios library and with the answer the UI is built

**Widget Fields FC Tooit**
Create the field collections for a "Quiz" content type

**Quiz fields import**
Create the "Quiz" content type and setups



## How does it work?
**Create the nodes**
Add a content Quiz and save

**Go the quizzes landing page and see the quizzes list**
http://nameyourproject/quiz

**Show me the API**
http://nameyourproject/quiz?quiz=nodeid






