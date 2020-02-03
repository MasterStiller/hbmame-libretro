// license:BSD-3-Clause
// copyright-holders:Robbbert
#include "../mame/drivers/m92.cpp"

 /****************************************************
         Proyecto Shadows Mame Build Plus
*****************************************************/

 /****
 Hook
*******/

ROM_START( hooks01 ) //hookj1v4
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "h-h0-d_po01.3h", 0x000001, 0x040000, CRC(13fa1eca) SHA1(2a2a4d80a160535f667d6b425b532547018b0d22) )
	ROM_LOAD16_BYTE( "h-l0-d_po01.3h", 0x000000, 0x040000, CRC(f3efc301) SHA1(5664bf03054d7c23e90bffdc04d8ad55c1361ebf) )
	ROM_LOAD16_BYTE( "h-h1.rom",  0x080001, 0x020000, CRC(264ba1f0) SHA1(49ecf9b3e5375629607fb747abe264406065580b) )
	ROM_LOAD16_BYTE( "h-l1.rom",  0x080000, 0x020000, CRC(f9913731) SHA1(be7871d6843e76f66fae6b501c5ee83ccc366463) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0-a.3l", 0x00001, 0x10000, CRC(bd3d1f61) SHA1(0c884a0b5519f9c0823128872baf7b0c4078e5c4) )
	ROM_LOAD16_BYTE( "h-sl0-a.3n", 0x00000, 0x10000, CRC(76371def) SHA1(b7a86fd4eecdd8a538c32e08cd920c27bd50924b) )

	ROM_REGION( 0x100000, "gfx1", 0 )
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) 
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END

ROM_START( hooks02 ) //hookuxr
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "h-h0-d_po02.3h", 0x000001, 0x040000, CRC(298e5667) SHA1(f01a3744d20a9f9b48918648cefb740e6d223810) )
	ROM_LOAD16_BYTE( "h-l0-d_po02.3h", 0x000000, 0x040000, CRC(e234718d) SHA1(f2adc3bd813ef65a38dec0e0e6a25afc7f60aba7) )
	ROM_LOAD16_BYTE( "h-h1.rom",  0x080001, 0x020000, CRC(264ba1f0) SHA1(49ecf9b3e5375629607fb747abe264406065580b) )
	ROM_LOAD16_BYTE( "h-l1.rom",  0x080000, 0x020000, CRC(f9913731) SHA1(be7871d6843e76f66fae6b501c5ee83ccc366463) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0.rom", 0x00001, 0x10000, CRC(86a4e56e) SHA1(61163010e713be64368a4126f17d33cbdcf0c5ed) )
	ROM_LOAD16_BYTE( "h-sl0.rom", 0x00000, 0x10000, CRC(10fd9676) SHA1(1b51181a8f0711997e107e9a8b8f44341d08ea81) )

	ROM_REGION( 0x100000, "gfx1", 0 )
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) 
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END

ROM_START( hooks03 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "h-h0-d_po03.3h", 0x000001, 0x040000, CRC(b912ebf4) SHA1(66f785e9691fae877098709c550cac5ed4fb0bf9) )
	ROM_LOAD16_BYTE( "h-l0-d_po03.3h", 0x000000, 0x040000, CRC(6a5eee0c) SHA1(e5639a6b9c8773bf23fb21860d08fd788907cac4) )
	ROM_LOAD16_BYTE( "h-h1.rom",  0x080001, 0x020000, CRC(264ba1f0) SHA1(49ecf9b3e5375629607fb747abe264406065580b) )
	ROM_LOAD16_BYTE( "h-l1.rom",  0x080000, 0x020000, CRC(f9913731) SHA1(be7871d6843e76f66fae6b501c5ee83ccc366463) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0.rom", 0x00001, 0x10000, CRC(86a4e56e) SHA1(61163010e713be64368a4126f17d33cbdcf0c5ed) )
	ROM_LOAD16_BYTE( "h-sl0.rom", 0x00000, 0x10000, CRC(10fd9676) SHA1(1b51181a8f0711997e107e9a8b8f44341d08ea81) )

	ROM_REGION( 0x100000, "gfx1", 0 )
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) 
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END

ROM_START( hooks04 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "h-h0-d_po04.3h", 0x000001, 0x040000, CRC(637f7d17) SHA1(1f55be79503d1734c5d28621646ae031679565bb) )
	ROM_LOAD16_BYTE( "h-l0-d_po04.3h", 0x000000, 0x040000, CRC(180e4bbb) SHA1(67c7c98a95ca0ee738b2ad2510d2da510df67b40) )
	ROM_LOAD16_BYTE( "h-h1_po04.rom",  0x080001, 0x040000, CRC(9573d8b3) SHA1(c61063ab9e5a8cb8d2f4b8715325e7f1805bb960) )
	ROM_LOAD16_BYTE( "h-l1_po04.rom",  0x080000, 0x040000, CRC(eb5cd51c) SHA1(87773c0d8924d2bf00034ba8f8435d311be3c70d) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0.rom", 0x00001, 0x10000, CRC(86a4e56e) SHA1(61163010e713be64368a4126f17d33cbdcf0c5ed) )
	ROM_LOAD16_BYTE( "h-sl0.rom", 0x00000, 0x10000, CRC(10fd9676) SHA1(1b51181a8f0711997e107e9a8b8f44341d08ea81) )

	ROM_REGION( 0x100000, "gfx1", 0 )
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) 
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END

