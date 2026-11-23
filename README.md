# Personal keymaps

This is a repository containing key maps for custom split ergo keyboards that I have used.

This repo is forked from [QMK's userspace template](https://github.com/qmk/qmk_userspace).
See the [main QMK repository](https://github.com/qmk/qmk_firmware) for more information.

## Layout considerations

My intent when using a split keyboard is comfort over raw typing speed.  Thankfully, these two things tend to go hand in hand.  While not opposed to a number row up top, I find that stretching my fingers up to higher keys is more difficult than curling them down for lower ones.  Therefore neither of my daily drivers have a number row (plus I prefer to use a numpad anyway).

Another aspect that goes into my mapping decisions is the fact that I am a programmer. Therefore, numbers and symbols need to be easily accessible.  I found [Designing a Symbol Layer](https://getreuer.info/posts/keyboards/symbol-layer/index.html) by Pascal Getreuer to be very influential in deciding my symbol layers.  I blatantly copied his V1, and later his V2, symbol layers.

## Maintained Keyboards

### Charybdis

The Charybdis Mini by [BastardKB](https://bastardkb.com) is currently my daily driver at work.  It features a concave finger well for comfort and a full-size trackball for seamless switching between a pointing device and typing.  After using this keyboard, it is very difficult to go back to a board that doesn't have an integrated pointing device.

One unfortunate downside of the open frame design of the chassis is that the PCB is susceptible to electric shock if you angle your thumb off center.  I discovered this the hard way.  The good news is a quick solder job and an extra config header are enough to swap the pins to an unused one on the micro.

### Klor

The Klor by Geigeigeist is a feature-rich keyboard with splayed keys that better match the natural resting point of my fingers.  I keep this one at home when I don't need a full-size keyboard.

My config for the Klor features a custom animation on the right half of the keyboard.  A few years back, this [video](https://www.youtube.com/watch?v=ChmV64OPc6k) by [alekskrgt](https://github.com/aleksbrgt) went around, featuring a glitching transition between two still frames, one showing the Arasaka logo from the Cyberpunk universe and the other showing a QR code for more information. His [implementation](https://gist.github.com/aleksbrgt/48a8eb932dc1b6aa8f4b36ecd7c380d0) stored every frame of the animation as a full still image and then cycled through each still frame sequentially.

<img width="320" height="240" alt="output" src="https://github.com/user-attachments/assets/2023ce79-23c7-4391-806c-073f2d5e3522" />

I discovered that a very similar effect could be achieved by leveraging OLED scrolling functions already present in QMK.  My implementation allows for one to store as many bitmaps as desired and cycle between all of them using the same "glitch" effect, reducing the storage requirement at the cost of a less flashy animation.

## Others not included

I have collected a couple other keyboards that aren't in rotation right now.

 - Lily58
 - Sofle Choc
 - Killer Whale
 - Chocofi
