#include "setting_descriptions.hpp"

//Setting descriptions are mostly copied from OoT Randomizer tooltips with minor edits

/*------------------------------
|            LOGIC             |                           *SCREEN WIDTH*
------------------------------*/       /*--------------------------------------------------*/
std::string_view logicGlitchless      = "No glitches are required, but may require some\n" //
                                        "minor tricks. Add minor tricks to consider for\n" //
                                        "logic in Detailed Logic Settings.";               //
std::string_view logicNoLogic         = "Maximize randomization, All locations are\n"      //
                                        "considered available. MAY BE IMPOSSIBLE TO BEAT.";//
/*------------------------------                                                           //
|           FOREST             |                                                           //
------------------------------*/                                                           //
std::string_view forestOpen           = "Mido no longer blocks the path to the Deku Tree,\n"
                                        "and the Kokiri boy no longer blocks the path out\n"
                                        "of the forest.";                                  //
std::string_view forestClosed         = "Beating Deku Tree is logically required to leave\n"
                                        "the forest area (Kokiri Forest/Lost Woods/Sacred\n"
                                        "Forest Meadow/Deku Tree), while the Kokiri Sword\n"
                                        "and a Deku Shield are required to access the Deku\n"
                                        "Tree. Items needed for this will be guaranteed\n" //
                                        "inside the forest area. This setting is\n"        //
                                        "incompatible with starting as adult.";            //
/*------------------------------                                                           //
|        KAKARIKO GATE         |                                                           //
------------------------------*/                                                           //
std::string_view kakGateOpen          = "The gate is always open instead of needing\n"     //
                                        "Zelda's Letter. The Happy Mask Shop opens upon\n" //
                                        "obtaining Zelda's Letter without needing to show\n"
                                        "it to the guard.";                                //
std::string_view kakGateClosed        = "The gate and the Happy Mask Shop both remain\n"   //
                                        "closed until showing Zelda's Letter to the guard\n"
                                        "in Kakariko.";                                    //
/*------------------------------                                                           //
|        DOOR OF TIME          |                                                           //
------------------------------*/                                                           //
std::string_view doorOfTimeDesc       = "The Door of Time starts opened instead of needing\n"
                                        "to play the Song of Time. If closed, only an\n"   //
                                        "Ocarina and the Song of Time need to be found to\n"
                                        "open the Door of Time";                           //
/*------------------------------                                                           //
|       ZORA'S FOUNTAIN        |                                                           //
------------------------------*/                                                           //
std::string_view fountainNormal       = "King Zora obstructs the way to Zora's Fountain.\n"//
                                        "Ruto's Letter must be shown as child in order to\n"
                                        "move him for both eras.";                         //
std::string_view fountainOpen         = "King Zora starts as moved in both the child and\n"//
                                        "adult eras. This also removes Ruto's Letter from\n"
                                        "the pool since it can't be used.";                //
/*------------------------------                                                           //
|       GERUDO FORTRESS        |                                                           //
------------------------------*/                                                           //
std::string_view gerudoNormal         = "All 4 carpenters can be rescued.";                //
std::string_view gerudoFast           = "Only the bottom left carpenter must be rescued."; //
std::string_view gerudoOpen           = "The carpenters are rescued from the start of the\n"
                                        "game, and if Shuffle Gerudo Card is disabled,\n"  //
                                        "the player starts with the Gerudo Card in the\n"  //
                                        "inventory allowing access to Gerudo Training\n"   //
                                        "Grounds.";                                        //
/*------------------------------                                                           //
|        RAINBOW BRIDGE        |                                                           //
------------------------------*/                                                           //
std::string_view bridgeOpen           = "The Rainbow Bridge is always present.";           //
std::string_view bridgeVanilla        = "The Rainbow Bridge requires Shadow and Spirit\n"  //
                                        "Medallions.";                                     //
std::string_view bridgeStones         = "The Rainbow Bridge requires the Kokiri's Emerald,\n"
                                        "Goron's Ruby and Zora's Sapphire.";               //
std::string_view bridgeMedallions     = "The Rainbow Bridge requires Forest, Fire, Water,\n"
                                        "Shadow, Spirit, and Light Medallions";            //
std::string_view bridgeDungeons       = "The Rainbow Bridge requires beating every dungeon.";
                                                                                           //
/*------------------------------                                                           //
|         STARTING AGE         |                                                           //
------------------------------*/                                                           //
std::string_view ageDesc              = "Choose which age Link will start as.\n"           //
                                        "\n"                                               //
                                        "Starting as adult means you start with the Master\n"
                                        "Sword in your inventory.\n"                       //
                                        "\n"                                               //
                                        "Only the child option is compatible with Closed\n"//
                                        "Forest.";                                         //