ROM_START( hooks05 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "h-h0-d_po05.3h", 0x000001, 0x040000, CRC(59db1de9) SHA1(672f674f61071dde79ae073c308bcffc79a9ee3d) )
	ROM_LOAD16_BYTE( "h-l0-d_po05.3h", 0x000000, 0x040000, CRC(6ccb3150) SHA1(0277ef8dabe44618e3f155de99eb058b4b9a5736) )
	ROM_LOAD16_BYTE( "h-h1.rom",  0x080001, 0x020000, CRC(264ba1f0) SHA1(49ecf9b3e5375629607fb747abe264406065580b) )
	ROM_LOAD16_BYTE( "h-l1.rom",  0x080000, 0x020000, CRC(f9913731) SHA1(be7871d6843e76f66fae6b501c5ee83ccc366463) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0.rom", 0x00001, 0x10000, CRC(86a4e56e) SHA1(61163010e713be64368a4126f17d33cbdcf0c5ed) )
	ROM_LOAD16_BYTE( "h-sl0.rom", 0x00000, 0x10000, CRC(10fd9676) SHA1(1b51181a8f0711997e107e9a8b8f44341d08ea81) )

	ROM_REGION( 0x100000, "gfx1", 0 )
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) 
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END

ROM_START( hooks06 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "h-h0-d_po06.3h", 0x000001, 0x040000, CRC(9124994c) SHA1(abe934f1fe1f0bf491fc5889119397ccf2f5e3ac) )
	ROM_LOAD16_BYTE( "h-l0-c_pw01.5h", 0x000000, 0x040000, CRC(caae5586) SHA1(5c3be06df19c5b3a5ef8f758edf3672485fc815a) )
	ROM_LOAD16_BYTE( "h-h1.rom",  0x080001, 0x020000, CRC(264ba1f0) SHA1(49ecf9b3e5375629607fb747abe264406065580b) )
	ROM_LOAD16_BYTE( "h-l1.rom",  0x080000, 0x020000, CRC(f9913731) SHA1(be7871d6843e76f66fae6b501c5ee83ccc366463) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0.rom", 0x00001, 0x10000, CRC(86a4e56e) SHA1(61163010e713be64368a4126f17d33cbdcf0c5ed) )
	ROM_LOAD16_BYTE( "h-sl0.rom", 0x00000, 0x10000, CRC(10fd9676) SHA1(1b51181a8f0711997e107e9a8b8f44341d08ea81) )

	ROM_REGION( 0x100000, "gfx1", 0 )
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) 
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END

ROM_START( hookus01 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "h-h0-c_pw01.3h", 0x000001, 0x040000, CRC(23e76b50) SHA1(899b7ab7fe070899971f2f0c71c45212a840a021) )
	ROM_LOAD16_BYTE( "h-l0-c_pw01.5h", 0x000000, 0x040000, CRC(caae5586) SHA1(5c3be06df19c5b3a5ef8f758edf3672485fc815a) )
	ROM_LOAD16_BYTE( "h-h1.rom",  0x080001, 0x020000, CRC(264ba1f0) SHA1(49ecf9b3e5375629607fb747abe264406065580b) )
	ROM_LOAD16_BYTE( "h-l1.rom",  0x080000, 0x020000, CRC(f9913731) SHA1(be7871d6843e76f66fae6b501c5ee83ccc366463) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0.rom", 0x00001, 0x10000, CRC(86a4e56e) SHA1(61163010e713be64368a4126f17d33cbdcf0c5ed) )
	ROM_LOAD16_BYTE( "h-sl0.rom", 0x00000, 0x10000, CRC(10fd9676) SHA1(1b51181a8f0711997e107e9a8b8f44341d08ea81) )

	ROM_REGION( 0x100000, "gfx1", 0 ) /* Tiles */
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) /* Sprites */
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END

ROM_START( hookus02 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "h-h0-c_pw02.3h", 0x000001, 0x040000, CRC(c3fc1cd4) SHA1(99c34bebb63e9953a422288366074c9c55fe710c) )
	ROM_LOAD16_BYTE( "h-l0-c_pw02.5h", 0x000000, 0x040000, CRC(afb39bbc) SHA1(e1228e21eac6ec765f664ef8f2048a9199627d22) )
	ROM_LOAD16_BYTE( "h-h1.rom",  0x080001, 0x020000, CRC(264ba1f0) SHA1(49ecf9b3e5375629607fb747abe264406065580b) )
	ROM_LOAD16_BYTE( "h-l1.rom",  0x080000, 0x020000, CRC(f9913731) SHA1(be7871d6843e76f66fae6b501c5ee83ccc366463) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0.rom", 0x00001, 0x10000, CRC(86a4e56e) SHA1(61163010e713be64368a4126f17d33cbdcf0c5ed) )
	ROM_LOAD16_BYTE( "h-sl0.rom", 0x00000, 0x10000, CRC(10fd9676) SHA1(1b51181a8f0711997e107e9a8b8f44341d08ea81) )

	ROM_REGION( 0x100000, "gfx1", 0 ) /* Tiles */
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) /* Sprites */
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END

