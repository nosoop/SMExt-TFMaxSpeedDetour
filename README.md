# TF2 Calculate Max Speed Detour

A one-off extension for Team Fortress 2 that allows plugins to override the result of getting a
player's max speed, without mucking about with `mult_player_movespeed` attributes that may be
in use.

Originally written for a weapon overhaul project that adds a bunch of new speed
modifying-behaviors, where applying attributes to change the speed would be cumbersome.

[DHooks with detours][] currently has issues with returning floating point values; otherwise
I'd probably be using that instead.

Only tested and verified against Linux.

[DHooks with detours]: https://forums.alliedmods.net/showpost.php?p=2588686&postcount=589

## Usage

You get the one forward:

```
forward Action TF2_OnCalculateMaxSpeed(int client, float &flMaxSpeed);
```

Initially, this contains the full speed amount after the game performs its calculations.
Manipulate it as desired; standard hook returns apply.

If you want to forcibly update a player's speed, create and perform an `SDKCall` to
`CTFPlayer::TeamFortress_SetSpeed()` and handle the change in the forward.
