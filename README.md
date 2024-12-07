# GBDK Playground

It has 16 kB of RAM, man.

## Build Requirements

Make sure to set the `GBDKDIR` environment variable pointing to your GBDK installation directory. The Makefile relies on this variable to locate the GBDK compiler and tools.

## Samples
|           [Blank](blank)           |           [Hello World](hello_world)           |           [Small Sprite](small_sprite)           |
| :--------------------------------: | :--------------------------------------------: | :----------------------------------------------: |
| [![](blank/screenshot.png)](blank) | [![](hello_world/screenshot.png)](hello_world) | [![](small_sprite/screenshot.png)](small_sprite) |
|       Minimum required code        |              Print `Hello World!`              |             Render small 8x8 sprite              |

|           [Big Sprite](big_sprite)           |           [Big Sprite Animation](big_sprite_animation)           |           [Input State](input_state)           |
| :------------------------------------------: | :--------------------------------------------------------------: | :--------------------------------------------: |
| [![](big_sprite/screenshot.png)](big_sprite) | [![](big_sprite_animation/screenshot.gif)](big_sprite_animation) | [![](input_state/screenshot.png)](input_state) |
|           Render big 16x16 sprite            |                     Animate big 16x16 sprite                     |               Read joypad state                |

|           [Input Wait](input_wait)           |           [Move Sprite](move_sprite)           |           [Background](background)           |
| :------------------------------------------: | :--------------------------------------------: | :------------------------------------------: |
| [![](input_wait/screenshot.png)](input_wait) | [![](move_sprite/screenshot.gif)](move_sprite) | [![](background/screenshot.png)](background) |
|            Wait for button input             |           Move a sprite using joypad           |       Render a full-screen background        |

|           [Window](window)           |           [Beep](beep)           |           [Simple SHMUP](simple_shmup)           |
| :----------------------------------: | :------------------------------: | :----------------------------------------------: |
| [![](window/screenshot.png)](window) | [![](beep/screenshot.png)](beep) | [![](simple_shmup/screenshot.png)](simple_shmup) |
|           Renders a window           |           Make a sound           |                Very simple SHMUP                 |

|           [Huge Sprite](huge_sprite)           |           [Drawing](drawing)           |        [Detect GB Type](detect_gb)         |
| :--------------------------------------------: | :------------------------------------: | :----------------------------------------: |
| [![](huge_sprite/screenshot.png)](huge_sprite) | [![](drawing/screenshot.png)](drawing) | [![](detect_gb/screenshot.png)](detect_gb) |
|          Renders a huge 40x64 sprite           |       Built-in drawing functions       |       Detect which GB is being used        |

|           [Save RAM](save_ram)           |           [Font](font)           |            [Link](link)            |
| :--------------------------------------: | :------------------------------: | :--------------------------------: |
| [![](save_ram/screenshot.png)](save_ram) | [![](font/screenshot.png)](font) |  [![](link/screenshot.png)](link)  |
|           Save/load variables            |         Load a new font          | Send/Receive data using link cable |

|           [Color](color)           |                        More coming soon...                         |
| :--------------------------------: | :----------------------------------------------------------------: |
| [![](color/screenshot.png)](color) | [![](docs/res/more_coming_soon.png)](https://gbdev.io/list.html#c) |
|  Use palettes for Game Boy Color   |                     Contributions are welcome!                     |