/*------------------------------                                                           //
|      BOMBCHUS IN LOGIC       |                                                           //
------------------------------*/                                                           //
std::string_view bombchuLogicDesc     = "Bombchus are properly considered in logic and\n"  //
                                        "bombchu drops can appear similar to bomb drops.\n"//
                                        "\n"                                               //
                                        "Bombchu Bowling is opened by bombchus.";          //
/*------------------------------                                                           //
|      RANDOM MQ DUNGEONS      |                                                           //
------------------------------*/                                                           //
std::string_view randomMQDungeonsDesc = "If set, a random number of dungeons will have\n"  //
                                        "Master Quest designs";                            //
                                                                                           //
/*------------------------------                                                           //
|         MIRROR WORLD         |                                                           //
------------------------------*/                                                           //
std::string_view mirrorWorldDesc      = "If set, the world will be mirrored.";             //
                                                                                           //
/*------------------------------                                                           //
|         SONG SHUFFLE         |                                                           //
------------------------------*/                                                           //
std::string_view songsSongLocations   = "Songs will only appear at locations that normally\n"
                                        "teach songs.";                                    //
std::string_view songsAllLocations    = "Songs can appear in any location.";               //
                                                                                           //
/*------------------------------                                                           //
|         TOKENSANITY          |                                                           //
------------------------------*/                                                           //
std::string_view tokensVanilla        = "Gold Skulltula Tokens will appear after defeating\n"
                                        "Gold Skulltulas.";                                //
std::string_view tokensAllLocations   = "Gold Skulltula Tokens can appear anywhere.";      //
                                                                                           //
/*------------------------------                                                           //
|        SCRUB SHUFFLE         |                                                           //
------------------------------*/                                                           //
std::string_view scrubsOff            = "Only the 3 Scrubs that give one-time items in the\n"
                                        "vanilla game (PoH, Deku Nut capacity, and Deku\n" //
                                        "Stick capacity) will have random items.";         //
std::string_view scrubsAffordable     = "All Scrub prices will be reduced to 10 rupees each";
std::string_view scrubsExpensive      = "All Scrub prices will be their vanilla prices.\n" //
                                        "This will require spending over 1000 rupees on\n" //
                                        "Scrubs.";                                         //
std::string_view scrubsRandomPrices   = "All Scrub prices will be between 0-99 rupees. This"
                                        "will on average be very, very expensive overall.";//
/*------------------------------                                                           //
|         SHUFFLE COWS         |                                                           //
------------------------------*/                                                           //
std::string_view shuffleCowsDesc      = "Enabling this will let cows give you items upon\n"//
                                        "performing Epona's song in front of them. There\n"//
                                        "are 9 cows, and an extra in MQ Jabu.";            //
                                                                                           //
/*------------------------------                                                           //
|     SHUFFLE KOKIRI SWORD     |                                                           //
------------------------------*/                                                           //
std::string_view kokiriSwordDesc      = "Enabling this shuffles the Kokiri Sword into the\n"
                                        "item pool.\n"                                     //
                                        "\n"                                               //
                                        "This will require extensive use of sticks until\n"//
                                        "the sword is found.";                             //
/*------------------------------                                                           //
|       SHUFFLE OCARINAS       |                                                           //
------------------------------*/                                                           //
std::string_view ocarinasDesc         = "Enabling this shuffles the Fairy Ocarina and the\n"
                                        "Ocarina of Time into the item pool.\n"            //
                                        "\n"                                               //
                                        "This will require finding an Ocarina before being\n"
                                        "able to play songs.";                             //
/*------------------------------                                                           //
|      SHUFFLE WEIRD EGG       |                                                           //
------------------------------*/                                                           //
std::string_view weirdEggDesc         = "Enabling this shuffles the Weird Egg from Malon\n"//
                                        "into the item pool.\n"                            //
                                        "This will require finding the Weird Egg to talk to"
                                        "Zelda in Hyrule Castle, which in turn locks\n"    //
                                        "rewards from Impa, Saria, Malon, and Talon, as\n" //
                                        "well as the Happy Mask Sidequest. The Weird Egg is"
                                        "also required for Zelda's Letter to unlock the\n" //
                                        "Kakariko Gate as child which can lock some\n"     //
                                        "progression";                                     //
/*------------------------------                                                           //
|     SHUFFLE GERUDO TOKEN     |                                                           //
------------------------------*/                                                           //
std::string_view gerudoTokenDesc      = "Enabling this shuffles the Gerudo Token into the\n"
                                        "item pool.\n"                                     //
                                        "\n"                                               //
                                        "The Gerudo Token is required to enter the Gerudo\n"
                                        "Training Ground.";                                //