ROM_START( hookxr ) //hookuxr
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "hookxr.3h", 0x000001, 0x040000, CRC(a603d006) SHA1(d0d905e9ac98f75010d63911a6038ab3d9d27dde) )
	ROM_LOAD16_BYTE( "hookxr.5h", 0x000000, 0x040000, CRC(8a1e8688) SHA1(39155c04a88a3d939abaf16037195d770d51ff26) )
	ROM_LOAD16_BYTE( "h-h1.rom",  0x080001, 0x020000, CRC(264ba1f0) SHA1(49ecf9b3e5375629607fb747abe264406065580b) )
	ROM_LOAD16_BYTE( "h-l1.rom",  0x080000, 0x020000, CRC(f9913731) SHA1(be7871d6843e76f66fae6b501c5ee83ccc366463) )

	ROM_REGION( 0x100000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "h-sh0-a.3l", 0x00001, 0x10000, CRC(bd3d1f61) SHA1(0c884a0b5519f9c0823128872baf7b0c4078e5c4) )
	ROM_LOAD16_BYTE( "h-sl0-a.3n", 0x00000, 0x10000, CRC(76371def) SHA1(b7a86fd4eecdd8a538c32e08cd920c27bd50924b) )

	ROM_REGION( 0x100000, "gfx1", 0 )
	ROM_LOAD( "hook-c0.rom", 0x000000, 0x040000, CRC(dec63dcf) SHA1(e9869110f832d782c460b123928b042c65fdf8bd) )
	ROM_LOAD( "hook-c1.rom", 0x040000, 0x040000, CRC(e4eb0b92) SHA1(159da3ec973490a153c69c96c1373cf4e0290736) )
	ROM_LOAD( "hook-c2.rom", 0x080000, 0x040000, CRC(a52b320b) SHA1(1522562239bb3b93ef552c47445daa4ee021495c) )
	ROM_LOAD( "hook-c3.rom", 0x0c0000, 0x040000, CRC(7ef67731) SHA1(af0b0ee6e1c06af04c609af7e077d4a7d76d8817) )

	ROM_REGION( 0x400000, "gfx2", 0 ) 
	ROM_LOAD( "hook-000.rom", 0x000000, 0x100000, CRC(ccceac30) SHA1(16e2b4393840344debe869034135feead7450184) )
	ROM_LOAD( "hook-010.rom", 0x100000, 0x100000, CRC(8ac8da67) SHA1(a9b962cb0bc0d8bc3bda8a0ed1ce06641d666b41) )
	ROM_LOAD( "hook-020.rom", 0x200000, 0x100000, CRC(8847af9a) SHA1(f82cdbd640fac373136219422172ca9fbf5d1830) )
	ROM_LOAD( "hook-030.rom", 0x300000, 0x100000, CRC(239e877e) SHA1(445e1096619c4e3a2d5b50a645fd45bd7c501590) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "hook-da.rom", 0x000000, 0x080000, CRC(88cd0212) SHA1(789532f5544b5d024d8af60eb8a5c133ae0d19d4) )
ROM_END


 /**********************
 Ninja Baseball Bat Man
*************************/

ROM_START( nbbatmans01 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "6_h0_po01.34",   0x000001, 0x040000, CRC(81e706e6) SHA1(95e3b0e490d8a0d8cb8f01c227e6a81bf764fcc5) )
	ROM_LOAD16_BYTE( "3_l0_po01.31",   0x000000, 0x040000, CRC(353c90e9) SHA1(6f53e93f83b08bbb9acd0f593265880a01f96df4) )
	ROM_LOAD16_BYTE( "a1-h1-.33", 0x080001, 0x040000, CRC(3ce2aab5) SHA1(b39f17853bcab7ab290fdfaf9f3d8e8c2d91072a) )
	ROM_LOAD16_BYTE( "a1-l1-.32", 0x080000, 0x040000, CRC(116d9bcc) SHA1(c2faf8d1c6b51ac1483757777fd55961b74501fb) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "a1-sh0-.14", 0x00001, 0x10000, CRC(b7fae3e6) SHA1(ce41380d6c0f29f2facf9bf23dd4403648cd9eb4) )
	ROM_LOAD16_BYTE( "a1-sl0-.17", 0x00000, 0x10000, CRC(b26d54fc) SHA1(136e1a83da08a0dc9046faf71f3f58d8d3095fde) )

	ROM_REGION( 0x200000, "gfx1", 0 ) 
	ROM_LOAD( "lh534k0c.9",  0x000000, 0x080000, CRC(314a0c6d) SHA1(a918ae638f10b18165f7d34ab7db54fbf258df01) )
	ROM_LOAD( "lh534k0e.10", 0x080000, 0x080000, CRC(dc31675b) SHA1(81b0a6b35285e855c778c7f32f31115f1edce099) )
	ROM_LOAD( "lh534k0f.11", 0x100000, 0x080000, CRC(e15d8bfb) SHA1(74ea6f9748ed52e579cb08445282c871b3fd0f3a) )
	ROM_LOAD( "lh534k0g.12", 0x180000, 0x080000, CRC(888d71a3) SHA1(d1609e326fda5ac579ddf1ad5dc77443ec2a180f) )

	ROM_REGION( 0x400000, "gfx2", 0 ) 
	ROM_LOAD( "lh538393.42", 0x000000, 0x100000, CRC(26cdd224) SHA1(ab2a3dd8eafec78866a0d45c1f051209025bdc77) )
	ROM_LOAD( "lh538394.43", 0x100000, 0x100000, CRC(4bbe94fa) SHA1(7c13b22e056dc1cf497ea0b3e9766579c33d4370) )
	ROM_LOAD( "lh538395.44", 0x200000, 0x100000, CRC(2a533b5e) SHA1(ceb9750b674adfa5fa0f88e46bce7b2b58440873) )
	ROM_LOAD( "lh538396.45", 0x300000, 0x100000, CRC(863a66fa) SHA1(0edc4734daee8fc1738df4f4f17bcd817f0ade0a) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "lh534k0k.8", 0x000000, 0x080000, CRC(735e6380) SHA1(bf019815e579ef2393c00869f101a01f746e04d6) )
ROM_END

