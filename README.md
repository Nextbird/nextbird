# Nextbird 2.0.0-beta

**This project is dead. Use [Cawbird](https://github.com/IBBoard/cawbird/) instead.**

In mid-August 2018, Twitter removed support for “streaming services”,
which means that Corebird can no longer receive push notifications or automatically refresh timelines as soon as new tweets arrive.
Since Twitter offers no viable alternative to the removed API,
the Corebird creator sees no future for the app:
see [this post](https://www.patreon.com/posts/corebirds-future-18921328) for more information.

Some Corebird users, on the other hand, wish to keep using Corebird:
even in its broken form, they prefer it to Twitter’s native clients.
This fork, **Nextbird**, therefore aimed to collect patches to improve the experience as much as possible.
Beware that the maintainers of this fork are not very familiar with the codebase,
and may have introduced new bugs while trying to fix other problems.
Please do not pester the original author with those problems
(or, at this point, with any other problems in Corebird, Nextbird, or Cawbird) –
it’s his good right to be done with the project.


[![Flattr the original repository](http://api.flattr.com/button/flattr-badge-large.png)](https://flattr.com/submit/auto?user_id=baedert&url=http://github.com/baedert/corebird&title=corebird&language=vala&tags=github&category=software)
[![Support the original author on Patreon](https://baedert.org/patreon-donate-yellow.svg)](https://patreon.com/baedert)

## Shortcuts

| Key                | Description                                                                                                                                 |
| :-----:            | :-----------                                                                                                                                |
| `Ctrl + t`         | Compose Tweet                                                                                                                               |
| `Back`             | Go one page back (this can be triggered via the back button on the keyboard, the back thumb button on the mouse or  `Alt + Left`)           |
| `Forward`          | Go one page forward (this can be triggered via the forward button on the keyboard, the forward thumb button on the mouse or  `Alt + Right`) |
| `Alt + num`        | Go to page `num` (between 1 and 7 at the moment)                                                                                            |
| `Ctrl + Shift + s` | Show/Hide topbar                                                                                                                            |
| `Ctrl + p`         | Show account settings                                                                                                                       |
| `Ctrl + k`         | Show account list                                                                                                                           |
| `Ctrl + Shift + p` | Show application settings                                                                                                                   |


  When a tweet is focused (via keynav):

  - `r`  - reply
  - `tt` - retweet
  - `f`  - favorite
  - `q`  - quote
  - `dd` - delete
  - `Return` - Show tweet details

## Translations

  Since February 2014, there's a [Corebird project on Transifex](https://www.transifex.com/projects/p/corebird).
  Presumably we’ll create a separate Nextbird project at some point.

## Contributing

  All contributions are welcome (artwork, design, code, just ideas, etc.) but if you're planning to
  actively change something bigger, talk to me first.


## Dependencies
 - `gtk+-3.0 >= 3.20`
 - `glib-2.0 >= 2.44`
 - `json-glib-1.0`
 - `sqlite3`
 - `libsoup-2.4`
 - `gettext >= 0.19.7`
 - `vala >= 0.28` (makedep)
 - `automake >= 1.14` (makedep)
 - `gst-plugins-base-1.0` (for playbin, disable via --disable-video)
 - `gst-plugins-bad-1.0 >= 1.6` (disable via --disable-video, default enabled)
 - `gst-plugins-good-1.0` (disable via --disable-video, default enabled)
 - `gst-libav-1.0` (disable via --disable-video, default enabled)
 - `gspell-1 >= 1.2` (for spellchecking, disable via --disable-spellcheck, default enabled)

Note that the above packages are just rough estimations, the actual package names on your distribution may vary.

If you pass `--disable-video` to the configure script, you don't need any gstreamer dependency but won't be able to view any videos.

## Compiling

```
./autogen.sh --prefix=/usr
make
make install
```

Nextbird installs its application icon into `/usr/share/icons/hicolor/`, so an appropriate call to `gtk-update-icon-cache` might be needed.
