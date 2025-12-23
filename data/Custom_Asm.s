#This file is provided only as a reference for manually recoding functions.

#This function is called from Behavior  Bhv_Custom_0x130031e0
#It has virtual address 0x802E76AC and rom address 0xA26AC
 bhv_bobomb_buddy_init:
	lui	$at, 0x4020
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xe4($t6)
	lui	$at, 0x8034
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lwc1	$f6, -0x7b14($at)
	swc1	$f6, 0x170($t7)
	lui	$at, 0x8034
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lwc1	$f8, -0x7b10($at)
	swc1	$f8, 0x174($t8)
	lui	$t0, 0x8036
	lw	$t0, 0x1160($t0)
	addiu	$t9, $zero, 0x4000
	sw	$t9, 0x190($t0)
	jr	$ra
	nop	
#This function is called from Behavior  Bhv_Custom_0x130031e0
#It has virtual address 0x802E7C4C and rom address 0xA2C4C
 bhv_bobomb_buddy_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bobomb_buddy_actions
	nop	
	lui	$a0, 0x8036
	lw	$a0, 0x1160($a0)
	jal	 curr_obj_random_blink
	addiu	$a0, $a0, 0xf4
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	sw	$zero, 0x134($t6)
	b	0x34
	nop	
	lw	$ra, 0x14($sp)
	addiu	$sp, $sp, 0x18
	jr	$ra
	nop	