ROM_START( nbbatmans02 ) //nbbatman1v4
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "6_h0_po02.34",   0x000001, 0x040000, CRC(7c17d59a) SHA1(1493e9f5ee06dbefe49e5ef74cff7cb7d3dc6f19) )
	ROM_LOAD16_BYTE( "3_l0_po02.31",   0x000000, 0x040000, CRC(e54a6e81) SHA1(7059eba1e03a6d1b96c8a5eee606ec503569c695) )
	ROM_LOAD16_BYTE( "a1-h1-.33", 0x080001, 0x040000, CRC(3ce2aab5) SHA1(b39f17853bcab7ab290fdfaf9f3d8e8c2d91072a) )
	ROM_LOAD16_BYTE( "a1-l1-.32", 0x080000, 0x040000, CRC(116d9bcc) SHA1(c2faf8d1c6b51ac1483757777fd55961b74501fb) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "a1-sh0-.14", 0x00001, 0x10000, CRC(b7fae3e6) SHA1(ce41380d6c0f29f2facf9bf23dd4403648cd9eb4) )
	ROM_LOAD16_BYTE( "a1-sl0-.17", 0x00000, 0x10000, CRC(b26d54fc) SHA1(136e1a83da08a0dc9046faf71f3f58d8d3095fde) )

	ROM_REGION( 0x200000, "gfx1", 0 ) 
	ROM_LOAD( "lh534k0c.9",  0x000000, 0x080000, CRC(314a0c6d) SHA1(a918ae638f10b18165f7d34ab7db54fbf258df01) )
	ROM_LOAD( "lh534k0e.10", 0x080000, 0x080000, CRC(dc31675b) SHA1(81b0a6b35285e855c778c7f32f31115f1edce099) )
	ROM_LOAD( "lh534k0f.11", 0x100000, 0x080000, CRC(e15d8bfb) SHA1(74ea6f9748ed52e579cb08445282c871b3fd0f3a) )
	ROM_LOAD( "lh534k0g.12", 0x180000, 0x080000, CRC(888d71a3) SHA1(d1609e326fda5ac579ddf1ad5dc77443ec2a180f) )

	ROM_REGION( 0x400000, "gfx2", 0 ) 
	ROM_LOAD( "lh538393.42", 0x000000, 0x100000, CRC(26cdd224) SHA1(ab2a3dd8eafec78866a0d45c1f051209025bdc77) )
	ROM_LOAD( "lh538394.43", 0x100000, 0x100000, CRC(4bbe94fa) SHA1(7c13b22e056dc1cf497ea0b3e9766579c33d4370) )
	ROM_LOAD( "lh538395.44", 0x200000, 0x100000, CRC(2a533b5e) SHA1(ceb9750b674adfa5fa0f88e46bce7b2b58440873) )
	ROM_LOAD( "lh538396.45", 0x300000, 0x100000, CRC(863a66fa) SHA1(0edc4734daee8fc1738df4f4f17bcd817f0ade0a) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "lh534k0k.8", 0x000000, 0x080000, CRC(735e6380) SHA1(bf019815e579ef2393c00869f101a01f746e04d6) )
ROM_END

ROM_START( nbbatmanus01 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "a1-h0-a_ps01.34", 0x000001, 0x040000, CRC(5f0a22de) SHA1(84a6c3abd72f000a3ce031376bcc5008a07fcd9d) )
	ROM_LOAD16_BYTE( "a1-l0-a_ps01.31", 0x000000, 0x040000, CRC(ff1773f3) SHA1(10a3b81b9dc0104e983a820375e72ee028515c2e) )
	ROM_LOAD16_BYTE( "a1-h1-.33",  0x080001, 0x040000, CRC(3ce2aab5) SHA1(b39f17853bcab7ab290fdfaf9f3d8e8c2d91072a) )
	ROM_LOAD16_BYTE( "a1-l1-.32",  0x080000, 0x040000, CRC(116d9bcc) SHA1(c2faf8d1c6b51ac1483757777fd55961b74501fb) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "a1-sh0-.14", 0x00001, 0x10000, CRC(b7fae3e6) SHA1(ce41380d6c0f29f2facf9bf23dd4403648cd9eb4) )
	ROM_LOAD16_BYTE( "a1-sl0-.17", 0x00000, 0x10000, CRC(b26d54fc) SHA1(136e1a83da08a0dc9046faf71f3f58d8d3095fde) )

	ROM_REGION( 0x200000, "gfx1", 0 )
	ROM_LOAD( "lh534k0c.9",  0x000000, 0x080000, CRC(314a0c6d) SHA1(a918ae638f10b18165f7d34ab7db54fbf258df01) )
	ROM_LOAD( "lh534k0e.10", 0x080000, 0x080000, CRC(dc31675b) SHA1(81b0a6b35285e855c778c7f32f31115f1edce099) )
	ROM_LOAD( "lh534k0f.11", 0x100000, 0x080000, CRC(e15d8bfb) SHA1(74ea6f9748ed52e579cb08445282c871b3fd0f3a) )
	ROM_LOAD( "lh534k0g.12", 0x180000, 0x080000, CRC(888d71a3) SHA1(d1609e326fda5ac579ddf1ad5dc77443ec2a180f) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "lh538393.42", 0x000000, 0x100000, CRC(26cdd224) SHA1(ab2a3dd8eafec78866a0d45c1f051209025bdc77) )
	ROM_LOAD( "lh538394.43", 0x100000, 0x100000, CRC(4bbe94fa) SHA1(7c13b22e056dc1cf497ea0b3e9766579c33d4370) )
	ROM_LOAD( "lh538395.44", 0x200000, 0x100000, CRC(2a533b5e) SHA1(ceb9750b674adfa5fa0f88e46bce7b2b58440873) )
	ROM_LOAD( "lh538396.45", 0x300000, 0x100000, CRC(863a66fa) SHA1(0edc4734daee8fc1738df4f4f17bcd817f0ade0a) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "lh534k0k.8", 0x000000, 0x080000, CRC(735e6380) SHA1(bf019815e579ef2393c00869f101a01f746e04d6) )