/*------------------------------                                                           //
|      SHUFFLE MAGIC BEANS     |                                                           //
------------------------------*/                                                           //
std::string_view magicBeansDesc       = "Enabling this adds a pack of 10 beans to the item\n"
                                        "pool and changes the Magic Bean Salesman to sell a"
                                        "random item at a price of 10 rupees.";            //
/*------------------------------                                                           //
|      MAPS AND COMPASSES      |                                                           //
------------------------------*/                                                           //
std::string_view mapCompassStartWith  = "Maps and Compasses are given to you from the\n"   //
                                        "start. This will add a small amount of money and\n"
                                        "refill items to the pool.";                       //
std::string_view mapCompassVanilla    = "Maps and Compasses will appear in their vanilla\n"//
                                        "locations.";                                      //
std::string_view mapCompassOwnDungeon = "Maps and Compasses can only appear in their\n"    //
                                        "respective dungeon.";                             //
std::string_view mapCompassAnywhere   = "Maps and Compasses can appear anywhere in the\n"  //
                                        "world.";                                          //
/*------------------------------                                                           //
|         SMALL KEYS           |                                                           //
------------------------------*/                                                           //
std::string_view smallKeyStartWith    = "Small Keys are given to you from the start so you\n"
                                        "won't have to worry about locked doors. An easier\n"
                                        "mode.";                                           //
std::string_view smallKeyVanilla      = "Small Keys will appear in their vanilla locations."
                                        "You start with 3 keys in Spirit Temple MQ because\n"
                                        "the vanilla key layout is not beatable in logic.";//
std::string_view smallKeyOwnDungeon   = "Small Keys can only appear in their respective\n" //
                                        "dungeon. If Fire Temple is not a Master Quest\n"  //
                                        "dungeon, the door to the Boss Key chest will be\n"//
                                        "unlocked.";                                       //
std::string_view smallKeyAnywhere     = "Small Keys can appear anywhere in the world. A\n" //
                                        "difficult mode since it is more likely to need to\n"
                                        "enter a dungeon multiple times.";                 //
/*------------------------------                                                           //
|     GERUDO FORTRESS KEYS     |                                                           //
------------------------------*/                                                           //
std::string_view gerudoKeysVanilla    = "Gerudo Fortress Keys will appear in their vanilla\n"
                                        "location, dropping from fighting Gerudo guards\n" //
                                        "that attack when trying to free the jailed\n"     //
                                        "carpenters.";                                     //
std::string_view gerudoKeysAnywhere   = "Gerudo Fortress Keys can appear anywhere in the\n"//
                                        "world.";                                          //
/*------------------------------                                                           //
|          BOSS KEYS           |                                                           //
------------------------------*/                                                           //
std::string_view bossKeyStartWith     = "Boss Keys are given to you from the start so you\n"
                                        "won't have to worry about boss doors. An easier\n"//
                                        "mode.";                                           //
std::string_view bossKeyVanilla       = "Boss Keys will appear in their vanilla locations.";
std::string_view bossKeyOwnDungeon    = "Boss Keys can only appear in their respective\n"  //
                                        "dungeon.";                                        //
std::string_view bossKeyAnywhere      = "Boss Keys can appear anywhere in the world. A\n"  //
                                        "difficult mode since it is more likely to need to\n"
                                        "enter a dungeon multiple times.";                 //
/*------------------------------                                                           //
|   GANON'S CASTLE BOSS KEY    |                                                           //
------------------------------*/                                                           //
std::string_view ganonKeyStartWith    = "Ganon's Castle Boss Key is given to you from the\n"
                                        "start and you don't have to worry about finding it";
std::string_view ganonKeyVanilla      = "Ganon's Castle Boss Key will appear in the vanilla"
                                        "location.";                                       //
std::string_view ganonKeyOwnDungeon   = "Ganon's Castle Boss Key can only appear inside\n" //
                                        "Ganon's Castle.";                                 //
std::string_view ganonKeyAnywhere     = "Ganon's Castle Boss Key can appear anywhere in the"
                                        "world.";                                          //
std::string_view ganonKeyLACS         = "These settings put the boss key on the Light Arrow"
                                        "Cutscene location, from Zelda in Temple of Time as"
                                        "adult, with differing requirements.";             //
/*------------------------------                                                           //
|      SKIP CHILD STEALTH      |                                                           //
------------------------------*/                                                           //
std::string_view childStealthDesc     = "The crawlspace into Hyrule Castle goes straight to"
                                        "Zelda, skipping the guards.";                     //