#This function is called from Behavior  bhvTankFishGroup
#It has virtual address 0x802B9790 and rom address 0x74790
 bhv_tank_fish_group_loop:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x2c($sp)
	sw	$s0, 0x28($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
	nop	
	addiu	$at, $zero, 1
	beq	$s0, $at, 0xd8
	nop	
	addiu	$at, $zero, 2
	beq	$s0, $at, 0x114
	nop	
	b	0x128
	nop	
	lui	$t7, 0x8036
#This function is called from Behavior  bhvBooInCastle
#It has virtual address 0x802A4120 and rom address 0x5F120
 bhv_init_room:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x14
	jal	 is_item_in_array
	lh	$a0, -0x2208($a0)
	beqz	$v0, 0xc8
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $sp, 0x1c
	lwc1	$f12, 0xa0($t6)
	lwc1	$f14, 0xa4($t6)
	jal	 find_floor
	lw	$a2, 0xa8($t6)
	swc1	$f0, 0x18($sp)
#This function is called from Behavior  bhvBooInCastle
#It has virtual address 0x802C5414 and rom address 0x80414
 bhv_boo_in_castle_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$at, 0x4000
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xf8($t6)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lw	$t8, 0x14c($t7)
	bnez	$t8, 0x8c
	nop	
	jal	 cur_obj_hide
	nop	
	lui	$t9, 0x8034
	lh	$t9, -0x4d9c($t9)
#This function is called from Behavior  bhvStarDoor
#It has virtual address 0x802F09F0 and rom address 0xAB9F0
 bhv_castle_cannon_grate_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	move	$a1, $zero
	addiu	$a2, $zero, 0x18
	jal	 save_file_get_total_star_count
	addiu	$a0, $a0, -1
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t5, 0x144($t6)
	slt	$at, $v0, $t5
	bnez	$at, 0x3c
	nop	
	sh	$zero, 0x74($t6)
	lw	$ra, 0x14($sp)
	addiu	$sp, $sp, 0x18
#This function is called from Behavior  Bhv_Custom_0x13000b14
#It has virtual address 0x802ACC3C and rom address 0x67C3C
 bhv_door_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
	swc1	$f4, 0x24($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lwc1	$f6, 0xa8($t7)
	swc1	$f6, 0x20($sp)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lwc1	$f12, 0x24($sp)
	lw	$a2, 0x20($sp)
	addiu	$a3, $sp, 0x1c
	jal	 find_floor
	lwc1	$f14, 0xa4($t8)
#This function is called from Behavior  Bhv_Custom_0x13000b14
#It has virtual address 0x802ACAC8 and rom address 0x67AC8
 bhv_door_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	sw	$zero, 0x1c($sp)
	lw	$t6, 0x1c($sp)
	lui	$t8, 0x8033
	addiu	$at, $zero, -1
	sll	$t7, $t6, 3
	addu	$t8, $t8, $t7
	lw	$t8, 0x260($t8)
	beq	$t8, $at, 0x98
	nop	
	lw	$t9, 0x1c($sp)
	lui	$a0, 0x8033
	sll	$t0, $t9, 3
	addu	$a0, $a0, $t0
	jal	 cur_obj_clear_interact_status_flag
	lw	$a0, 0x260($a0)
#This function is called from Behavior  bhvWarp
#It has virtual address 0x802AAA60 and rom address 0x65A60
 bhv_warp_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0xd8
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t9, 0x188($t8)
	sra	$t0, $t9, 0x18
	andi	$t1, $t0, 0xff
	sh	$t1, 6($sp)
	lhu	$t2, 6($sp)
	bnez	$t2, 0x54
	nop	
	lui	$at, 0x4248
	lui	$t3, 0x8036
#This function is called from Behavior  Bhv_Custom_0x13001c94
#It has virtual address 0x802BA608 and rom address 0x75608
 bhv_rotating_clock_arm_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd8($t6)
	sh	$t7, 0x1a($sp)
	lui	$t8, 0x8036
	lw	$t8, 0x1158($t8)
	addiu	$a3, $sp, 0x1c
	lwc1	$f12, 0xa0($t8)
	lwc1	$f14, 0xa4($t8)
	jal	 find_floor
	lw	$a2, 0xa8($t8)
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	swc1	$f0, 0xe8($t9)
	lui	$t0, 0x8036
#This function is called from Behavior  bhvDecorativePendulum
#It has virtual address 0x802F7978 and rom address 0xB2978
 bhv_decorative_pendulum_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	addiu	$t6, $zero, 0x100
	sw	$t6, 0x11c($t7)
	jal	 bhv_init_room
	nop	
	b	0x28
	nop	
	lw	$ra, 0x14($sp)
	addiu	$sp, $sp, 0x18
	jr	$ra
	nop	
#This function is called from Behavior  bhvDecorativePendulum
#It has virtual address 0x802F79B0 and rom address 0xB29B0
 bhv_decorative_pendulum_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd8($t6)
	blez	$t7, 0x34
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t9, 0x11c($t8)
	addiu	$t0, $t9, -8
	b	0x48
	sw	$t0, 0x11c($t8)
	lui	$t1, 0x8036
#This function is called from Behavior  bhvCameraLakitu
#It has virtual address 0x802FF408 and rom address 0xBA408
 bhv_goomba_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	andi	$t8, $t7, 3
	sw	$t8, 0xf4($t6)
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	lui	$at, 0x8033
	lw	$t0, 0xf4($t9)
	sll	$t1, $t0, 2
	subu	$t1, $t1, $t0
	sll	$t1, $t1, 2
#This function is called from Behavior  bhvCameraLakitu
#It has virtual address 0x80303F64 and rom address 0xBEF64
 bhv_camera_lakitu_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	nop	
	lwc1	$f12, 0xf8($t6)
	beqz	$v0, 0x1a0
	nop	
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lw	$t8, 0x68($t7)
	beq	$t8, $t7, 0x5c
	nop	
#This function is called from Behavior  bhvWaterLevelPillar
#It has virtual address 0x802BA19C and rom address 0x7519C
 bhv_water_level_pillar_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 save_file_get_flags
	nop	
	andi	$t6, $v0, 0x200
	beqz	$t6, 0x2c
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	addiu	$t7, $zero, 1
	sw	$t7, 0xf8($t8)
	b	0x34
	nop	
	lw	$ra, 0x14($sp)
#This function is called from Behavior  bhvWaterLevelPillar
#It has virtual address 0x802BA1E0 and rom address 0x751E0
 bhv_water_level_pillar_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xf8($t6)
	beqz	$t7, 0x2c
	nop	
	jal	 water_level_pillar_drained
	nop	
	b	0x34
	nop	
	jal	 water_level_pillar_undrained
	nop	
	lui	$t8, 0x8036
#This function is called from Behavior  bhvWaterLevelPillar
#It has virtual address 0x803839CC and rom address 0x13E9CC
 load_object_collision_model:
	beq	$gp, $v1, 0x10e00
	bne	$a2, $a1, -0x1011c
	andi	$s5, $at, 0xf001
	beql	$zero, $s3, 0x7eb4
#This function is called from Behavior  bhvDddWarp
#It has virtual address 0x802B9E94 and rom address 0x74E94
 bhv_ddd_warp_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lb	$t6, 0x131c($t6)
	andi	$t7, $t6, 2
	beqz	$t7, 0x38
	nop	
	lui	$a0, 0x707
	jal	 segmented_to_virtual
	addiu	$a0, $a0, 0x768c
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	b	0x50
	sw	$v0, 0x218($t8)
#This function is called from Behavior  bhvMips
#It has virtual address 0x802F8490 and rom address 0xB3490
 bhv_mips_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	addiu	$a1, $zero, -1
	jal	 save_file_get_star_flags
	addiu	$a0, $a0, -1
	sb	$v0, 0x1f($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	move	$a1, $zero
	addiu	$a2, $zero, 0x18
	jal	 save_file_get_total_star_count
	addiu	$a0, $a0, -1
#This function is called from Behavior  bhvMips
#It has virtual address 0x802F8DAC and rom address 0xB3DAC
 bhv_mips_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
	beqz	$s0, 0x4c
	nop	
	addiu	$at, $zero, 1
	beq	$s0, $at, 0x5c
	nop	
	addiu	$at, $zero, 2
	beq	$s0, $at, 0x6c
	nop	
#This function is called from Behavior  bhvRedCoin
#It has virtual address 0x802F2E6C and rom address 0xADE6C
 bhv_red_coin_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $sp, 0x24
	lwc1	$f12, 0xa0($t6)
	lwc1	$f14, 0xa4($t6)
	jal	 find_floor
	lw	$a2, 0xa8($t6)
	swc1	$f0, 0x20($sp)
	lui	$a0, 0x1300
	jal	 cur_obj_nearest_object_with_behavior
	addiu	$a0, $a0, 0x3e8c
	sw	$v0, 0x1c($sp)
#This function is called from Behavior  bhvRedCoin
#It has virtual address 0x802F2F2C and rom address 0xADF2C
 bhv_red_coin_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x134($t6)
	andi	$t8, $t7, 0x8000
	beqz	$t8, 0xd0
	nop	
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	lw	$t0, 0x68($t9)
	beqz	$t0, 0xbc
	nop	
	lui	$t1, 0x8036
#This function is called from Behavior  bhvBowserCourseRedCoinStar
#It has virtual address 0x802F328C and rom address 0xAE28C
 bhv_bowser_course_red_coin_star_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8036
	lw	$t7, 0xf4($t6)
	sb	$t7, 0x13fe($at)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$s0, 0x14c($t8)
	beq	$zero, $s0, 0x48
	nop	
	addiu	$at, $zero, 1
#This function is called from Behavior  bhvThwomp
#It has virtual address 0x802AD34C and rom address 0x6834C
 bhv_grindel_thwomp_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x298
	b	0x1c
	nop	
	lw	$ra, 0x14($sp)
	addiu	$sp, $sp, 0x18
	jr	$ra
	nop	
#This function is called from Behavior  bhvSnufit
#It has virtual address 0x8030DC70 and rom address 0xC8C70
 bhv_snufit_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	andi	$t8, $t7, 8
	bnez	$t8, 0x338
	nop	
	lui	$t0, 0x8036
	lw	$t0, 0x1160($t0)
#This function is called from Behavior  bhvYellowCoin
#It has virtual address 0x802AB650 and rom address 0x66650
 bhv_yellow_coin_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x1300
	jal	 cur_obj_set_behavior
	addiu	$a0, $a0, 0x91c
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x1f4
	jal	 obj_set_hitbox
	lw	$a0, 0x1160($a0)
	jal	 bhv_init_room
#This function is called from Behavior  bhvYellowCoin
#It has virtual address 0x802AB70C and rom address 0x6670C
 bhv_yellow_coin_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bhv_coin_sparkles_init
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xf0($t6)
	addiu	$t8, $t7, 1
	sw	$t8, 0xf0($t6)
	b	0x2c
	nop	
#This function is called from Behavior  bhvDorrie
#It has virtual address 0x802C5CA8 and rom address 0x80CA8
 bhv_merry_go_round_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xfc($t6)
	bnez	$t7, 0x4c
	nop	
	lui	$t8, 0x8036
	lh	$t8, 0x1250($t8)
	addiu	$at, $zero, 0xd
	bne	$t8, $at, 0x44
#This function is called from Behavior  Bhv_Custom_0x130005d0
#It has virtual address 0x8030B510 and rom address 0xC6510
 Func_Custom_0x8030b510:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$v1, 0x8036
	lw	$a1, 0x1158($v1)
	jal	 obj_check_if_collided_with_object
	lw	$a0, 0x1160($v1)
	beq	$zero, $v0, 0x80
	nop	
	lui	$a0, 0x8033
	ori	$a0, $a0, 0xb170
	lw	$a1, 0x1160($v1)
#This function is called from Behavior  Bhv_Custom_0x130005d0
#It has virtual address 0x802A6B7C and rom address 0x61B7C
 bhv_mr_i_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$v0, 0x8033
	ori	$t2, $v0, 0xb170
	lw	$v0, 0x68($t2)
	lh	$t1, ($v0)
	addiu	$v1, $zero, 0xff
	lui	$t2, 0x8040
	lw	$t3, 0x30($t2)
	beq	$t3, $v0, 0x54
	nop	
#This function is called from Behavior  bhvPushableMetalBox
#It has virtual address 0x802B15E8 and rom address 0x6C5E8
 bhv_pushable_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x3a0
	jal	 obj_set_hitbox
	lw	$a0, 0x1160($a0)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$zero, $f4
	nop	
#This function is called from Behavior  bhvPoleGrabbing
#It has virtual address 0x802A6C20 and rom address 0x61C20
 bhv_pole_init:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x10
	andi	$t9, $t8, 0xff
	sw	$t9, 4($sp)
	lw	$t0, 4($sp)
	lui	$t2, 0x8036
	lw	$t2, 0x1160($t2)
	sll	$t1, $t0, 2
#This function is called from Behavior  bhvPoleGrabbing
#It has virtual address 0x802C63E8 and rom address 0x813E8
 bhv_pole_base_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x4120
	mtc1	$at, $f6
	lwc1	$f4, 0xa4($t6)
	lui	$t7, 0x8036
	lw	$t7, 0x1158($t7)
	sub.s	$f8, $f4, $f6
	lwc1	$f10, 0xa4($t7)
#This function is called from Behavior  bhvHeaveHo
#It has virtual address 0x802B2278 and rom address 0x6D278
 bhv_heave_ho_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x4000
	mtc1	$at, $f12
	jal	 cur_obj_scale
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
	beqz	$s0, 0x5c
#This function is called from Behavior  bhvBulletBill
#It has virtual address 0x802B3810 and rom address 0x6E810
 bhv_bullet_bill_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xc8($t6)
	sw	$t7, 0xf8($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvBulletBill
#It has virtual address 0x802B3BE0 and rom address 0x6EBE0
 bhv_bullet_bill_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x43c
	jal	 cur_obj_check_interacted
#This function is called from Behavior  bhvStar
#It has virtual address 0x802F24F4 and rom address 0xAD4F4
 bhv_collect_star_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x18
#This function is called from Behavior  bhvStar
#It has virtual address 0x802F25B0 and rom address 0xAD5B0
 bhv_collect_star_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd4($t6)
	addiu	$t8, $t7, 0x800
#This function is called from Behavior  bhvFireSpitter
#It has virtual address 0x8030D598 and rom address 0xC8598
 bhv_fire_spitter_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	jal	 cur_obj_scale
#This function is called from Behavior  bhvGoombaTripletSpawner
#It has virtual address 0x802FF214 and rom address 0xBA214
 bhv_goomba_triplet_spawner_update:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x1ac
#This function is called from Behavior  bhvCoinFormation
#It has virtual address 0x802ABEE4 and rom address 0x66EE4
 bhv_coin_formation_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 8
	andi	$t9, $t8, 0xff
	sw	$t9, 0xf4($t6)
#This function is called from Behavior  bhvCoinFormation
#It has virtual address 0x802ABF0C and rom address 0x66F0C
 bhv_coin_formation_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvBobomb
#It has virtual address 0x802E6A2C and rom address 0xA1A2C
 bhv_bobomb_init:
	lui	$at, 0x4020
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xe4($t6)
#This function is called from Behavior  bhvBobomb
#It has virtual address 0x802E742C and rom address 0xA242C
 bhv_bobomb_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $zero, 0xfa0
#This function is called from Behavior  bhvFlyGuy
#It has virtual address 0x802FF040 and rom address 0xBA040
 bhv_fly_guy_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
#This function is called from Behavior  bhv1Up
#It has virtual address 0x802F3D30 and rom address 0xAED30
 bhv_1up_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bhv_1up_common_init
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhv1Up
#It has virtual address 0x802F45B8 and rom address 0xAF5B8
 bhv_1up_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bhv_1up_interact
	nop	
	lui	$a0, 0x8036
	lw	$a0, 0x1160($a0)
#This function is called from Behavior  bhvIgloo
#It has virtual address 0x8030B478 and rom address 0xC6478
 Func_Custom_0x8030b478:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	addiu	$a0, $zero, 0
	lui	$t0, 0x8022
	lh	$t0, 0x261c($t0)
	andi	$t5, $t0, 0x3f
#This function is called from Behavior  bhvMontyMoleHole
#It has virtual address 0x803043F8 and rom address 0xBF3F8
 bhv_monty_mole_hole_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x68($t6)
	bne	$t7, $t6, 0x3c
#This function is called from Behavior  bhvMontyMole
#It has virtual address 0x803044C0 and rom address 0xBF4C0
 bhv_monty_mole_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	sw	$zero, 0xf4($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvMontyMole
#It has virtual address 0x80304BA8 and rom address 0xBFBA8
 bhv_monty_mole_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lui	$t6, 0x5024
#This function is called from Behavior  bhvBreakableBox
#It has virtual address 0x802B1B2C and rom address 0x6CB2C
 bhv_breakable_box_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x3b0
#This function is called from Behavior  bhvButterfly
#It has virtual address 0x802E8F68 and rom address 0xA3F68
 bhv_butterfly_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_init_animation
	addiu	$a0, $zero, 1
	jal	 random_float
#This function is called from Behavior  bhvButterfly
#It has virtual address 0x802E96C8 and rom address 0xA46C8
 bhv_butterfly_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  Bhv_Custom_0x13002f08
#It has virtual address 0x802ECC14 and rom address 0xA7C14
 bhv_bowser_bomb_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8036
	lw	$a1, 0x1158($a1)
#This function is called from Behavior  Bhv_Custom_0x13002f08
#It has virtual address 0x80276910 and rom address 0x31910
 bhv_toad_message_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	jal	 save_file_get_flags
	nop	
#This function is called from Behavior  Bhv_Custom_0x13002808
#It has virtual address 0x802C3440 and rom address 0x7E440
 bhv_boo_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xc8($t6)
	sw	$t7, 0x110($t6)
	jr	$ra
	nop	
#This function is called from Behavior  Bhv_Custom_0x13002808
#It has virtual address 0x802C4824 and rom address 0x7F824
 bhv_boo_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
#This function is called from Behavior  bhvTtmBowlingBallSpawner
#It has virtual address 0x802EEEB4 and rom address 0xA9EB4
 bhv_generic_bowling_ball_spawner_init:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x144($t6)
	beqz	$a0, 0x38
	nop	
#This function is called from Behavior  bhvTtmBowlingBallSpawner
#It has virtual address 0x802EEF9C and rom address 0xA9F9C
 bhv_generic_bowling_ball_spawner_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sdc1	$f20, 0x10($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 0x100
#This function is called from Behavior  bhvCloud
#It has virtual address 0x8030369C and rom address 0xBE69C
 bhv_cloud_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvMacroUkiki
#It has virtual address 0x802BBB98 and rom address 0x76B98
 bhv_ukiki_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 1
	lw	$t7, 0x144($t6)
#This function is called from Behavior  bhvMacroUkiki
#It has virtual address 0x802BBC0C and rom address 0x76C0C
 bhv_ukiki_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
#This function is called from Behavior  bhvWaterBombCannon
#It has virtual address 0x8030A11C and rom address 0xC511C
 bhv_water_bomb_cannon_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x435c
	mtc1	$at, $f12
	lui	$at, 0x4396
#This function is called from Behavior  bhvFlamethrower
#It has virtual address 0x802AF1E8 and rom address 0x6A1E8
 bhv_flamethrower_loop:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x84
#This function is called from Behavior  bhvFadingWarp
#It has virtual address 0x802AAB54 and rom address 0x65B54
 bhv_fading_warp_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0xd8
	nop	
#This function is called from Behavior  bhvChainChomp
#It has virtual address 0x80300E40 and rom address 0xBBE40
 bhv_chain_chomp_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  Bhv_Custom_0x13001488
#It has virtual address 0x802B1278 and rom address 0x6C278
 bhv_purple_switch_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
#This function is called from Behavior  Bhv_Custom_0x13000014
#It has virtual address 0x802B1AE0 and rom address 0x6CAE0
 bhv_hidden_object_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	bnez	$t7, 0x2c
#This function is called from Behavior  bhvWoodenPost
#It has virtual address 0x80300ECC and rom address 0xBBECC
 bhv_wooden_post_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x100($t6)
#This function is called from Behavior  bhvExclamationBox
#It has virtual address 0x802C19C0 and rom address 0x7C9C0
 bhv_exclamation_box_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$at, 0x4000
	mtc1	$at, $f12
	jal	 cur_obj_scale
	nop	
#This function is called from Behavior  bhvSmallWhomp
#It has virtual address 0x802C79D8 and rom address 0x829D8
 bhv_whomp_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
#This function is called from Behavior  bhvPitBowlingBall
#It has virtual address 0x802EF21C and rom address 0xAA21C
 bhv_bob_pit_bowling_ball_init:
	lui	$at, 0x4140
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xe4($t6)
#This function is called from Behavior  bhvPitBowlingBall
#It has virtual address 0x802EF274 and rom address 0xAA274
 bhv_bob_pit_bowling_ball_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 object_step
	nop	
	sh	$v0, 0x1a($sp)
	lui	$t6, 0x8036
#This function is called from Behavior  bhvJumpingBox
#It has virtual address 0x802B288C and rom address 0x6D88C
 bhv_jumping_box_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
#This function is called from Behavior  Bhv_Custom_0x130015f4
#It has virtual address 0x802B23E0 and rom address 0x6D3E0
 bhv_unused_poundable_platform:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$at, 0x8033
	jal	 cur_obj_scale
	lwc1	$f12, 0x7a8c($at)
	lui	$t6, 0x8036
#This function is called from Behavior  bhvSslMovingPyramidWall
#It has virtual address 0x802EFCD0 and rom address 0xAACD0
 bhv_ssl_moving_pyramid_wall_init:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x144($t6)
	beqz	$a0, 0x38
	nop	
#This function is called from Behavior  bhvSslMovingPyramidWall
#It has virtual address 0x802EFD8C and rom address 0xAAD8C
 bhv_ssl_moving_pyramid_wall_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x14c($t6)
	beqz	$a0, 0x2c
	nop	
#This function is called from Behavior  bhvHoot
#It has virtual address 0x802CA75C and rom address 0x8575C
 Func_Custom_0x802ca75c:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t0, 0x8022
	lh	$t0, 0x261c($t0)
	andi	$t1, $t0, 0x3f
	nop	
#This function is called from Behavior  bhvKoopa
#It has virtual address 0x802FBC4C and rom address 0xB6C4C
 bhv_koopa_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 4
#This function is called from Behavior  bhvKoopa
#It has virtual address 0x802FD7F8 and rom address 0xB87F8
 bhv_koopa_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lui	$t6, 0x5063
#This function is called from Behavior  bhvKoopaRaceEndpoint
#It has virtual address 0x802FD950 and rom address 0xB8950
 bhv_koopa_race_endpoint_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xf4($t6)
	beqz	$t7, 0xc0
#This function is called from Behavior  bhvThwomp2
#It has virtual address 0x802BC0F0 and rom address 0x770F0
 bhv_lll_moving_octagonal_mesh_platform_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x40
#This function is called from Behavior  bhvThwomp2
#It has virtual address 0x802B0BEC and rom address 0x6BBEC
 bhv_squarish_path_moving_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$at, 0x4120
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
#This function is called from Behavior  bhvPiranhaPlant
#It has virtual address 0x802CA720 and rom address 0x85720
 Func_Custom_0x802ca720:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t0, 0x8036
	lw	$t0, 0x1160($t0)
	addiu	$t1, $zero, 3
	sw	$t1, 0x180($t0)
#This function is called from Behavior  bhvMerryGoRoundBooManager
#It has virtual address 0x802C5224 and rom address 0x80224
 bhv_merry_go_round_boo_manager_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvKingBobomb
#It has virtual address 0x802A8064 and rom address 0x63064
 bhv_king_bobomb_loop:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x41a0
	mtc1	$at, $f4
	nop	
#This function is called from Behavior  bhvSLWalkingPenguin
#It has virtual address 0x802F8E54 and rom address 0xB3E54
 bhv_yoshi_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	move	$a1, $zero
	addiu	$a2, $zero, 0x18
#This function is called from Behavior  bhvThiHugeIslandTop
#It has virtual address 0x802BC660 and rom address 0x77660
 bhv_lll_wood_piece_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0x38
#This function is called from Behavior  bhvGoomba
#It has virtual address 0x802FF96C and rom address 0xBA96C
 bhv_goomba_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	jal	0x802fb87c
#This function is called from Behavior  bhvToxBox
#It has virtual address 0x802BDD68 and rom address 0x78D68
 bhv_tox_box_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x8d8
	jal	 load_object_collision_model
#This function is called from Behavior  bhvCapSwitch
#It has virtual address 0x802A7170 and rom address 0x62170
 bhv_cap_switch_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0xac
	b	0x1c
#This function is called from Behavior  bhvBetaMovingFlames
#It has virtual address 0x802AEEA4 and rom address 0x69EA4
 bhv_beta_moving_flames_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$at, 0x40a0
	mtc1	$at, $f12
	jal	 cur_obj_scale
	nop	
#This function is called from Behavior  bhvChuckya
#It has virtual address 0x802AA0AC and rom address 0x650AC
 bhv_chuckya_loop:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x41a0
	mtc1	$at, $f4
	nop	
#This function is called from Behavior  bhvSwoop
#It has virtual address 0x802FE8B4 and rom address 0xB98B4
 bhv_swoop_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
#This function is called from Behavior  bhvTowerDoor
#It has virtual address 0x802AA700 and rom address 0x65700
 bhv_tower_door_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0x30
#This function is called from Behavior  bhvCannonClosed
#It has virtual address 0x802E7C90 and rom address 0xA2C90
 bhv_cannon_closed_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 save_file_is_cannon_unlocked
	nop	
	addiu	$at, $zero, 1
	bne	$v0, $at, 0xa4
#This function is called from Behavior  bhvCannonClosed
#It has virtual address 0x802E7E54 and rom address 0xA2E54
 bhv_cannon_closed_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvBbhTumblingBridge
#It has virtual address 0x802AD890 and rom address 0x68890
 bhv_tumbling_bridge_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x2dc
	b	0x1c
#This function is called from Behavior  bhvScuttlebugSpawn
#It has virtual address 0x802C6B6C and rom address 0x81B6C
 bhv_scuttlebug_spawn_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0xf0
#This function is called from Behavior  bhvBlueCoinSwitch
#It has virtual address 0x802C242C and rom address 0x7D42C
 bhv_blue_coin_switch_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x4040
	mtc1	$at, $f12
	jal	 cur_obj_scale
#This function is called from Behavior  bhvHiddenBlueCoin
#It has virtual address 0x802C22B8 and rom address 0x7D2B8
 bhv_hidden_blue_coin_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvMerryGoRound
#It has virtual address 0x802A2BC4 and rom address 0x5DBC4
 cur_obj_rotate_face_angle_using_vel:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd0($t6)
	lw	$t8, 0x114($t6)
	addu	$t9, $t7, $t8
	sw	$t9, 0xd0($t6)
#This function is called from Behavior  bhvWaterBombSpawner
#It has virtual address 0x80306084 and rom address 0xC1084
 bhv_water_bomb_spawner_update:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x4348
	mtc1	$at, $f8
#This function is called from Behavior  bhvBooWithCage
#It has virtual address 0x802C515C and rom address 0x8015C
 bhv_boo_with_cage_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8034
	lh	$t6, -0x4d9c($t6)
	slti	$at, $t6, 0xc
	beqz	$at, 0x30
#This function is called from Behavior  bhvBooWithCage
#It has virtual address 0x802C51D4 and rom address 0x801D4
 bhv_boo_with_cage_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
#This function is called from Behavior  bhvAmbientSounds
#It has virtual address 0x802F0950 and rom address 0xAB950
 bhv_ambient_sounds_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8034
	lw	$t6, -0x3430($t6)
	addiu	$at, $zero, 3
	lbu	$t7, ($t6)
#This function is called from Behavior  bhvBirdsSoundLoop
#It has virtual address 0x802F0898 and rom address 0xAB898
 bhv_birds_sound_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8034
	lw	$t6, -0x3430($t6)
	addiu	$at, $zero, 3
#This function is called from Behavior  bhvHiddenStarTrigger
#It has virtual address 0x802F31BC and rom address 0xAE1BC
 bhv_hidden_star_trigger_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8036
	lw	$a1, 0x1158($a1)
	jal	 obj_check_if_collided_with_object
#This function is called from Behavior  bhvHiddenStar
#It has virtual address 0x802F3014 and rom address 0xAE014
 bhv_hidden_star_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x2c($sp)
	lui	$a0, 0x1300
	jal	 count_objects_with_behavior
	addiu	$a0, $a0, 0x3f1c
	sh	$v0, 0x36($sp)
#This function is called from Behavior  bhvHiddenStar
#It has virtual address 0x802F30F0 and rom address 0xAE0F0
 bhv_hidden_star_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvFirePiranhaPlant
#It has virtual address 0x8030CDDC and rom address 0xC7DDC
 bhv_fire_piranha_plant_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8033
	lw	$t7, 0x188($t6)
#This function is called from Behavior  bhvFirePiranhaPlant
#It has virtual address 0x8030D2F0 and rom address 0xC82F0
 bhv_fire_piranha_plant_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	jal	 cur_obj_scale
#This function is called from Behavior  bhvRecoveryHeart
#It has virtual address 0x80309B64 and rom address 0xC4B64
 bhv_recovery_heart_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x2bf0
	jal	 obj_set_hitbox
#This function is called from Behavior  bhvHiddenRedCoinStar
#It has virtual address 0x802F2C84 and rom address 0xADC84
 bhv_hidden_red_coin_star_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x2c($sp)
	lui	$t6, 0x8034
	lh	$t6, -0x453a($t6)
	addiu	$at, $zero, 3
	beq	$t6, $at, 0x34
#This function is called from Behavior  bhvHiddenRedCoinStar
#It has virtual address 0x802F2D8C and rom address 0xADD8C
 bhv_hidden_red_coin_star_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8036