ROM_END

ROM_START( nbbatmanus02 ) //nbbatmanu
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "a1-h0-a_ps02.34", 0x000001, 0x040000, CRC(24a9b794) SHA1(0e36126d43e30e82e0f3f6f85aa17fbf6f9fc1ed) )
	ROM_LOAD16_BYTE( "a1-l0-a_ps02.31", 0x000000, 0x040000, CRC(846d7716) SHA1(edc8d09681c11f2d9dbdc35e64edb910ddc3ee4e) )
	ROM_LOAD16_BYTE( "a1-h1-.33",  0x080001, 0x040000, CRC(3ce2aab5) SHA1(b39f17853bcab7ab290fdfaf9f3d8e8c2d91072a) )
	ROM_LOAD16_BYTE( "a1-l1-.32",  0x080000, 0x040000, CRC(116d9bcc) SHA1(c2faf8d1c6b51ac1483757777fd55961b74501fb) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "a1-sh0-.14", 0x00001, 0x10000, CRC(b7fae3e6) SHA1(ce41380d6c0f29f2facf9bf23dd4403648cd9eb4) )
	ROM_LOAD16_BYTE( "a1-sl0-.17", 0x00000, 0x10000, CRC(b26d54fc) SHA1(136e1a83da08a0dc9046faf71f3f58d8d3095fde) )

	ROM_REGION( 0x200000, "gfx1", 0 )
	ROM_LOAD( "lh534k0c.9",  0x000000, 0x080000, CRC(314a0c6d) SHA1(a918ae638f10b18165f7d34ab7db54fbf258df01) )
	ROM_LOAD( "lh534k0e.10", 0x080000, 0x080000, CRC(dc31675b) SHA1(81b0a6b35285e855c778c7f32f31115f1edce099) )
	ROM_LOAD( "lh534k0f.11", 0x100000, 0x080000, CRC(e15d8bfb) SHA1(74ea6f9748ed52e579cb08445282c871b3fd0f3a) )
	ROM_LOAD( "lh534k0g.12", 0x180000, 0x080000, CRC(888d71a3) SHA1(d1609e326fda5ac579ddf1ad5dc77443ec2a180f) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "lh538393.42", 0x000000, 0x100000, CRC(26cdd224) SHA1(ab2a3dd8eafec78866a0d45c1f051209025bdc77) )
	ROM_LOAD( "lh538394.43", 0x100000, 0x100000, CRC(4bbe94fa) SHA1(7c13b22e056dc1cf497ea0b3e9766579c33d4370) )
	ROM_LOAD( "lh538395.44", 0x200000, 0x100000, CRC(2a533b5e) SHA1(ceb9750b674adfa5fa0f88e46bce7b2b58440873) )
	ROM_LOAD( "lh538396.45", 0x300000, 0x100000, CRC(863a66fa) SHA1(0edc4734daee8fc1738df4f4f17bcd817f0ade0a) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "lh534k0k.8", 0x000000, 0x080000, CRC(735e6380) SHA1(bf019815e579ef2393c00869f101a01f746e04d6) )
ROM_END

ROM_START( nbbatmanus03 ) //nbbatmanx2
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "a1-h0-a_ps03.34", 0x000001, 0x040000, CRC(9844b72c) SHA1(6ce65d8d73f608e1c69ee621a6ea6938422cf674) )
	ROM_LOAD16_BYTE( "a1-l0-a_ps03.31", 0x000000, 0x040000, CRC(d93afb35) SHA1(031c9bfec7b071bc9a4d3d5c40e15bad0c769331) )
	ROM_LOAD16_BYTE( "a1-h1-.33",  0x080001, 0x040000, CRC(3ce2aab5) SHA1(b39f17853bcab7ab290fdfaf9f3d8e8c2d91072a) )
	ROM_LOAD16_BYTE( "a1-l1-.32",  0x080000, 0x040000, CRC(116d9bcc) SHA1(c2faf8d1c6b51ac1483757777fd55961b74501fb) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "a1-sh0-.14", 0x00001, 0x10000, CRC(b7fae3e6) SHA1(ce41380d6c0f29f2facf9bf23dd4403648cd9eb4) )
	ROM_LOAD16_BYTE( "a1-sl0-.17", 0x00000, 0x10000, CRC(b26d54fc) SHA1(136e1a83da08a0dc9046faf71f3f58d8d3095fde) )

	ROM_REGION( 0x200000, "gfx1", 0 )
	ROM_LOAD( "lh534k0c.9",  0x000000, 0x080000, CRC(314a0c6d) SHA1(a918ae638f10b18165f7d34ab7db54fbf258df01) )
	ROM_LOAD( "lh534k0e.10", 0x080000, 0x080000, CRC(dc31675b) SHA1(81b0a6b35285e855c778c7f32f31115f1edce099) )
	ROM_LOAD( "lh534k0f.11", 0x100000, 0x080000, CRC(e15d8bfb) SHA1(74ea6f9748ed52e579cb08445282c871b3fd0f3a) )
	ROM_LOAD( "lh534k0g.12", 0x180000, 0x080000, CRC(888d71a3) SHA1(d1609e326fda5ac579ddf1ad5dc77443ec2a180f) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "lh538393.42", 0x000000, 0x100000, CRC(26cdd224) SHA1(ab2a3dd8eafec78866a0d45c1f051209025bdc77) )
	ROM_LOAD( "lh538394.43", 0x100000, 0x100000, CRC(4bbe94fa) SHA1(7c13b22e056dc1cf497ea0b3e9766579c33d4370) )
	ROM_LOAD( "lh538395.44", 0x200000, 0x100000, CRC(2a533b5e) SHA1(ceb9750b674adfa5fa0f88e46bce7b2b58440873) )
	ROM_LOAD( "lh538396.45", 0x300000, 0x100000, CRC(863a66fa) SHA1(0edc4734daee8fc1738df4f4f17bcd817f0ade0a) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "lh534k0k.8", 0x000000, 0x080000, CRC(735e6380) SHA1(bf019815e579ef2393c00869f101a01f746e04d6) )
