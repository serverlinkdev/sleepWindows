# Sleep Windows!

A native windows c++ application that calls the Windows suspend command.  User will NOT be asked to confirm.  The PC will just go to sleep.



## Use Case:
- Can be called from command line, such as cmd.exe, msys2 or mingw. Useful if you remote into Windows via openssh, etc.
- Can be called from scripts
- Can be linked to from a Windows desktop file shortcut and placed in the taskbar, or start menu for convenience.


## Installation:

### Windows:
1. Download the compressed 'rar' file and 'asc' signature file and verify it really came from me.
2. You can run the exe from anywhere on your hard drive.  I've included the object files in case you ever need to 'relink' - advanced users.

## Using The Program
1. call the command from a terminal of your choice and the computer will go to sleep right away, without any prompts.


### Development:
Feature's are complete.  The release file is a 64 bit executable.  If 32 bit files are needed for release contact me at email below I will publish them on release page.


## To verify the release signature:

Command line user can retrieve the key with:

```
    you@yourpc:~$ gpg --recv --keyserver hkp://keys.openpgp.org B608A617D6ED8A550BB3040582DDE559E5877342 
    gpg: key 82DDE559E5877342: public key "serverlinkdev <serverlinkdev@gmail.com>" imported
    gpg: Total number processed: 1
    gpg:               imported: 1

    you@yourpc:~$ gpg --fingerprint B608A617D6ED8A550BB3040582DDE559E5877342
    pub   rsa2048 2020-04-17 [SC]
          B608 A617 D6ED 8A55 0BB3  0405 82DD E559 E587 7342
    uid           [ unknown] serverlinkdev <serverlinkdev@gmail.com>
    sub   rsa2048 2020-04-17 [E]
```

Windows users can use: [Gpg4win.org](https://gpg4win.org/index.html) .  When fetching the key be sure to specify the keyserver:``` hkp://keys.openpgp.org```
