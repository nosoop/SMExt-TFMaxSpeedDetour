/**
 * [TF2] CalculateMaxSpeed Detour
 * 
 * Provides a global forward that is called after CTFPlayer::TeamFortress_CalculateMaxSpeed()
 * is called, to allow updating the max speed.
 */

#if defined __tf2_calculatemaxspeed_detour_included
	#endinput
#endif

#define __tf2_calculatemaxspeed_detour_included

/**
 * Called after TF2 performs its max speed calculations.
 */
forward Action TF2_OnCalculateMaxSpeed(int client, float &flMaxSpeed);

/**
 * Do not edit below this line!
 */
public Extension __ext_tf2 = 
{
	name = "TF2 Calculate Max Speed Detour",
	file = "tf_calcmaxspeed.ext",
	autoload = 0,
#if defined REQUIRE_EXTENSIONS
	required = 1,
#else
	required = 0,
#endif
};
