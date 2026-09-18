# OrderingSystem_SwitchCase

A simple console-based ordering system written in C++. The customer picks a menu
(Food, Desserts, or Drinks), chooses an item and quantity, then pays cash and
receives the change.

Originally a Code::Blocks exercise demonstrating `switch` statements.

## Features

- Three menus: Food, Desserts, and Drinks
- Choose an item by key (`a`/`b` or `1`/`2`)
- Enter a quantity, then pay with cash
- Displays the amount due and the change
- Order again or exit (improved version only)

## Project structure

```
OrderingSystem_SwitchCase/
├── main.cpp                  # all program logic
├── OrderingSystemSwitchCase.cbp  # Code::Blocks project file
├── bin/Debug/                # compiled executable
└── obj/Debug/                # build artifacts
```

## Building & running

Open `OrderingSystemSwitchCase.cbp` in Code::Blocks and press **Build and Run** (F9),
or compile from a terminal:

```
g++ main.cpp -o OrderingSystemSwitchCase
./OrderingSystemSwitchCase
```

## Branches

| Branch      | Description |
|-------------|-------------|
| `main`      | Original version (copy-pasted `switch` cases, some bugs) |
| `ai-improved` | Refactored version: fixes bugs, removes duplication, adds input validation and an order loop |

See the `ai-improved` branch for a commented version that is easier to study —
it explains *why* each change was made.