/*------------------------------                                                           //
|      FOUR POES CUTSCENE      |                                                           //
------------------------------*/                                                           //
std::string_view fourPoesDesc         = "The cutscene with the 4 poes in Forest Temple will"
                                        "be skipped. If the cutscene is not skipped, it can"
                                        "be exploited to reach the basement early.";       //
/*------------------------------                                                           //
|     TEMPLE OF TIME INTRO     |                                                           //
------------------------------*/                                                           //
std::string_view templeOfTimeIntroDesc= "The introduction cutscene to Temple of Time will\n"
                                        "be skipped. This cutscene is helpful for\n"       //
                                        "performing Door of Time Skip should the Door of\n"//
                                        "Time be closed.";                                 //
/*------------------------------                                                           //
|     BIG POE TARGET COUNT     |                                                           //
------------------------------*/                                                           //
std::string_view bigPoeTargetCountDesc= "The Poe buyer will give a reward for turning in\n"//
                                        "the chosen number of Big Poes.";                  //
/*------------------------------                                                           //
|       DAMAGE MULTIPLIER      |                                                           //
------------------------------*/                                                           //
std::string_view damageMultiDesc      = "Changes the amount of damage taken.\n"            //
                                        "\n"                                               //
                                        "If set to OHKO, Link will die in one hit.";       //
/*------------------------------                                                           //
|        STARTING TIME         |                                                           //
------------------------------*/                                                           //
std::string_view startingTimeDesc     = "Change up Link's sleep routine.";                 //
                                                                                           //
/*------------------------------                                                           //
|          ITEM POOL           |                                                           //
------------------------------*/                                                           //
std::string_view itemPoolPlentiful    = "Extra major items are added to the pool.";        //
std::string_view itemPoolBalanced     = "Original item pool.";                             //
std::string_view itemPoolScarce       = "Some excess items are removed, including health\n"//
                                        "upgrades.";                                       //
std::string_view itemPoolMinimal      = "Most excess items are removed.";                  //
                                                                                           //
/*------------------------------                                                           //
|          ICE TRAPS           |                                                           //
------------------------------*/                                                           //
std::string_view iceTrapsOff          = "All Ice Traps are removed.";                      //
std::string_view iceTrapsNormal       = "Only Ice Traps from the base item pool are placed.";
std::string_view iceTrapsExtra        = "Chance to add extra Ice Traps when junk items are\n"
                                        "added to the itempool.";                          //
std::string_view iceTrapsMayhem       = "All added junk items will be Ice Traps.";         //
std::string_view iceTrapsOnslaught    = "All junk items will be replaced by Ice Traps, even"
                                        "those in the base pool.";                         //
/*------------------------------                                                           //
|    ENABLE ADULT DEKU STICK   |                                                           //
------------------------------*/                                                           //
std::string_view adultStickDesc       = "Adult Link can wield a deku stick. In game Adult\n"
                                        "Link will look like he's holding a Hylian Shield,\n"
                                        "but rest assured it is a deku stick.\n"           //
                                        "\n"                                               //
                                        "This setting will not change the logic";          //
                                                                                           //
/*------------------------------                                                           //
|    ENABLE ADULT BOOMERANG    |                                                           //
------------------------------*/                                                           //
std::string_view adultBoomerangDesc   = "Adult Link can throw the boomerang."              //
                                        "\n"                                               //
                                        "This setting will not change the logic";          //
                                                                                           //
/*------------------------------                                                           //
|     ENABLE CHILD HAMMER      |                                                           //
------------------------------*/                                                           //
std::string_view childHammerDesc      = "Child Link can swing the Megaton Hammer."         //
                                        "\n"                                               //
                                        "This setting will not change the logic";          //
                                                                                           //--------------//
/*------------------------------                                                                           //
|  DETAILED LOGIC EXPLANATIONS |                                                                           //
------------------------------*/                                                                           //
std::string_view ToggleAllDetailedLogicDesc           = "Enable or Disable all Detailed Logic tricks at\n" //
                                                        "once.";                                           //
std::string_view LogicGrottosWithoutAgonyDesc         = "Allows entering hidden grottos without the Shard\n"
                                                        "of Agony.";                                       //
std::string_view LogicVisibleCollisionDesc            = "Allows going through the Kakariko Village Gate as\n"
                                                        "child when coming from the Mountain Trail side."; //
std::string_view LogicFewerTunicRequirementsDesc      = "Allows the following possible without Tunics:\n"  //
                                                        "- Enter Water Temple.\n"                          //
                                                        "- Enter Fire Temple. Only the first floor\n"      //
                                                        "  is accessible, and not Volvagia.\n"             //
                                                        "- Zora's Fountain Bottom Freestanding PoH.\n"     //
                                                        "- Gerudo Training Grounds Underwater Silver Rupee\n"
                                                        "Chest. May need to make multiple trips.";         //
