# Lab 5
[![Build Status](https://travis-ci.org/John-Jasper-Doe/Lab5.svg?branch=master)](https://travis-ci.org/John-Jasper-Doe/Lab5)
[ ![Download](https://api.bintray.com/packages/john-jasper-doe/otus-cpp/homeworks/images/download.svg?version=editor) ](https://bintray.com/john-jasper-doe/otus-cpp/homeworks/editor/link)

## Otus Developer C++ Course
Homework "Editor"

Manual: https://john-jasper-doe.github.io/Lab5/index.html

## About

This project was completed using the following design patterns:

- Model-View-Controller (MVC);
- Abstract factory.

The idea of the project is that the “Viewer” subscribes to the “Model” redrawing events, but since the “Viewer” is a GUI, it can still send messages to the “Controller” that the user has changed the tool or color ...

When the user selects the instrument, the “Viewer” informs the “Controller”, and he changes the “Model” and she notifies the listeners (“Spectator”) of her changes and asks to redraw the “Spectator”.
