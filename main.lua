-- name: \\#dc0000\\Super Mario Bros. \\#00dc00\\3D
-- description: Super Mario Bros. 3D is a mini hack made by Kaze Emanuar and Released in 2013, There are a lot of custom objects in this hack that make it feel more unique and varied. The hack has 22 Stars Total.\n\nPorted by B. Bones Johnson\n\nAudio Stream Template by Blocky.cmd\n\n Thanks to PeachyPeachsm64, DizzyThermal and other members of the SM64CoopDX community for coding help.\n\nNOTE: For Character Select compatiblity please use Version 1.16 or higher.
-- incompatible: romhack

gLevelValues.entryLevel = LEVEL_CASTLE_GROUNDS

gLevelValues.cellHeightLimit = 32767
gLevelValues.floorLowerLimit = -32768
gLevelValues.floorLowerLimitMisc = -31768
gLevelValues.floorLowerLimitShadow = -31768
gServerSettings.skipIntro = 1
gLevelValues.coinsRequiredForCoinStar = 50

camera_set_use_course_specific_settings(0)
camera_set_romhack_override(RCO_ALL)
rom_hack_cam_set_collisions(0)
camera_romhack_allow_centering(0)
camera_romhack_allow_dpad_usage(1)
camera_allow_toxic_gas_camera(1)

smlua_audio_utils_replace_sequence(0x01, 0x25, 75, "01_Seq_custom")
smlua_audio_utils_replace_sequence(0x02, 0x19, 75, "02_Seq_custom")
smlua_audio_utils_replace_sequence(0x0B, 0x14, 75, "0B_Seq_custom")
smlua_audio_utils_replace_sequence(0x0D, 0x16, 75, "0D_Seq_custom")
smlua_audio_utils_replace_sequence(0x0E, 0x17, 75, "0E_Seq_custom")
smlua_audio_utils_replace_sequence(0x0F, 0x18, 75, "0F_Seq_custom")
smlua_audio_utils_replace_sequence(0x10, 0x12, 75, "10_Seq_custom")
smlua_audio_utils_replace_sequence(0x12, 0x1F, 75, "12_Seq_custom")
smlua_audio_utils_replace_sequence(0x14, 0x1A, 75, "14_Seq_custom")
smlua_audio_utils_replace_sequence(0x15, 0x0E, 75, "15_Seq_custom")
smlua_audio_utils_replace_sequence(0x16, 0x0B, 75, "16_Seq_custom")
smlua_audio_utils_replace_sequence(0x17, 0x1A, 75, "17_Seq_custom")
smlua_audio_utils_replace_sequence(0x1B, 0x14, 75, "1B_Seq_custom")
smlua_audio_utils_replace_sequence(0x1C, 0x20, 75, "1C_Seq_custom")
smlua_audio_utils_replace_sequence(0x1D, 0x1E, 75, "1D_Seq_custom")
smlua_audio_utils_replace_sequence(0x1E, 0x1B, 75, "1E_Seq_custom")
smlua_audio_utils_replace_sequence(0x1F, 0x1A, 75, "1F_Seq_custom")
smlua_audio_utils_replace_sequence(0x20, 0x23, 75, "20_Seq_custom")
smlua_audio_utils_replace_sequence(0x21, 0x25, 75, "21_Seq_custom")
smlua_audio_utils_replace_sequence(0x23, 0x25, 75, "23_Seq_custom")
smlua_audio_utils_replace_sequence(0x24, 0x25, 75, "24_Seq_custom")
smlua_audio_utils_replace_sequence(0x25, 0x25, 75, "25_Seq_custom")
smlua_audio_utils_replace_sequence(0x28, 0x25, 75, "28_Seq_custom")
smlua_audio_utils_replace_sequence(0x29, 0x25, 75, "29_Seq_custom")
smlua_audio_utils_replace_sequence(0x2A, 0x25, 75, "2A_Seq_custom")
smlua_audio_utils_replace_sequence(0x2B, 0x1A, 75, "2B_Seq_custom")
smlua_audio_utils_replace_sequence(0x2C, 0x25, 75, "2C_Seq_custom")
smlua_audio_utils_replace_sequence(0x2D, 0x25, 75, "2D_Seq_custom")
smlua_audio_utils_replace_sequence(0x2E, 0x11, 75, "2E_Seq_custom")