ROM_END

ROM_START( nbbatmanus04 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "a1-h0-a_ps04.34", 0x000001, 0x040000, CRC(b49f2163) SHA1(38eeae2d24b4082a3ac5695bb527c4b574618772) )
	ROM_LOAD16_BYTE( "a1-l0-a_ps04.31", 0x000000, 0x040000, CRC(0183e06b) SHA1(5961ec9aab85881db6789d4020aade958a39a37c) )
	ROM_LOAD16_BYTE( "a1-h1-.33",  0x080001, 0x040000, CRC(3ce2aab5) SHA1(b39f17853bcab7ab290fdfaf9f3d8e8c2d91072a) )
	ROM_LOAD16_BYTE( "a1-l1-.32",  0x080000, 0x040000, CRC(116d9bcc) SHA1(c2faf8d1c6b51ac1483757777fd55961b74501fb) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "a1-sh0-.14", 0x00001, 0x10000, CRC(b7fae3e6) SHA1(ce41380d6c0f29f2facf9bf23dd4403648cd9eb4) )
	ROM_LOAD16_BYTE( "a1-sl0-.17", 0x00000, 0x10000, CRC(b26d54fc) SHA1(136e1a83da08a0dc9046faf71f3f58d8d3095fde) )

	ROM_REGION( 0x200000, "gfx1", 0 )
	ROM_LOAD( "lh534k0c.9",  0x000000, 0x080000, CRC(314a0c6d) SHA1(a918ae638f10b18165f7d34ab7db54fbf258df01) )
	ROM_LOAD( "lh534k0e.10", 0x080000, 0x080000, CRC(dc31675b) SHA1(81b0a6b35285e855c778c7f32f31115f1edce099) )
	ROM_LOAD( "lh534k0f.11", 0x100000, 0x080000, CRC(e15d8bfb) SHA1(74ea6f9748ed52e579cb08445282c871b3fd0f3a) )
	ROM_LOAD( "lh534k0g.12", 0x180000, 0x080000, CRC(888d71a3) SHA1(d1609e326fda5ac579ddf1ad5dc77443ec2a180f) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "lh538393.42", 0x000000, 0x100000, CRC(26cdd224) SHA1(ab2a3dd8eafec78866a0d45c1f051209025bdc77) )
	ROM_LOAD( "lh538394.43", 0x100000, 0x100000, CRC(4bbe94fa) SHA1(7c13b22e056dc1cf497ea0b3e9766579c33d4370) )
	ROM_LOAD( "lh538395.44", 0x200000, 0x100000, CRC(2a533b5e) SHA1(ceb9750b674adfa5fa0f88e46bce7b2b58440873) )
	ROM_LOAD( "lh538396.45", 0x300000, 0x100000, CRC(863a66fa) SHA1(0edc4734daee8fc1738df4f4f17bcd817f0ade0a) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "lh534k0k.8", 0x000000, 0x080000, CRC(735e6380) SHA1(bf019815e579ef2393c00869f101a01f746e04d6) )
ROM_END

ROM_START( nbbatmanus05 ) //nbbatmanx2
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "a1-h0-a_ps05.34", 0x000001, 0x040000, CRC(80aa047d) SHA1(3df5b9b3443c9fb49f812efb73aefedc28429ca5) )
	ROM_LOAD16_BYTE( "a1-l0-a_ps05.31", 0x000000, 0x040000, CRC(fd078299) SHA1(bf9fd24bb9ccc6d4c1019691a09722f00be8658e) )
	ROM_LOAD16_BYTE( "a1-h1-.33",  0x080001, 0x040000, CRC(3ce2aab5) SHA1(b39f17853bcab7ab290fdfaf9f3d8e8c2d91072a) )
	ROM_LOAD16_BYTE( "a1-l1-.32",  0x080000, 0x040000, CRC(116d9bcc) SHA1(c2faf8d1c6b51ac1483757777fd55961b74501fb) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "a1-sh0-.14", 0x00001, 0x10000, CRC(b7fae3e6) SHA1(ce41380d6c0f29f2facf9bf23dd4403648cd9eb4) )
	ROM_LOAD16_BYTE( "a1-sl0-.17", 0x00000, 0x10000, CRC(b26d54fc) SHA1(136e1a83da08a0dc9046faf71f3f58d8d3095fde) )

	ROM_REGION( 0x200000, "gfx1", 0 )
	ROM_LOAD( "lh534k0c.9",  0x000000, 0x080000, CRC(314a0c6d) SHA1(a918ae638f10b18165f7d34ab7db54fbf258df01) )
	ROM_LOAD( "lh534k0e.10", 0x080000, 0x080000, CRC(dc31675b) SHA1(81b0a6b35285e855c778c7f32f31115f1edce099) )
	ROM_LOAD( "lh534k0f.11", 0x100000, 0x080000, CRC(e15d8bfb) SHA1(74ea6f9748ed52e579cb08445282c871b3fd0f3a) )
	ROM_LOAD( "lh534k0g.12", 0x180000, 0x080000, CRC(888d71a3) SHA1(d1609e326fda5ac579ddf1ad5dc77443ec2a180f) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "lh538393.42", 0x000000, 0x100000, CRC(26cdd224) SHA1(ab2a3dd8eafec78866a0d45c1f051209025bdc77) )
	ROM_LOAD( "lh538394.43", 0x100000, 0x100000, CRC(4bbe94fa) SHA1(7c13b22e056dc1cf497ea0b3e9766579c33d4370) )
	ROM_LOAD( "lh538395.44", 0x200000, 0x100000, CRC(2a533b5e) SHA1(ceb9750b674adfa5fa0f88e46bce7b2b58440873) )
	ROM_LOAD( "lh538396.45", 0x300000, 0x100000, CRC(863a66fa) SHA1(0edc4734daee8fc1738df4f4f17bcd817f0ade0a) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "lh534k0k.8", 0x000000, 0x080000, CRC(735e6380) SHA1(bf019815e579ef2393c00869f101a01f746e04d6) )
