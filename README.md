# Spaceduck terminal theme 🚀🦆

A intergalactic space theme for your terminal! This is the spaceduck repo for terminal themes. If you're looking for other applications here's the link to the [spaceduck home](https://github.com/pineapplegiant/spaceduck).

<center>
  <img  src="./img/iTerm.png" alt="Terminal screenshot of iTerm2 terminal with neofetch program ran">
</center>

**Color Disclaimer:**

I've personally swapped the yellow and purple colors in most terminal themes.
This is a personal preference as I've found it to render the colorscheme how I like since Spaceduck is dark purple oriented. Feel free to change the colorscheme locally to be more semantically correct! I'm open to change the repo here if any bugs are found however.
Take a look at [this thread](https://github.com/pineapplegiant/spaceduck-terminal/pull/2) to see the visual differences at this change.

## Currently Ported Terminals

- [Iterm2](#iterm2)
- [Terminal.app MacOS](#terminalapp-macos)
- [Alacritty](#alacritty)
- [Kitty](#kitty)
- [st](#st)
- [Windows Terminal](#windows-terminal)
- [Tmux](#tmux)
- [Konsole](#konsole)
- [Termux](#termux)


## Iterm2

To get the theme into [Iterm](https://iterm2.com/), download the `spaceduck.itermcolors` file and [import it into your settings](https://iterm2colorschemes.com/).

## Terminal.app MacOS

To get the theme into the [Mac Terminal app](<https://en.wikipedia.org/wiki/Terminal_(macOS)>), download the `spaceduck.terminal` file and import it into your settings.

## Alacritty

The color scheme for [Alacritty](https://github.com/alacritty/alacritty) is in the `spaceduck.yml` file or you can copy it here!

```YAML
# Space Duck
colors:
  # Default colors
  primary:
    background: '#0f111b'
    foreground: '#ecf0c1'
  # Normal colors
  normal:
    black:   '#000000'
    red:     '#e33400'
    green:   '#5ccc96'
    yellow:  '#b3a1e6'
    blue:    '#00a3cc'
    magenta: '#f2ce00'
    cyan:    '#7a5ccc'
    white:   '#686f9a'

  # Bright colors
  bright:
    black:   '#686f9a'
    red:     '#e33400'
    green:   '#5ccc96'
    yellow:  '#b3a1e6'
    blue:    '#00a3cc'
    magenta: '#f2ce00'
    cyan:    '#7a5ccc'
    white:   '#f0f1ce'
```
## st
The color theme for [st](https://st.suckless.org/) is located in `spaceduck.h`, open `config.h` (usually in `~/.local/src/st`), search for `static const char *colorname`, delete that part of the configuration until `unsigned int defaultcs = 257;` replace that with the content of `spaceduck.h`, save the file and exit your editor, then run `sudo make install` where st is located to recompile it, close the terminal and launch the terminal again and _voila!_, you should have spaceduck up and running!

## Kitty

The Color theme for [Kitty](https://sw.kovidgoyal.net/kitty/) is in the `spaceduck.conf` file or you can copy it here!

```YAML
  background #0f111b
  foreground #ecf0c1
  cursor #ecf0c1
  selection_background #686f9a
  color0 #000000
  color8 #686f9a
  color1 #e33400
  color9 #e33400
  color2 #5ccc96
  color10 #5ccc96
  color3 #b3a1e6
  color11 #b3a1e6
  color4 #00a3cc
  color12 #00a3cc
  color5 #f2ce00
  color13 #f2ce00
  color6 #7a5ccc
  color14 #7a5ccc
  color7 #686f9a
  color15 #f0f1ce
  selection_foreground #ffffff
```

## Windows Terminal

Color theme is in the `spaceduck_windowsterminal.json` file or you can copy it here! Put it in your [Windows Terminal](https://docs.microsoft.com/en-us/windows/terminal/customize-settings/profile-settings) settings.json

```JSON
"schemes": [
        {
            "name": "SpaceDuck",
            "foreground": "#ecf0c1",
            "background": "#0f111b",
            "black": "#000000",
            "red": "#e33400",
            "green": "#5ccc96",
            "yellow": "#b3a1e6",
            "blue": "#00a3cc",
            "purple": "#f2ce00",
            "cyan": "#7a5ccc",
            "white": "#686f9a",
            "brightBlack": "#686f9a",
            "brightRed": "#e33400",
            "brightGreen": "#5ccc96",
            "brightYellow": "#b3a1e6",
            "brightBlue": "#00a3cc",
            "brightPurple": "#f2ce00",
            "brightCyan": "#7a5ccc",
            "brightWhite": "#f0f1ce"
        }
```

## Tmux

You can go ahead and check out [readme for tmux here](./tmux/README.md).

But if you're too lazy to click the link you can put this in your tmux.conf for an easy spaceduck themed bottom bar:

```tmux
  # Basic color support setting
  set-option -g default-terminal "screen-256color"

  # Default bar color
  set-option -g status-style bg='#1b1c36',fg='#ecf0c1'

  # Active Pane
  set -g pane-active-border-style "fg=#5ccc96"

  # Inactive Pane
  set -g pane-border-style "fg=#686f9a"

  # Active window
  set-option -g window-status-current-style bg='#686f9a',fg='#ffffff'

  # Message
  set-option -g message-style bg='#686f9a',fg='#ecf0c1'
  set-option -g message-command-style bg='#686f9a',fg='#ecf0c1'

  # When Commands are run
  set -g message-style "fg=#0f111b,bg=#686f9a"
```

## Konsole

Copy `spaceduck.colorscheme` to the `.local/share/konsole/`. After that run `konsoleprofile colors="spaceduck"` OR in Konsole's settings navigate to `Configure Konsole...` > `Profiles` > Select your active profile e.g. `Shell (Default)` > `Edit...` > `Appearence` > Find and select `SpaceDuck` in the `Color scheme & font` > Press `Apply`.

## Termux

Copy `spaceduck.properties` file to the `~/.termux/` and rename it to `colors.properties`. After that exit Termux's session and launch it again.
Note: if you have Termux:Styling plugin installed - changing color scheme with it will overwrite `colors.properties` file with selected theme.