vec3f_set(gLevelValues.starPositions.KoopaBobStarPos, 3030, 4500, -4600)
vec3f_set(gLevelValues.starPositions.KoopaThiStarPos, -11435, -393, 5737)
vec3f_set(gLevelValues.starPositions.KingBobombStarPos, 0.0, 573.0, 0.0)
vec3f_set(gLevelValues.starPositions.KingWhompStarPos, 180.0, 3880.0, 340.0)
vec3f_set(gLevelValues.starPositions.EyerockStarPos, 0.0, -900.0, -3700.0)
vec3f_set(gLevelValues.starPositions.BigBullyStarPos, 3700.0, 600.0, -5500.0)
vec3f_set(gLevelValues.starPositions.ChillBullyStarPos, 130.0, 1600.0, -4335.0)
vec3f_set(gLevelValues.starPositions.BigPiranhasStarPos, -6300.0, -1850.0, -6300.0)
vec3f_set(gLevelValues.starPositions.TuxieMotherStarPos, 3167.0, -4300.0, 5108.0)
vec3f_set(gLevelValues.starPositions.WigglerStarPos, 0.0, 2048.0, 0.0)
vec3f_set(gLevelValues.starPositions.PssSlideStarPos, -6358.0, -4300.0, 4700.0)
vec3f_set(gLevelValues.starPositions.RacingPenguinStarPos, -7339.0, -5700.0, -6774.0)
vec3f_set(gLevelValues.starPositions.TreasureChestStarPos, -1800.0, -2500.0, -1700.0)
vec3f_set(gLevelValues.starPositions.GhostHuntBooStarPos, 980.0, 1100.0, 250.0)
vec3f_set(gLevelValues.starPositions.KleptoStarPos, -5550.0, 300.0, -930.0)
vec3f_set(gLevelValues.starPositions.MerryGoRoundStarPos, -1600.0, -2100.0, 205.0)
vec3f_set(gLevelValues.starPositions.MrIStarPos, 1370.0, 2000.0, -320.0)
vec3f_set(gLevelValues.starPositions.BalconyBooStarPos, 700.0, 3200.0, 1900.0)
vec3f_set(gLevelValues.starPositions.BigBullyTrioStarPos, 0.0, 950.0, -6800.0)

gBehaviorValues.trajectories.KoopaBobTrajectory            = get_trajectory('KoopaBoB_path')
gBehaviorValues.trajectories.KoopaThiTrajectory            = get_trajectory('KoopaTHI_path')
gBehaviorValues.trajectories.PlatformRrTrajectory          = get_trajectory('rr_seg7_trajectory_0702EC3C_RM2C_path')
gBehaviorValues.trajectories.PlatformRr2Trajectory         = get_trajectory('rr_seg7_trajectory_0702ECC0_RM2C_path')
gBehaviorValues.trajectories.PlatformCcmTrajectory         = get_trajectory('ccm_seg7_trajectory_0701669C_RM2C_path')
gBehaviorValues.trajectories.PlatformBitfsTrajectory       = get_trajectory('bitfs_seg7_trajectory_070159AC_RM2C_path')
gBehaviorValues.trajectories.PlatformHmcTrajectory         = get_trajectory('hmc_seg7_trajectory_0702B86C_RM2C_path')
gBehaviorValues.trajectories.PlatformLllTrajectory         = get_trajectory('lll_seg7_trajectory_0702856C_RM2C_path')
gBehaviorValues.trajectories.PlatformLll2Trajectory        = get_trajectory('lll_seg7_trajectory_07028660_RM2C_path')
gBehaviorValues.trajectories.PlatformRr3Trajectory         = get_trajectory('rr_seg7_trajectory_0702ED9C_RM2C_path')
gBehaviorValues.trajectories.PlatformRr4Trajectory         = get_trajectory('rr_seg7_trajectory_0702EEE0_RM2C_path')
gBehaviorValues.trajectories.RacingPenguinTrajectory       = get_trajectory('ccm_seg7_trajectory_penguin_race_RM2C_path')
gBehaviorValues.trajectories.BowlingBallBobTrajectory      = get_trajectory('C4_metal_ball_path')
gBehaviorValues.trajectories.BowlingBallThiLargeTrajectory = get_trajectory('C4_metal_ball_path')
gBehaviorValues.trajectories.BowlingBallTtmTrajectory = get_trajectory('C4_metal_ball_path')

local Lives = false

hook_event(HOOK_MARIO_UPDATE, function(m)  

if not Lives then
            Lives = true
        m.numLives = 3
end


 end)