ROM_END

ROM_START( nbbatmanus06 ) //nbbatmanx2
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "a1-h0-a_ps06.34", 0x000001, 0x040000, CRC(e0fc1836) SHA1(fb6d574bb13549a8ebc3d948c337d59601490bf4) )
	ROM_LOAD16_BYTE( "a1-l0-a_ps06.31", 0x000000, 0x040000, CRC(c50a979f) SHA1(79c3696ac2aa6631008c9ec6a1c98ed4356aeba4) )
	ROM_LOAD16_BYTE( "a1-h1-.33",  0x080001, 0x040000, CRC(3ce2aab5) SHA1(b39f17853bcab7ab290fdfaf9f3d8e8c2d91072a) )
	ROM_LOAD16_BYTE( "a1-l1-.32",  0x080000, 0x040000, CRC(116d9bcc) SHA1(c2faf8d1c6b51ac1483757777fd55961b74501fb) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "a1-sh0-.14", 0x00001, 0x10000, CRC(b7fae3e6) SHA1(ce41380d6c0f29f2facf9bf23dd4403648cd9eb4) )
	ROM_LOAD16_BYTE( "a1-sl0-.17", 0x00000, 0x10000, CRC(b26d54fc) SHA1(136e1a83da08a0dc9046faf71f3f58d8d3095fde) )

	ROM_REGION( 0x200000, "gfx1", 0 )
	ROM_LOAD( "lh534k0c.9",  0x000000, 0x080000, CRC(314a0c6d) SHA1(a918ae638f10b18165f7d34ab7db54fbf258df01) )
	ROM_LOAD( "lh534k0e.10", 0x080000, 0x080000, CRC(dc31675b) SHA1(81b0a6b35285e855c778c7f32f31115f1edce099) )
	ROM_LOAD( "lh534k0f.11", 0x100000, 0x080000, CRC(e15d8bfb) SHA1(74ea6f9748ed52e579cb08445282c871b3fd0f3a) )
	ROM_LOAD( "lh534k0g.12", 0x180000, 0x080000, CRC(888d71a3) SHA1(d1609e326fda5ac579ddf1ad5dc77443ec2a180f) )

	ROM_REGION( 0x400000, "gfx2", 0 )
	ROM_LOAD( "lh538393.42", 0x000000, 0x100000, CRC(26cdd224) SHA1(ab2a3dd8eafec78866a0d45c1f051209025bdc77) )
	ROM_LOAD( "lh538394.43", 0x100000, 0x100000, CRC(4bbe94fa) SHA1(7c13b22e056dc1cf497ea0b3e9766579c33d4370) )
	ROM_LOAD( "lh538395.44", 0x200000, 0x100000, CRC(2a533b5e) SHA1(ceb9750b674adfa5fa0f88e46bce7b2b58440873) )
	ROM_LOAD( "lh538396.45", 0x300000, 0x100000, CRC(863a66fa) SHA1(0edc4734daee8fc1738df4f4f17bcd817f0ade0a) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "lh534k0k.8", 0x000000, 0x080000, CRC(735e6380) SHA1(bf019815e579ef2393c00869f101a01f746e04d6) )
ROM_END

 /***************
 Undercover Cops
******************/

