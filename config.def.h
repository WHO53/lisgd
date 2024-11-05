char *device = "/dev/input/event2";

Gesture gestures[] = {
	/* nfingers  gesturetype  command */
	/* { 1,         SwipeLR,     EdgeLeft, DistanceAny, ActModeReleased, { .custom_func ={ example_custom_func, NULL } }, 1 }, */
	{ 1,         SwipeLR,     EdgeLeft, DistanceAny, ActModeReleased, "notify-send system", 0 },
};