std::string_view LogicLostWoodsGSBeanDesc             = "You can collect the token with a precise Hookshot\n"
                                                        "use, as long as you can kill the Skulltula somehow"
                                                        "first. It can be killed using Longshot, Bow,\n"   //
                                                        "Bombchus or Din's Fire.";                         //
std::string_view LogicLabDivingDesc                   = "Remove the Iron Boots in the midst of Hookshotting"
                                                        "the underwater crate";                            //
std::string_view LogicLabWallGSDesc                   = "The jump slash to actually collect the token is\n"//
                                                        "somewhat precise";                                //
std::string_view LogicGraveyardPoHDesc                = "Using a precise moving setup you can obtain the\n"//
                                                        "Piece of Heart by having the Boomerang interact\n"//
                                                        "with it along the return path.";                  //
std::string_view LogicChildDampeRacePoHDesc           = "It is possible to complete the second dampe race\n"
                                                        "as child in under a minute, but it is a strict\n" //
                                                        "time limit.";                                     //
std::string_view LogicGerudoKitchenDesc               = "The logic normally guarantees one of Bow,\n"      //
                                                        "Hookshot, or Hover Boots.";                       //
std::string_view LogicLensWastelandDesc               = "By memorizing the path, you can travel through the"
                                                        "Wasteland without using the Lens of Truth to see\n"
                                                        "the Poe. The equivalent trick for going in reverse"
                                                        "through the Wasteland is \"Reverse Wasteland\"."; //
std::string_view LogicReverseWastelandDesc            = "By memorizing the path, you can travel through the"
                                                        "Wasteland in reverse.";                           //
std::string_view LogicColossusGSDesc                  = "Somewhat precise. If you kill enough Leevers you\n"
                                                        "can get enough of a break to take some time to aim"
                                                        "more carefully.";                                 //
std::string_view LogicManOnRoofDesc                   = "Can be reached by side-hopping off the watchtower.";
std::string_view LogicDMTBombableDesc                 = "Child Link can blow up the wall using a nearby\n" //
                                                        "bomb flower. You must backwalk with the flower and"
                                                        "then quickly throw it toward the wall.";          //
std::string_view LogicDMTSoilGSDesc                   = "Bugs will go into the soft soil even while the\n" //
                                                        "boulder is still blocking the entrance. Then,\n"  //
                                                        "using a precise moving setup you can kill the Gold"
                                                        "Skulltula and obtain the token by having the\n"   //
                                                        "Boomerang interact with it along the return path.";
std::string_view LogicLinkGoronDinsDesc               = "The timing is quite awkward.";                    //
std::string_view LogicGoronCityLeftMostDesc           = "A precise backwalk starting from on top of the\n" //
                                                        "crate and ending with a precisely-timed backflip\n"
                                                        "can reach this chest without needing either the\n"//
                                                        "Hammer or Silver Gauntlets.";                     //
std::string_view LogicGoronCityPotDesc                = "A Bombchu can be used to stop the spinning pot,\n"//
                                                        "but it can be quite finicky to get it to work.";  //
std::string_view LogicGoronCityPotWithStrengthDesc    = "Allows for stopping the Goron City Spinning Pot\n"//
                                                        "using a bomb flower alone, requiring strength in\n"
                                                        "lieu of inventory explosives.";                   //
std::string_view LogicChildRollingWithStrengthDesc    = "Use the bombflower on the stairs or near\n"       //
                                                        "Medigoron. Timing is tight, especially without\n" //
                                                        "backwalking.";                                    //
std::string_view LogicCraterUpperToLowerDesc          = "With the Hammer, you can jump slash the rock twice"
                                                        "in the same jump in order to destroy it before you"
                                                        "fall into the lava.";                             //
std::string_view LogicCraterBeanPoHWithHoversDesc     = "Hover from the base of the bridge near Goron City\n"
                                                        "and walk up the very steep slope.";               //
std::string_view LogicBiggoronBoleroDesc              = "Playing a warp song normally causes a trade item\n"
                                                        "to spoil immediately, however, it is possible use\n"
                                                        "Bolero to reach Biggoron and still deliver the Eye"
                                                        "Drops before they spoil. If you do not wear the\n"
                                                        "Goron Tunic, the heat timer inside the crater will"
                                                        "override the trade item's timer. When you exit to\n"
                                                        "Death Mountain Trail you will have one second to\n"
                                                        "show the Eye Drops before they expire.";          //
std::string_view LogicZoraRiverLowerDesc              = "Adult can reach this PoH with a precise jump, no\n"
                                                        "Hover Boots required.";                           //