ROM_START( uccopsjs01 ) //uccopsj
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "uc_h0_a.ic28", 0x000001, 0x040000, CRC(9e17cada) SHA1(086bb9c1ab851cab3734c2f9188d8ff3c5f98913) )
	ROM_LOAD16_BYTE( "uc_l0_a.ic39", 0x000000, 0x040000, CRC(4a4e3208) SHA1(d61c74d46584e2c15e70f7a17b598e51981da9e8) )
	ROM_LOAD16_BYTE( "uc_h1_a_ps01.ic27", 0x080001, 0x020000, CRC(c298aba7) SHA1(1891c5449a2b5bc6e3fad8313eb4aa95e10839c2) )
	ROM_LOAD16_BYTE( "uc_l1_a_ps01.ic38", 0x080000, 0x020000, CRC(5ade2afb) SHA1(34a4829e18052dcb114c2d6ec10c0c9588192534) )

	ROM_REGION( 0x20000, "soundcpu", 0 )
	ROM_LOAD16_BYTE( "uc_sh0.ic30", 0x00001, 0x10000, CRC(f0ca1b03) SHA1(07154a2c747091f8be23587c109d91ed1672da6e) )
	ROM_LOAD16_BYTE( "uc_sl0.ic31", 0x00000, 0x10000, CRC(d1661723) SHA1(bdc00196aa2074e7b21e5949f73e9f2b93d76fd9) )

	ROM_REGION( 0x200000, "gfx1", 0 ) /* Tiles */
	ROM_LOAD( "uc_c0.ic26", 0x000000, 0x080000, CRC(6a419a36) SHA1(1907d15fcc4a8bf875d19768667ee4de4702cc2a) )
	ROM_LOAD( "uc_c1.ic25", 0x080000, 0x080000, CRC(d703ecc7) SHA1(9716a8fde668e63cf3060450eb32ea43edf143d8) )
	ROM_LOAD( "uc_c2.ic24", 0x100000, 0x080000, CRC(96397ac6) SHA1(6dfe507bd9f41b5d46d85ef5f46a368745593b52) )
	ROM_LOAD( "uc_c3.ic23", 0x180000, 0x080000, CRC(5d07d10d) SHA1(ee1a928b37043c476346f189f75d2bfcc44bffe6) )

	ROM_REGION( 0x400000, "gfx2", 0 ) /* Sprites */
	ROM_LOAD( "uc_030.ic37", 0x000000, 0x100000, CRC(97f7775e) SHA1(5cd147fd940b1ab6eba8e6c6f803bdcc5da5a563) )
	ROM_LOAD( "uc_020.ic36", 0x100000, 0x100000, CRC(5e0b1d65) SHA1(9e45753d10b2d7b580cd11cef74181209a424189) )
	ROM_LOAD( "uc_010.ic35", 0x200000, 0x100000, CRC(bdc224b3) SHA1(09477ec39890d954fac6ff653b9f46c9adea56b6) )
	ROM_LOAD( "uc_000.ic34", 0x300000, 0x100000, CRC(7526daec) SHA1(79431d711deb6ed09dc52be753b7b0f2c5588dc3) )

	ROM_REGION( 0x80000, "irem", 0 )
	ROM_LOAD( "uc_da.bin", 0x000000, 0x080000, CRC(0b2855e9) SHA1(70f9decd78eab679a2ccad69e01cb303b61e0d38) )
ROM_END

/*    YEAR  NAME            PARENT    MACHINE        INPUT       INIT             MONITOR COMPANY                 FULLNAME FLAGS */
// Guardians
GAME( 2016, hooks01,     hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "hack",         "Hook (1V4 2016-06-25)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 2018, hooks02,     hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "hack",         "Hook (Zinc Children's Edition Update 2018-05-15)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 2018, hooks03,     hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "hack",         "Hook (Zinc Children's Edition Update 2018-05-02)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 2018, hooks04,     hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "hack",         "Hook (X2 Edition 2018-05-05)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 1992, hooks05,     hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "RockyWall",       "Hook (Can Be Substituted For Character)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 2016, hooks06,     hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "RockyWall",       "Hook (Unrivalled Version 2016-08-18)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 1992, hookus01,    hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "hack",         "Hook (plus)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 2016, hookus02,    hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "RockyWall",       "Hook (Iron hook unparalleled 2016-07-31)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 2018, hookxr,      hook,        hook,          hook,      m92_state, empty_init,    ROT0,   "hack",         "Hook (Zinc Children's Edition Update 2018-09-14)",0 )
// Ninja Baseball Bat Man
GAME( 2018, nbbatmans01, nbbatman,    nbbatman,      nbbatman,  m92_state, init_bank,     ROT0,   "hack",         "Ninja Baseball Bat Man (X2 Edition 2018-05-05)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL )
GAME( 2017, nbbatmans02, nbbatman,    nbbatman,      nbbatman,  m92_state, init_bank,     ROT0,   "hack",         "Ninja Baseball Bat Man (1V4 2017-03-15)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL )
GAME( 2013, nbbatmanus01,nbbatman,    nbbatman,      nbbatman,  m92_state, init_bank,     ROT0,   "hack",         "Ninja Baseball Bat Man (Enhanced Edition 2013-06-04)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 2016, nbbatmanus02,nbbatman,    nbbatman,      nbbatman,  m92_state, init_bank,     ROT0,   "hack",         "Ninja Baseball Bat Man (New Lite Edition 2016-10-16)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 2019, nbbatmanus03,nbbatman,    nbbatman,      nbbatman,  m92_state, init_bank,     ROT0,   "hack",         "Ninja Baseball Bat Man (Warriors Edition 2019-02-23)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 2016, nbbatmanus04,nbbatman,    nbbatman,      nbbatman,  m92_state, init_bank,     ROT0,   "hack",         "Ninja Baseball Bat Man (Characters Changeable 2016-12-03)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 2019, nbbatmanus05,nbbatman,    nbbatman,      nbbatman,  m92_state, init_bank,     ROT0,   "hack",         "Ninja Baseball Bat Man (Warriors Edition 2019-03-08)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
GAME( 2020, nbbatmanus06,nbbatman,    nbbatman,      nbbatman,  m92_state, init_bank,     ROT0,   "hack",         "Ninja Baseball Bat Man (Warriors Edition 2020-01-15)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL)
// Undercover Cops
GAME( 2019, uccopsjs01,  uccops,      uccops,        uccops,    m92_state, empty_init,    ROT0,   "hack",         "Undercover Cops (Edition Enhanced 2019-07-22)", MACHINE_SUPPORTS_SAVE | MACHINE_NO_COCKTAIL )
