# Convo

Convo is a simple calculator app that was created with idea of first meeting with C++/CLI desktop application development, familiarizing with any C++ compatible framework and C++/CLI API communication.

# UI

## Top Menu

In top menu user can see 2 buttons and one label.

---

Label will always display current conversion, one of:

- Basic
- Length
- Weight
- Temperature
- Area
- Speed

---

On the far left side user will see `Hide/Show` button which will hide or show the [left menu](#left-menu) depending on width of main window. (is available if width is les than 600px).

---

On the far right side of top menu user can see "reload" button which when clicked will check applications connection to the [Convo-API](https://github.com/q-13t/Convo-API).
See [Features](#features) for more information.

## Left Menu

Menu on the left contains 6 buttons, each of them corresponds to distinct convertor:

- Basic
- Length
- Weight
- Temperature
- Area
- Speed

---

All buttons except `Basic` will be enactive when application has no connection to the [Convo-API](https://github.com/q-13t/Convo-API)
See [API](#api) for more information.

## Main Panel

In this panel the main user interaction is happening.

Here user can see 2 labels:

- Top most label indicates previous user input number and action.
- Label on the bottom will display currently entered number and result upon receiving result of calculation.

Also user will be greeted with basic numeric keyboard, CE, C and ⇐ buttons:

- CE (Clear Everything) button upon clicking will erase all data within applications internal memory meaning that previously entered numbers and actions will be forgotten.
- C (Clear) button will clear number that was entered into "input".
- ⇐ (Erase) will erase last digit of entered number from "input".

---

### Basic

In `basic` mode user is presented with "basic" calculator that allows operations like: addition, subtraction, multiplication and division. As well as empowering numbers to power 2, extracting square root of 2, dividing 1 by the number and checking is number is `odd` or `even`.

### Conversion

In this view user can convert different measurement values that were selected in [Left Menu](#left-menu).
Here user can see 2 additional drop boxes containing corresponding to conversion units.
See [Units](#units) for more information.

---

# Features

## API

Upon starting the application will check if there is connection to the [Convo-API](https://github.com/q-13t/Convo-API). If there is no connection all [Left Menu](#left-menu) buttons except `Basic` will become gray and unavailable.

## Units

Here are listed units available for conversion in each measurement values.

### Area

Allows users to convert areas in units like:

- Millimeter
- Centimeter
- Meter
- Acre
- Hectare
- Kilometer
- Inch
- Feet
- Yard
- Mile

---

### Speed

Allows users to convert speeds in units like:

- Meters Per Second
- Centimeters Per Second
- Kilometers Per Hour
- Feet Per Second
- Miles Per Hour
- Knots
- Mach (SI standard)

---

### Length

Allows users to convert lengths in units like:

- Millimeter
- Centimeter
- Decimeter
- Meter
- Kilometer
- Inch
- Feet
- Yard
- Mile

---

### Weight

Allows users to convert weights in units like:

- Milligram
- Gram
- Kilogram
- Ton
- Ounce
- Pound

---

### Temperature

Allows users to convert temperatures in units like:

- Celsius
- Fahrenheit
- Kelvin

---
## Dynamic Resizing
In case if user has stretched main widow the content will also stretch as well as reformating if window size is greater than 680px. In that case keyboard will dock itself to right and labels will dock themselves to the left.
___
## Keyboard Input
If user prefers to use numerical or normal keyboard - application allows user to enter numbers and operations directly.
# Usage
It's a calculator what can I also add?
# Post Scriptum
Overall this application turned out a lot better than I expected. There definitely are some hidden bugs to fix or functions to optimize, but since I haven't spotted them I consider this project `FINISHED` and I may or may not fix then. As a general meeting with C++ I consider this a success!