std::string_view LogicZoraRiverUpperDesc              = "Adult can reach this PoH with a precise jump, no\n"
                                                        "Hover Boots required.";                           //
std::string_view LogicDekuB1WebsWithBowDesc           = "All spider web walls in the Deku Tree basement can"
                                                        "be burnt as adult with just a bow by shooting\n"  //
                                                        "through torches. This trick only applies to the\n"//
                                                        "circular web leading to Gohma; the two vertical\n"//
                                                        "webs are always in logic. Backflip onto the chest\n"
                                                        "near the torch at the bottom of the vine wall.\n" //
                                                        "With precise positioning you can shoot through the"
                                                        "torch to the right edge of the circular web.";    //
std::string_view LogicDekuB1SkipDesc                  = "A precise jump can be used to skip needing to use\n"
                                                        "the Slingshot to go around B1 of the Deku Tree. If"
                                                        "used with the \"Closed Forest\" setting, a\n"     //
                                                        "Slingshot will not be guaranteed to exist\n"      //
                                                        "somewhere inside the Forest. This trick applies to"
                                                        "both Vanilla and Master Quest.";                  //
std::string_view LogicDekuBasementGSDesc              = "Can be defeated by doing a precise jump slash.";  //
std::string_view LogicDCStaircaseDesc                 = "The Bow can be used to knock down the stairs with\n"
                                                        "two well-timed shots.";                           //
std::string_view LogicDCJumpDesc                      = "Jump is adult only.";                             //
std::string_view LogicDCSlingshotSkipDesc             = "With precise platforming, child can cross the\n"  //
                                                        "platforms while the flame circles are there. When\n"
                                                        "enabling this trick, it's recommended that you\n" //
                                                        "also enable the Adult variant: \"Dodongo's Cavern\n"
                                                        "Spike Trap Room Jump without Hover Boots\".";     //
std::string_view LogicDCScarecrowGSDesc               = "You can jump off an Armos Statue to reach the\n"  //
                                                        "alcove with the Gold Skulltula. It takes quite a\n"
                                                        "long time to pull the statue the entire way. The\n"
                                                        "jump to the alcove can be a bit picky when done\n"//
                                                        "as child.";                                       //
std::string_view LogicJabuBossGSAdultDesc             = "You can easily get over to the door to the near\n"//
                                                        "boss area early with Hover Boots. The tricky part\n"
                                                        "is getting through the door without being able to\n"
                                                        "use a box to keep the switch pressed. One way is\n"
                                                        "to quickly roll from the switch and open the door\n"
                                                        "before it closes.";                               //
std::string_view LogicJabuScrubJumpDiveDesc           = "Standing above the underwater tunnel leading to\n"//
                                                        "the scrub, jump down and swim through the tunnel.\n"
                                                        "This allows adult to access the scrub with no\n"  //
                                                        "Scale or Iron Boots.";                            //
std::string_view LogicForestOutsideBackdoorDesc       = "With a precise jump slash from above, you can\n"  //
                                                        "reach the backdoor to the west courtyard without\n"
                                                        "Hover Boots. Applies to both Vanilla and Master\n"//
                                                        "Quest.";                                          //
std::string_view LogicForestDoorFrameDesc             = "A precise Hover Boots movement from the upper\n"  //
                                                        "balconies in this courtyard can be used to get on\n"
                                                        "top of the door frame. Applies to both Vanilla and"
                                                        "Master Quest. In Vanilla, from on top the door\n" //
                                                        "frame you can summon Pierre, allowing you to\n"   //
                                                        "access the falling ceiling room early. In Master\n"
                                                        "Quest, this allows you to obtain the GS on the\n" //
                                                        "door frame as adult without Hookshot or Song of\n"//
                                                        "Time.";                                           //
std::string_view LogicForestOutdoorEastGSDesc         = "Precise Boomerang throws can allow child to kill\n"
                                                        "the Skulltula and collect the token.";            //
std::string_view LogicFireBossDoorJumpDesc            = "The Fire Temple Boss Door can be reached with a\n"//
                                                        "precise jump. You must be touching the side wall\n"
                                                        "of the room so that Link will grab the ledge from\n"
                                                        "farther away than is normally possible.";         //
std::string_view LogicFireStrengthDesc                = "A precise jump can be used to skip pushing the\n" //
                                                        "block.";                                          //
std::string_view LogicFireScarecrowDesc               = "Also known as \"Pixelshot\". The Longshot can\n"  //
                                                        "reach the target on the elevator itself, allowing\n"
                                                        "you to skip needing to spawn the scarecrow.";     //
