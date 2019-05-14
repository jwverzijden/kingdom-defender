# Kingdom Defender Todo

the map has 2 kingdoms
each kingdom spawns a unit every turn
each kingdom can select a unit to spawn the next turn
each kingdom collects resources from buildings and some every turn
creating a building consumes the builder
fighters can form groups and have a hotkey 
mines and lumbermills use the builder to harvest resources

units:
 - speed    fast/moderate/slow
 - strength strong/moderate/weak
 - range    long/short/close
 - type     builder/fighter/knight/archer/trebuchet
|-----------|----------|----------|-------|
| type      | speed    | strength | range |
|-----------|----------|----------|-------|
| builder   | fast     | -        | -     |
|-----------|----------|----------|-------|
| fighter   | fast     | weak     | close |
| knight    | moderate | moderate | close |
|-----------|----------|----------|-------|
| archer    | moderate | moderate | short |
| trebuchet | slow     | strong   | long  |
|-----------|----------|----------|-------|

collectable resources:
 - gold
 - wood
 - stone
buildings:
 - house        build on flat lands
 - farm         build on flat lands
 - mine         build mountains
 - lumbermill   build near forrest


UI	// FIXME things need to be bigger!
at the top is a bar with resource totals and battery
at the bottom is bar with tabs for units, groups and menu
in the center the map, each pixel represents a type of land
the map window is 50px high and 96px wide, each info bar is 7px
the map is 150x100px or lands
a kingdom is a castle with a wall and some building area around it
the castle is a 3x3 square, the wall is a 2px line, buildings are 2x2
units are 1px

colors:
 - units	blue or red
 - castle	light gray
 - wall		brown
 - farm		yellow green
 - house	dark yellow
 - lumbermill	green brown?
 - mine		gray
 - grass	soft green
 - tree		dark green
 - water	light blue
 - rocks	dark gray