std::string_view LogicFireFlameMazeDesc               = "If you move quickly you can sneak past the edge of"
                                                        "a flame wall before it can rise up to block you.\n"
                                                        "To do it without taking damage is more precise.\n"//
                                                        "Allows you to progress without needing either a\n"//
                                                        "Small Key or Hover Boots.";                       //
std::string_view LogicFireSongOfTimeDesc              = "A precise jump can be used to reach this room.";  //
std::string_view LogicWaterTempleTorchLongshotDesc    = "Stand on the eastern side of the central pillar\n"//
                                                        "and longshot the torches on the bottom level.\n"  //
                                                        "Swim through the corridor and float up to the top\n"
                                                        "level. This allows access to this area and lower\n"
                                                        "water levels without Iron Boots. The majority of\n"
                                                        "the tricks that allow you to skip Iron Boots in\n"//
                                                        "the Water Temple are not going to be relevant\n"  //
                                                        "unless this trick is first enabled.";             //
std::string_view LogicWaterCentralBowDesc             = "A very precise Bow shot can hit the eye switch\n" //
                                                        "from the floor above. Then, you can jump down into"
                                                        "the hallway and make through it before the gate\n"//
                                                        "closes. It can also be done as child, using the\n"//
                                                        "Slingshot instead of the Bow.";                   //
std::string_view LogicWaterCentralGSFWDesc            = "If you set Farore's Wind inside the central pillar"
                                                        "and then return to that warp point after raising\n"
                                                        "the water to the highest level, you can obtain\n" //
                                                        "this Skulltula Token with Hookshot or Boomerang.";//
std::string_view LogicWaterCrackedWallNothingDesc     = "A precise jump slash (among other methods) will\n"//
                                                        "get you to the cracked wall without needing the\n"//
                                                        "Hover Boots or to raise the water to the middle\n"//
                                                        "level. This trick supersedes \"Water Temple\n"    //
                                                        "Cracked Wall with Hover Boots\".";                //
std::string_view LogicWaterCrackedWallHoversDesc      = "With a midair side-hop while wearing the Hover\n" //
                                                        "Boots, you can reach the cracked wall without\n"  //
                                                        "needing to raise the water up to the middle level.";
std::string_view LogicWaterBossKeyRegionDesc          = "With precise Hover Boots movement it is possible\n"
                                                        "to reach the boss key chest's region without\n"   //
                                                        "needing the Longshot. It is not necessary to take\n"
                                                        "damage from the spikes. The Gold Skulltula Token\n"
                                                        "in the following room can also be obtained with\n"//
                                                        "just the Hover Boots.";                           //
std::string_view LogicWaterBKJumpDiveDesc             = "Stand on the very edge of the raised corridor\n"  //
                                                        "leading from the push block room to the rolling\n"//
                                                        "boulder corridor. Face the gold skulltula on the\n"
                                                        "waterfall and jump over the boulder corridor floor"
                                                        "into the pool of water, swimming right once\n"    //
                                                        "underwater. This allows access to the boss key\n" //
                                                        "room without Iron boots.";                        //
std::string_view LogicWaterNorthBasementLedgeJumpDesc = "In the northern basement there's a ledge from\n"  //
                                                        "where, in vanilla Water Temple, boulders roll out\n"
                                                        "into the room. Normally to jump directly to this\n"
                                                        "ledge logically requires the Hover Boots, but with"
                                                        "precise jump, it can be done without them. This\n"//
                                                        "trick applies to both Vanilla and Master Quest."; //
std::string_view LogicWaterDragonAdultDesc            = "Normally you need both Hookshot and Iron Boots to\n"
                                                        "hit the switch and swim through the tunnel to get\n"
                                                        "to the chest. But by hitting the switch from dry\n"
                                                        "land, using one of Bombchus, Hookshot, or Bow, it\n"
                                                        "is possible to skip one or both of those\n"       //
                                                        "requirements. After the gate has been opened, a\n"//
                                                        "well-timed dive with at least the Silver Scale\n" //
                                                        "could be used to swim through the tunnel.";       //
std::string_view LogicWaterDragonJumpDiveDesc         = "If you come into the dragon statue room from the\n"
                                                        "serpent river, you can jump down from above and\n"//
                                                        "get into the tunnel without needing either Iron\n"//
                                                        "Boots or a Scale. This trick applies to both\n"   //
                                                        "Vanilla and Master Quest. In Vanilla, you must\n" //
                                                        "shoot the switch from above with the Bow, and then"
                                                        "quickly get through the tunnel before the gate\n" //
                                                        "closes.";                                         //
std::string_view LogicWaterRiverGSDesc                = "Standing on the exposed ground toward the end of\n"
                                                        "the river, a precise Longshot use can obtain the\n"
                                                        "token.";                                          //
std::string_view LogicWaterFallingPlatformGSDesc      = "If you stand on the very edge of the platform,\n" //
                                                        "this Gold Skulltula can be obtained with only the\n"
                                                        "Hookshot.";                                       //
std::string_view LogicSpiritLowerAdultSwitchDesc      = "A bomb can be used to hit the switch on the\n"    //
                                                        "ceiling, but it must be thrown from a particular\n"
                                                        "distance away and with precise timing.";          //
std::string_view LogicSpiritChildBombchuDesc          = "A carefully-timed Bombchu can hit the switch.";   //
std::string_view LogicSpiritWallDesc                  = "The logic normally guarantees a way of dealing\n" //
                                                        "with both the Beamos and the Walltula before\n"   //
                                                        "climbing the wall.";                              //
std::string_view LogicSpiritLobbyGSDesc               = "Standing on the highest part of the arm of the\n" //
                                                        "statue, a precise Boomerang throw can kill and\n" //
                                                        "obtain this Gold Skulltula. You must throw the\n" //
                                                        "Boomerang slightly off to the side so that it\n"  //
                                                        "curves into the Skulltula, as aiming directly at\n"
                                                        "it will clank off of the wall in front.";         //
std::string_view LogicSpiritMapChestDesc              = "To get a line of sight from the upper torch to the"
                                                        "map chest torches, you must pull an Armos statue\n"
                                                        "all the way up the stairs.";                      //
std::string_view LogicSpiritSunChestDesc              = "Using the blocks in the room as platforms you can\n"
                                                        "get lines of sight to all three torches. The timer"
                                                        "on the torches is quite short so you must move\n" //
                                                        "quickly in order to light all three.";            //
std::string_view LogicShadowFireArrowEntryDesc        = "It is possible to light all of the torches to open"
                                                        "the Shadow Temple entrance with just Fire Arrows,\n"
                                                        "but you must be very quick, precise, and strategic"
                                                        "with how you take your shots.";                   //
std::string_view LogicShadowUmbrellaDesc              = "A very precise Hover Boots movement from off of\n"//
                                                        "the lower chest can get you on top of the crushing\n"
                                                        "spikes without needing to pull the block. Applies\n"
                                                        "to both Vanilla and Master Quest.";               //
std::string_view LogicShadowFreestandingKeyDesc       = "Release the Bombchu with good timing so that it\n"//
                                                        "explodes near the bottom of the pot.";            //
std::string_view LogicShadowStatueDesc                = "By sending a Bombchu around the edge of the gorge,"
                                                        "you can knock down the statue without needing a\n"//
                                                        "Bow. Applies in both vanilla and MQ Shadow.";     //
std::string_view LogicChildDeadhandDesc               = "Requires 9 sticks or 5 jump slashes.";            //
std::string_view LogicGtgWithoutHookshotDesc          = "After collecting the rest of the silver rupees in\n"
                                                        "the room, you can reach the final silver rupee on\n"
                                                        "the ceiling by being pulled up into it after\n"   //
                                                        "getting grabbed by the Wallmaster. Then, you must\n"
                                                        "also reach the exit of the room without the use of"
                                                        "the Hookshot. If you move quickly you can sneak\n"//
                                                        "past the edge of a flame wall before it can rise\n"
                                                        "up to block you. To do so without taking damage is"
                                                        "more precise.";                                   //
std::string_view LogicGtgFakeWallDesc                 = "A precise Hover Boots use from the top of the\n"  //
                                                        "chest can allow you to grab the ledge without\n"  //
                                                        "needing the usual requirements.";                 //
std::string_view LogicLensSpiritDesc                  = "Removes the requirements for the Lens of Truth in\n"
                                                        "Spirit Temple.";                                  //
std::string_view LogicLensShadowDesc                  = "Removes the requirements for the Lens of Truth in\n"
                                                        "Shadow Temple before the invisible moving platform";
std::string_view LogicLensShadowBackDesc              = "Removes the requirements for the Lens of Truth in\n"
                                                        "Shadow Temple beyond the invisible moving platform";
std::string_view LogicLensBotwDesc                    = "Removes the requirements for the Lens of Truth in\n"
                                                        "Bottom of the Well.";                             //
std::string_view LogicLensGtgDesc                     = "Removes the requirements for the Lens of Truth in\n"
                                                        "Gerudo Training Grounds.";                        //
std::string_view LogicLensCastleDesc                  = "Removes the requirements for the Lens of Truth in\n"
                                                        "Ganon's Castle.";                                 //
std::string_view LogicSpiritTrialHookshotDesc         = "A precise jump off of an Armos can collect the\n" //
                                                        "highest rupee.";                                  //
