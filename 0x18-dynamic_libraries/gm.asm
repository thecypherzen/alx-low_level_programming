
gm:     file format elf64-x86-64


Disassembly of section .init:

0000000000400568 <_init>:
  400568:	48 83 ec 08          	sub    rsp,0x8
  40056c:	48 8b 05 85 1a 20 00 	mov    rax,QWORD PTR [rip+0x201a85]        # 601ff8 <__gmon_start__>
  400573:	48 85 c0             	test   rax,rax
  400576:	74 05                	je     40057d <_init+0x15>
  400578:	e8 b3 00 00 00       	call   400630 <__gmon_start__@plt>
  40057d:	48 83 c4 08          	add    rsp,0x8
  400581:	c3                   	ret    

Disassembly of section .plt:

0000000000400590 <.plt>:
  400590:	ff 35 72 1a 20 00    	push   QWORD PTR [rip+0x201a72]        # 602008 <_GLOBAL_OFFSET_TABLE_+0x8>
  400596:	ff 25 74 1a 20 00    	jmp    QWORD PTR [rip+0x201a74]        # 602010 <_GLOBAL_OFFSET_TABLE_+0x10>
  40059c:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]

00000000004005a0 <puts@plt>:
  4005a0:	ff 25 72 1a 20 00    	jmp    QWORD PTR [rip+0x201a72]        # 602018 <puts@GLIBC_2.2.5>
  4005a6:	68 00 00 00 00       	push   0x0
  4005ab:	e9 e0 ff ff ff       	jmp    400590 <.plt>

00000000004005b0 <__stack_chk_fail@plt>:
  4005b0:	ff 25 6a 1a 20 00    	jmp    QWORD PTR [rip+0x201a6a]        # 602020 <__stack_chk_fail@GLIBC_2.4>
  4005b6:	68 01 00 00 00       	push   0x1
  4005bb:	e9 d0 ff ff ff       	jmp    400590 <.plt>

00000000004005c0 <printf@plt>:
  4005c0:	ff 25 62 1a 20 00    	jmp    QWORD PTR [rip+0x201a62]        # 602028 <printf@GLIBC_2.2.5>
  4005c6:	68 02 00 00 00       	push   0x2
  4005cb:	e9 c0 ff ff ff       	jmp    400590 <.plt>

00000000004005d0 <dprintf@plt>:
  4005d0:	ff 25 5a 1a 20 00    	jmp    QWORD PTR [rip+0x201a5a]        # 602030 <dprintf@GLIBC_2.2.5>
  4005d6:	68 03 00 00 00       	push   0x3
  4005db:	e9 b0 ff ff ff       	jmp    400590 <.plt>

00000000004005e0 <__libc_start_main@plt>:
  4005e0:	ff 25 52 1a 20 00    	jmp    QWORD PTR [rip+0x201a52]        # 602038 <__libc_start_main@GLIBC_2.2.5>
  4005e6:	68 04 00 00 00       	push   0x4
  4005eb:	e9 a0 ff ff ff       	jmp    400590 <.plt>

00000000004005f0 <srand@plt>:
  4005f0:	ff 25 4a 1a 20 00    	jmp    QWORD PTR [rip+0x201a4a]        # 602040 <srand@GLIBC_2.2.5>
  4005f6:	68 05 00 00 00       	push   0x5
  4005fb:	e9 90 ff ff ff       	jmp    400590 <.plt>

0000000000400600 <time@plt>:
  400600:	ff 25 42 1a 20 00    	jmp    QWORD PTR [rip+0x201a42]        # 602048 <time@GLIBC_2.2.5>
  400606:	68 06 00 00 00       	push   0x6
  40060b:	e9 80 ff ff ff       	jmp    400590 <.plt>

0000000000400610 <atoi@plt>:
  400610:	ff 25 3a 1a 20 00    	jmp    QWORD PTR [rip+0x201a3a]        # 602050 <atoi@GLIBC_2.2.5>
  400616:	68 07 00 00 00       	push   0x7
  40061b:	e9 70 ff ff ff       	jmp    400590 <.plt>

0000000000400620 <rand@plt>:
  400620:	ff 25 32 1a 20 00    	jmp    QWORD PTR [rip+0x201a32]        # 602058 <rand@GLIBC_2.2.5>
  400626:	68 08 00 00 00       	push   0x8
  40062b:	e9 60 ff ff ff       	jmp    400590 <.plt>

Disassembly of section .plt.got:

0000000000400630 <__gmon_start__@plt>:
  400630:	ff 25 c2 19 20 00    	jmp    QWORD PTR [rip+0x2019c2]        # 601ff8 <__gmon_start__>
  400636:	66 90                	xchg   ax,ax

Disassembly of section .text:

0000000000400640 <_start>:
  400640:	31 ed                	xor    ebp,ebp
  400642:	49 89 d1             	mov    r9,rdx
  400645:	5e                   	pop    rsi
  400646:	48 89 e2             	mov    rdx,rsp
  400649:	48 83 e4 f0          	and    rsp,0xfffffffffffffff0
  40064d:	50                   	push   rax
  40064e:	54                   	push   rsp
  40064f:	49 c7 c0 70 0d 40 00 	mov    r8,0x400d70
  400656:	48 c7 c1 00 0d 40 00 	mov    rcx,0x400d00
  40065d:	48 c7 c7 a9 0b 40 00 	mov    rdi,0x400ba9
  400664:	e8 77 ff ff ff       	call   4005e0 <__libc_start_main@plt>
  400669:	f4                   	hlt    
  40066a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]

0000000000400670 <deregister_tm_clones>:
  400670:	b8 77 20 60 00       	mov    eax,0x602077
  400675:	55                   	push   rbp
  400676:	48 2d 70 20 60 00    	sub    rax,0x602070
  40067c:	48 83 f8 0e          	cmp    rax,0xe
  400680:	48 89 e5             	mov    rbp,rsp
  400683:	76 1b                	jbe    4006a0 <deregister_tm_clones+0x30>
  400685:	b8 00 00 00 00       	mov    eax,0x0
  40068a:	48 85 c0             	test   rax,rax
  40068d:	74 11                	je     4006a0 <deregister_tm_clones+0x30>
  40068f:	5d                   	pop    rbp
  400690:	bf 70 20 60 00       	mov    edi,0x602070
  400695:	ff e0                	jmp    rax
  400697:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
  40069e:	00 00 
  4006a0:	5d                   	pop    rbp
  4006a1:	c3                   	ret    
  4006a2:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
  4006a6:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
  4006ad:	00 00 00 

00000000004006b0 <register_tm_clones>:
  4006b0:	be 70 20 60 00       	mov    esi,0x602070
  4006b5:	55                   	push   rbp
  4006b6:	48 81 ee 70 20 60 00 	sub    rsi,0x602070
  4006bd:	48 c1 fe 03          	sar    rsi,0x3
  4006c1:	48 89 e5             	mov    rbp,rsp
  4006c4:	48 89 f0             	mov    rax,rsi
  4006c7:	48 c1 e8 3f          	shr    rax,0x3f
  4006cb:	48 01 c6             	add    rsi,rax
  4006ce:	48 d1 fe             	sar    rsi,1
  4006d1:	74 15                	je     4006e8 <register_tm_clones+0x38>
  4006d3:	b8 00 00 00 00       	mov    eax,0x0
  4006d8:	48 85 c0             	test   rax,rax
  4006db:	74 0b                	je     4006e8 <register_tm_clones+0x38>
  4006dd:	5d                   	pop    rbp
  4006de:	bf 70 20 60 00       	mov    edi,0x602070
  4006e3:	ff e0                	jmp    rax
  4006e5:	0f 1f 00             	nop    DWORD PTR [rax]
  4006e8:	5d                   	pop    rbp
  4006e9:	c3                   	ret    
  4006ea:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]

00000000004006f0 <__do_global_dtors_aux>:
  4006f0:	80 3d 79 19 20 00 00 	cmp    BYTE PTR [rip+0x201979],0x0        # 602070 <__TMC_END__>
  4006f7:	75 11                	jne    40070a <__do_global_dtors_aux+0x1a>
  4006f9:	55                   	push   rbp
  4006fa:	48 89 e5             	mov    rbp,rsp
  4006fd:	e8 6e ff ff ff       	call   400670 <deregister_tm_clones>
  400702:	5d                   	pop    rbp
  400703:	c6 05 66 19 20 00 01 	mov    BYTE PTR [rip+0x201966],0x1        # 602070 <__TMC_END__>
  40070a:	f3 c3                	repz ret 
  40070c:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]

0000000000400710 <frame_dummy>:
  400710:	bf 20 1e 60 00       	mov    edi,0x601e20
  400715:	48 83 3f 00          	cmp    QWORD PTR [rdi],0x0
  400719:	75 05                	jne    400720 <frame_dummy+0x10>
  40071b:	eb 93                	jmp    4006b0 <register_tm_clones>
  40071d:	0f 1f 00             	nop    DWORD PTR [rax]
  400720:	b8 00 00 00 00       	mov    eax,0x0
  400725:	48 85 c0             	test   rax,rax
  400728:	74 f1                	je     40071b <frame_dummy+0xb>
  40072a:	55                   	push   rbp
  40072b:	48 89 e5             	mov    rbp,rsp
  40072e:	ff d0                	call   rax
  400730:	5d                   	pop    rbp
  400731:	e9 7a ff ff ff       	jmp    4006b0 <register_tm_clones>

0000000000400736 <check_input>:
  400736:	55                   	push   rbp
  400737:	48 89 e5             	mov    rbp,rsp
  40073a:	48 89 7d e8          	mov    QWORD PTR [rbp-0x18],rdi
  40073e:	89 75 e4             	mov    DWORD PTR [rbp-0x1c],esi
  400741:	89 55 e0             	mov    DWORD PTR [rbp-0x20],edx
  400744:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [rbp-0x8],0x0
  40074b:	e9 8e 00 00 00       	jmp    4007de <check_input+0xa8>
  400750:	8b 45 f8             	mov    eax,DWORD PTR [rbp-0x8]
  400753:	48 98                	cdqe   
  400755:	48 8d 14 85 00 00 00 	lea    rdx,[rax*4+0x0]
  40075c:	00 
  40075d:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
  400761:	48 01 d0             	add    rax,rdx
  400764:	8b 00                	mov    eax,DWORD PTR [rax]
  400766:	85 c0                	test   eax,eax
  400768:	7e 1b                	jle    400785 <check_input+0x4f>
  40076a:	8b 45 f8             	mov    eax,DWORD PTR [rbp-0x8]
  40076d:	48 98                	cdqe   
  40076f:	48 8d 14 85 00 00 00 	lea    rdx,[rax*4+0x0]
  400776:	00 
  400777:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
  40077b:	48 01 d0             	add    rax,rdx
  40077e:	8b 00                	mov    eax,DWORD PTR [rax]
  400780:	83 f8 4b             	cmp    eax,0x4b
  400783:	7e 07                	jle    40078c <check_input+0x56>
  400785:	b8 00 00 00 00       	mov    eax,0x0
  40078a:	eb 7c                	jmp    400808 <check_input+0xd2>
  40078c:	8b 45 f8             	mov    eax,DWORD PTR [rbp-0x8]
  40078f:	83 c0 01             	add    eax,0x1
  400792:	89 45 fc             	mov    DWORD PTR [rbp-0x4],eax
  400795:	eb 3b                	jmp    4007d2 <check_input+0x9c>
  400797:	8b 45 f8             	mov    eax,DWORD PTR [rbp-0x8]
  40079a:	48 98                	cdqe   
  40079c:	48 8d 14 85 00 00 00 	lea    rdx,[rax*4+0x0]
  4007a3:	00 
  4007a4:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
  4007a8:	48 01 d0             	add    rax,rdx
  4007ab:	8b 10                	mov    edx,DWORD PTR [rax]
  4007ad:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
  4007b0:	48 98                	cdqe   
  4007b2:	48 8d 0c 85 00 00 00 	lea    rcx,[rax*4+0x0]
  4007b9:	00 
  4007ba:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
  4007be:	48 01 c8             	add    rax,rcx
  4007c1:	8b 00                	mov    eax,DWORD PTR [rax]
  4007c3:	39 c2                	cmp    edx,eax
  4007c5:	75 07                	jne    4007ce <check_input+0x98>
  4007c7:	b8 00 00 00 00       	mov    eax,0x0
  4007cc:	eb 3a                	jmp    400808 <check_input+0xd2>
  4007ce:	83 45 fc 01          	add    DWORD PTR [rbp-0x4],0x1
  4007d2:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
  4007d5:	3b 45 e0             	cmp    eax,DWORD PTR [rbp-0x20]
  4007d8:	7c bd                	jl     400797 <check_input+0x61>
  4007da:	83 45 f8 01          	add    DWORD PTR [rbp-0x8],0x1
  4007de:	8b 45 f8             	mov    eax,DWORD PTR [rbp-0x8]
  4007e1:	3b 45 e0             	cmp    eax,DWORD PTR [rbp-0x20]
  4007e4:	0f 8c 66 ff ff ff    	jl     400750 <check_input+0x1a>
  4007ea:	83 7d e0 05          	cmp    DWORD PTR [rbp-0x20],0x5
  4007ee:	75 13                	jne    400803 <check_input+0xcd>
  4007f0:	83 7d e4 00          	cmp    DWORD PTR [rbp-0x1c],0x0
  4007f4:	7e 06                	jle    4007fc <check_input+0xc6>
  4007f6:	83 7d e4 0f          	cmp    DWORD PTR [rbp-0x1c],0xf
  4007fa:	7e 07                	jle    400803 <check_input+0xcd>
  4007fc:	b8 00 00 00 00       	mov    eax,0x0
  400801:	eb 05                	jmp    400808 <check_input+0xd2>
  400803:	b8 01 00 00 00       	mov    eax,0x1
  400808:	5d                   	pop    rbp
  400809:	c3                   	ret    

000000000040080a <pick_numbers>:
  40080a:	55                   	push   rbp
  40080b:	48 89 e5             	mov    rbp,rsp
  40080e:	53                   	push   rbx
  40080f:	48 83 ec 18          	sub    rsp,0x18
  400813:	48 89 7d e8          	mov    QWORD PTR [rbp-0x18],rdi
  400817:	48 89 75 e0          	mov    QWORD PTR [rbp-0x20],rsi
  40081b:	bf 00 00 00 00       	mov    edi,0x0
  400820:	e8 db fd ff ff       	call   400600 <time@plt>
  400825:	89 c7                	mov    edi,eax
  400827:	e8 c4 fd ff ff       	call   4005f0 <srand@plt>
  40082c:	e8 ef fd ff ff       	call   400620 <rand@plt>
  400831:	89 c1                	mov    ecx,eax
  400833:	ba 89 88 88 88       	mov    edx,0x88888889
  400838:	89 c8                	mov    eax,ecx
  40083a:	f7 ea                	imul   edx
  40083c:	8d 04 0a             	lea    eax,[rdx+rcx*1]
  40083f:	c1 f8 03             	sar    eax,0x3
  400842:	89 c2                	mov    edx,eax
  400844:	89 c8                	mov    eax,ecx
  400846:	c1 f8 1f             	sar    eax,0x1f
  400849:	29 c2                	sub    edx,eax
  40084b:	89 d0                	mov    eax,edx
  40084d:	89 c2                	mov    edx,eax
  40084f:	c1 e2 04             	shl    edx,0x4
  400852:	29 c2                	sub    edx,eax
  400854:	89 c8                	mov    eax,ecx
  400856:	29 d0                	sub    eax,edx
  400858:	8d 50 01             	lea    edx,[rax+0x1]
  40085b:	48 8b 45 e0          	mov    rax,QWORD PTR [rbp-0x20]
  40085f:	89 10                	mov    DWORD PTR [rax],edx
  400861:	e8 ba fd ff ff       	call   400620 <rand@plt>
  400866:	89 c1                	mov    ecx,eax
  400868:	ba b5 81 4e 1b       	mov    edx,0x1b4e81b5
  40086d:	89 c8                	mov    eax,ecx
  40086f:	f7 ea                	imul   edx
  400871:	c1 fa 03             	sar    edx,0x3
  400874:	89 c8                	mov    eax,ecx
  400876:	c1 f8 1f             	sar    eax,0x1f
  400879:	29 c2                	sub    edx,eax
  40087b:	89 d0                	mov    eax,edx
  40087d:	6b c0 4b             	imul   eax,eax,0x4b
  400880:	29 c1                	sub    ecx,eax
  400882:	89 c8                	mov    eax,ecx
  400884:	8d 50 01             	lea    edx,[rax+0x1]
  400887:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
  40088b:	89 10                	mov    DWORD PTR [rax],edx
  40088d:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
  400891:	48 8d 58 04          	lea    rbx,[rax+0x4]
  400895:	e8 86 fd ff ff       	call   400620 <rand@plt>
  40089a:	89 c1                	mov    ecx,eax
  40089c:	ba b5 81 4e 1b       	mov    edx,0x1b4e81b5
  4008a1:	89 c8                	mov    eax,ecx
  4008a3:	f7 ea                	imul   edx
  4008a5:	c1 fa 03             	sar    edx,0x3
  4008a8:	89 c8                	mov    eax,ecx
  4008aa:	c1 f8 1f             	sar    eax,0x1f
  4008ad:	29 c2                	sub    edx,eax
  4008af:	89 d0                	mov    eax,edx
  4008b1:	6b c0 4b             	imul   eax,eax,0x4b
  4008b4:	29 c1                	sub    ecx,eax
  4008b6:	89 c8                	mov    eax,ecx
  4008b8:	83 c0 01             	add    eax,0x1
  4008bb:	89 03                	mov    DWORD PTR [rbx],eax
  4008bd:	48 8b 45 e0          	mov    rax,QWORD PTR [rbp-0x20]
  4008c1:	8b 08                	mov    ecx,DWORD PTR [rax]
  4008c3:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
  4008c7:	ba 02 00 00 00       	mov    edx,0x2
  4008cc:	89 ce                	mov    esi,ecx
  4008ce:	48 89 c7             	mov    rdi,rax
  4008d1:	e8 60 fe ff ff       	call   400736 <check_input>
  4008d6:	85 c0                	test   eax,eax
  4008d8:	74 b3                	je     40088d <pick_numbers+0x83>
  4008da:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
  4008de:	48 8d 58 08          	lea    rbx,[rax+0x8]
  4008e2:	e8 39 fd ff ff       	call   400620 <rand@plt>
  4008e7:	89 c1                	mov    ecx,eax
  4008e9:	ba b5 81 4e 1b       	mov    edx,0x1b4e81b5
  4008ee:	89 c8                	mov    eax,ecx
  4008f0:	f7 ea                	imul   edx
  4008f2:	c1 fa 03             	sar    edx,0x3
  4008f5:	89 c8                	mov    eax,ecx
  4008f7:	c1 f8 1f             	sar    eax,0x1f
  4008fa:	29 c2                	sub    edx,eax
  4008fc:	89 d0                	mov    eax,edx
  4008fe:	6b c0 4b             	imul   eax,eax,0x4b
  400901:	29 c1                	sub    ecx,eax
  400903:	89 c8                	mov    eax,ecx
  400905:	83 c0 01             	add    eax,0x1
  400908:	89 03                	mov    DWORD PTR [rbx],eax
  40090a:	48 8b 45 e0          	mov    rax,QWORD PTR [rbp-0x20]
  40090e:	8b 08                	mov    ecx,DWORD PTR [rax]
  400910:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
  400914:	ba 03 00 00 00       	mov    edx,0x3
  400919:	89 ce                	mov    esi,ecx
  40091b:	48 89 c7             	mov    rdi,rax
  40091e:	e8 13 fe ff ff       	call   400736 <check_input>
  400923:	85 c0                	test   eax,eax
  400925:	74 b3                	je     4008da <pick_numbers+0xd0>
  400927:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
  40092b:	48 8d 58 0c          	lea    rbx,[rax+0xc]
  40092f:	e8 ec fc ff ff       	call   400620 <rand@plt>
  400934:	89 c1                	mov    ecx,eax
  400936:	ba b5 81 4e 1b       	mov    edx,0x1b4e81b5
  40093b:	89 c8                	mov    eax,ecx
  40093d:	f7 ea                	imul   edx
  40093f:	c1 fa 03             	sar    edx,0x3
  400942:	89 c8                	mov    eax,ecx
  400944:	c1 f8 1f             	sar    eax,0x1f
  400947:	29 c2                	sub    edx,eax
  400949:	89 d0                	mov    eax,edx
  40094b:	6b c0 4b             	imul   eax,eax,0x4b
  40094e:	29 c1                	sub    ecx,eax
  400950:	89 c8                	mov    eax,ecx
  400952:	83 c0 01             	add    eax,0x1
  400955:	89 03                	mov    DWORD PTR [rbx],eax
  400957:	48 8b 45 e0          	mov    rax,QWORD PTR [rbp-0x20]
  40095b:	8b 08                	mov    ecx,DWORD PTR [rax]
  40095d:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
  400961:	ba 04 00 00 00       	mov    edx,0x4
  400966:	89 ce                	mov    esi,ecx
  400968:	48 89 c7             	mov    rdi,rax
  40096b:	e8 c6 fd ff ff       	call   400736 <check_input>
  400970:	85 c0                	test   eax,eax
  400972:	74 b3                	je     400927 <pick_numbers+0x11d>
  400974:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
  400978:	48 8d 58 10          	lea    rbx,[rax+0x10]
  40097c:	e8 9f fc ff ff       	call   400620 <rand@plt>
  400981:	89 c1                	mov    ecx,eax
  400983:	ba b5 81 4e 1b       	mov    edx,0x1b4e81b5
  400988:	89 c8                	mov    eax,ecx
  40098a:	f7 ea                	imul   edx
  40098c:	c1 fa 03             	sar    edx,0x3
  40098f:	89 c8                	mov    eax,ecx
  400991:	c1 f8 1f             	sar    eax,0x1f
  400994:	29 c2                	sub    edx,eax
  400996:	89 d0                	mov    eax,edx
  400998:	6b c0 4b             	imul   eax,eax,0x4b
  40099b:	29 c1                	sub    ecx,eax
  40099d:	89 c8                	mov    eax,ecx
  40099f:	83 c0 01             	add    eax,0x1
  4009a2:	89 03                	mov    DWORD PTR [rbx],eax
  4009a4:	48 8b 45 e0          	mov    rax,QWORD PTR [rbp-0x20]
  4009a8:	8b 08                	mov    ecx,DWORD PTR [rax]
  4009aa:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
  4009ae:	ba 05 00 00 00       	mov    edx,0x5
  4009b3:	89 ce                	mov    esi,ecx
  4009b5:	48 89 c7             	mov    rdi,rax
  4009b8:	e8 79 fd ff ff       	call   400736 <check_input>
  4009bd:	85 c0                	test   eax,eax
  4009bf:	74 b3                	je     400974 <pick_numbers+0x16a>
  4009c1:	90                   	nop
  4009c2:	48 83 c4 18          	add    rsp,0x18
  4009c6:	5b                   	pop    rbx
  4009c7:	5d                   	pop    rbp
  4009c8:	c3                   	ret    

00000000004009c9 <print_numbers>:
  4009c9:	55                   	push   rbp
  4009ca:	48 89 e5             	mov    rbp,rsp
  4009cd:	48 83 ec 20          	sub    rsp,0x20
  4009d1:	48 89 7d e8          	mov    QWORD PTR [rbp-0x18],rdi
  4009d5:	89 75 e4             	mov    DWORD PTR [rbp-0x1c],esi
  4009d8:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [rbp-0x4],0x0
  4009df:	eb 2b                	jmp    400a0c <print_numbers+0x43>
  4009e1:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
  4009e4:	48 98                	cdqe   
  4009e6:	48 8d 14 85 00 00 00 	lea    rdx,[rax*4+0x0]
  4009ed:	00 
  4009ee:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
  4009f2:	48 01 d0             	add    rax,rdx
  4009f5:	8b 00                	mov    eax,DWORD PTR [rax]
  4009f7:	89 c6                	mov    esi,eax
  4009f9:	bf 88 0d 40 00       	mov    edi,0x400d88
  4009fe:	b8 00 00 00 00       	mov    eax,0x0
  400a03:	e8 b8 fb ff ff       	call   4005c0 <printf@plt>
  400a08:	83 45 fc 01          	add    DWORD PTR [rbp-0x4],0x1
  400a0c:	83 7d fc 04          	cmp    DWORD PTR [rbp-0x4],0x4
  400a10:	7e cf                	jle    4009e1 <print_numbers+0x18>
  400a12:	8b 45 e4             	mov    eax,DWORD PTR [rbp-0x1c]
  400a15:	89 c6                	mov    esi,eax
  400a17:	bf 8c 0d 40 00       	mov    edi,0x400d8c
  400a1c:	b8 00 00 00 00       	mov    eax,0x0
  400a21:	e8 9a fb ff ff       	call   4005c0 <printf@plt>
  400a26:	90                   	nop
  400a27:	c9                   	leave  
  400a28:	c3                   	ret    

0000000000400a29 <check_result>:
  400a29:	55                   	push   rbp
  400a2a:	48 89 e5             	mov    rbp,rsp
  400a2d:	48 83 ec 30          	sub    rsp,0x30
  400a31:	48 89 7d e8          	mov    QWORD PTR [rbp-0x18],rdi
  400a35:	89 75 e4             	mov    DWORD PTR [rbp-0x1c],esi
  400a38:	48 89 55 d8          	mov    QWORD PTR [rbp-0x28],rdx
  400a3c:	89 4d e0             	mov    DWORD PTR [rbp-0x20],ecx
  400a3f:	c7 45 f0 00 00 00 00 	mov    DWORD PTR [rbp-0x10],0x0
  400a46:	c7 45 f4 00 00 00 00 	mov    DWORD PTR [rbp-0xc],0x0
  400a4d:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [rbp-0x8],0x0
  400a54:	eb 4d                	jmp    400aa3 <check_result+0x7a>
  400a56:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [rbp-0x4],0x0
  400a5d:	eb 3a                	jmp    400a99 <check_result+0x70>
  400a5f:	8b 45 f8             	mov    eax,DWORD PTR [rbp-0x8]
  400a62:	48 98                	cdqe   
  400a64:	48 8d 14 85 00 00 00 	lea    rdx,[rax*4+0x0]
  400a6b:	00 
  400a6c:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
  400a70:	48 01 d0             	add    rax,rdx
  400a73:	8b 10                	mov    edx,DWORD PTR [rax]
  400a75:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
  400a78:	48 98                	cdqe   
  400a7a:	48 8d 0c 85 00 00 00 	lea    rcx,[rax*4+0x0]
  400a81:	00 
  400a82:	48 8b 45 d8          	mov    rax,QWORD PTR [rbp-0x28]
  400a86:	48 01 c8             	add    rax,rcx
  400a89:	8b 00                	mov    eax,DWORD PTR [rax]
  400a8b:	39 c2                	cmp    edx,eax
  400a8d:	75 06                	jne    400a95 <check_result+0x6c>
  400a8f:	83 45 f0 01          	add    DWORD PTR [rbp-0x10],0x1
  400a93:	eb 0a                	jmp    400a9f <check_result+0x76>
  400a95:	83 45 fc 01          	add    DWORD PTR [rbp-0x4],0x1
  400a99:	83 7d fc 04          	cmp    DWORD PTR [rbp-0x4],0x4
  400a9d:	7e c0                	jle    400a5f <check_result+0x36>
  400a9f:	83 45 f8 01          	add    DWORD PTR [rbp-0x8],0x1
  400aa3:	83 7d f8 04          	cmp    DWORD PTR [rbp-0x8],0x4
  400aa7:	7e ad                	jle    400a56 <check_result+0x2d>
  400aa9:	8b 45 e4             	mov    eax,DWORD PTR [rbp-0x1c]
  400aac:	3b 45 e0             	cmp    eax,DWORD PTR [rbp-0x20]
  400aaf:	75 07                	jne    400ab8 <check_result+0x8f>
  400ab1:	c7 45 f4 01 00 00 00 	mov    DWORD PTR [rbp-0xc],0x1
  400ab8:	83 7d f0 00          	cmp    DWORD PTR [rbp-0x10],0x0
  400abc:	75 15                	jne    400ad3 <check_result+0xaa>
  400abe:	83 7d f4 01          	cmp    DWORD PTR [rbp-0xc],0x1
  400ac2:	75 0f                	jne    400ad3 <check_result+0xaa>
  400ac4:	bf 98 0d 40 00       	mov    edi,0x400d98
  400ac9:	e8 d2 fa ff ff       	call   4005a0 <puts@plt>
  400ace:	e9 d3 00 00 00       	jmp    400ba6 <check_result+0x17d>
  400ad3:	83 7d f0 01          	cmp    DWORD PTR [rbp-0x10],0x1
  400ad7:	75 15                	jne    400aee <check_result+0xc5>
  400ad9:	83 7d f4 01          	cmp    DWORD PTR [rbp-0xc],0x1
  400add:	75 0f                	jne    400aee <check_result+0xc5>
  400adf:	bf c0 0d 40 00       	mov    edi,0x400dc0
  400ae4:	e8 b7 fa ff ff       	call   4005a0 <puts@plt>
  400ae9:	e9 b8 00 00 00       	jmp    400ba6 <check_result+0x17d>
  400aee:	83 7d f0 02          	cmp    DWORD PTR [rbp-0x10],0x2
  400af2:	75 15                	jne    400b09 <check_result+0xe0>
  400af4:	83 7d f4 01          	cmp    DWORD PTR [rbp-0xc],0x1
  400af8:	75 0f                	jne    400b09 <check_result+0xe0>
  400afa:	bf e8 0d 40 00       	mov    edi,0x400de8
  400aff:	e8 9c fa ff ff       	call   4005a0 <puts@plt>
  400b04:	e9 9d 00 00 00       	jmp    400ba6 <check_result+0x17d>
  400b09:	83 7d f0 03          	cmp    DWORD PTR [rbp-0x10],0x3
  400b0d:	75 15                	jne    400b24 <check_result+0xfb>
  400b0f:	83 7d f4 00          	cmp    DWORD PTR [rbp-0xc],0x0
  400b13:	75 0f                	jne    400b24 <check_result+0xfb>
  400b15:	bf e8 0d 40 00       	mov    edi,0x400de8
  400b1a:	e8 81 fa ff ff       	call   4005a0 <puts@plt>
  400b1f:	e9 82 00 00 00       	jmp    400ba6 <check_result+0x17d>
  400b24:	83 7d f0 03          	cmp    DWORD PTR [rbp-0x10],0x3
  400b28:	75 12                	jne    400b3c <check_result+0x113>
  400b2a:	83 7d f4 01          	cmp    DWORD PTR [rbp-0xc],0x1
  400b2e:	75 0c                	jne    400b3c <check_result+0x113>
  400b30:	bf 10 0e 40 00       	mov    edi,0x400e10
  400b35:	e8 66 fa ff ff       	call   4005a0 <puts@plt>
  400b3a:	eb 6a                	jmp    400ba6 <check_result+0x17d>
  400b3c:	83 7d f0 04          	cmp    DWORD PTR [rbp-0x10],0x4
  400b40:	75 12                	jne    400b54 <check_result+0x12b>
  400b42:	83 7d f4 00          	cmp    DWORD PTR [rbp-0xc],0x0
  400b46:	75 0c                	jne    400b54 <check_result+0x12b>
  400b48:	bf 38 0e 40 00       	mov    edi,0x400e38
  400b4d:	e8 4e fa ff ff       	call   4005a0 <puts@plt>
  400b52:	eb 52                	jmp    400ba6 <check_result+0x17d>
  400b54:	83 7d f0 04          	cmp    DWORD PTR [rbp-0x10],0x4
  400b58:	75 12                	jne    400b6c <check_result+0x143>
  400b5a:	83 7d f4 01          	cmp    DWORD PTR [rbp-0xc],0x1
  400b5e:	75 0c                	jne    400b6c <check_result+0x143>
  400b60:	bf 60 0e 40 00       	mov    edi,0x400e60
  400b65:	e8 36 fa ff ff       	call   4005a0 <puts@plt>
  400b6a:	eb 3a                	jmp    400ba6 <check_result+0x17d>
  400b6c:	83 7d f0 05          	cmp    DWORD PTR [rbp-0x10],0x5
  400b70:	75 12                	jne    400b84 <check_result+0x15b>
  400b72:	83 7d f4 00          	cmp    DWORD PTR [rbp-0xc],0x0
  400b76:	75 0c                	jne    400b84 <check_result+0x15b>
  400b78:	bf 88 0e 40 00       	mov    edi,0x400e88
  400b7d:	e8 1e fa ff ff       	call   4005a0 <puts@plt>
  400b82:	eb 22                	jmp    400ba6 <check_result+0x17d>
  400b84:	83 7d f0 05          	cmp    DWORD PTR [rbp-0x10],0x5
  400b88:	75 12                	jne    400b9c <check_result+0x173>
  400b8a:	83 7d f4 01          	cmp    DWORD PTR [rbp-0xc],0x1
  400b8e:	75 0c                	jne    400b9c <check_result+0x173>
  400b90:	bf b8 0e 40 00       	mov    edi,0x400eb8
  400b95:	e8 06 fa ff ff       	call   4005a0 <puts@plt>
  400b9a:	eb 0a                	jmp    400ba6 <check_result+0x17d>
  400b9c:	bf de 0e 40 00       	mov    edi,0x400ede
  400ba1:	e8 fa f9 ff ff       	call   4005a0 <puts@plt>
  400ba6:	90                   	nop
  400ba7:	c9                   	leave  
  400ba8:	c3                   	ret    

0000000000400ba9 <main>:
  400ba9:	55                   	push   rbp
  400baa:	48 89 e5             	mov    rbp,rsp
  400bad:	48 83 ec 60          	sub    rsp,0x60
  400bb1:	89 7d ac             	mov    DWORD PTR [rbp-0x54],edi
  400bb4:	48 89 75 a0          	mov    QWORD PTR [rbp-0x60],rsi
  400bb8:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
  400bbf:	00 00 
  400bc1:	48 89 45 f8          	mov    QWORD PTR [rbp-0x8],rax
  400bc5:	31 c0                	xor    eax,eax
  400bc7:	83 7d ac 07          	cmp    DWORD PTR [rbp-0x54],0x7
  400bcb:	74 1e                	je     400beb <main+0x42>
  400bcd:	be f0 0e 40 00       	mov    esi,0x400ef0
  400bd2:	bf 02 00 00 00       	mov    edi,0x2
  400bd7:	b8 00 00 00 00       	mov    eax,0x0
  400bdc:	e8 ef f9 ff ff       	call   4005d0 <dprintf@plt>
  400be1:	b8 01 00 00 00       	mov    eax,0x1
  400be6:	e9 f8 00 00 00       	jmp    400ce3 <main+0x13a>
  400beb:	48 8b 45 a0          	mov    rax,QWORD PTR [rbp-0x60]
  400bef:	48 83 c0 08          	add    rax,0x8
  400bf3:	48 8b 00             	mov    rax,QWORD PTR [rax]
  400bf6:	48 89 c7             	mov    rdi,rax
  400bf9:	e8 12 fa ff ff       	call   400610 <atoi@plt>
  400bfe:	89 45 c0             	mov    DWORD PTR [rbp-0x40],eax
  400c01:	48 8b 45 a0          	mov    rax,QWORD PTR [rbp-0x60]
  400c05:	48 83 c0 10          	add    rax,0x10
  400c09:	48 8b 00             	mov    rax,QWORD PTR [rax]
  400c0c:	48 89 c7             	mov    rdi,rax
  400c0f:	e8 fc f9 ff ff       	call   400610 <atoi@plt>
  400c14:	89 45 c4             	mov    DWORD PTR [rbp-0x3c],eax
  400c17:	48 8b 45 a0          	mov    rax,QWORD PTR [rbp-0x60]
  400c1b:	48 83 c0 18          	add    rax,0x18
  400c1f:	48 8b 00             	mov    rax,QWORD PTR [rax]
  400c22:	48 89 c7             	mov    rdi,rax
  400c25:	e8 e6 f9 ff ff       	call   400610 <atoi@plt>
  400c2a:	89 45 c8             	mov    DWORD PTR [rbp-0x38],eax
  400c2d:	48 8b 45 a0          	mov    rax,QWORD PTR [rbp-0x60]
  400c31:	48 83 c0 20          	add    rax,0x20
  400c35:	48 8b 00             	mov    rax,QWORD PTR [rax]
  400c38:	48 89 c7             	mov    rdi,rax
  400c3b:	e8 d0 f9 ff ff       	call   400610 <atoi@plt>
  400c40:	89 45 cc             	mov    DWORD PTR [rbp-0x34],eax
  400c43:	48 8b 45 a0          	mov    rax,QWORD PTR [rbp-0x60]
  400c47:	48 83 c0 28          	add    rax,0x28
  400c4b:	48 8b 00             	mov    rax,QWORD PTR [rax]
  400c4e:	48 89 c7             	mov    rdi,rax
  400c51:	e8 ba f9 ff ff       	call   400610 <atoi@plt>
  400c56:	89 45 d0             	mov    DWORD PTR [rbp-0x30],eax
  400c59:	48 8b 45 a0          	mov    rax,QWORD PTR [rbp-0x60]
  400c5d:	48 83 c0 30          	add    rax,0x30
  400c61:	48 8b 00             	mov    rax,QWORD PTR [rax]
  400c64:	48 89 c7             	mov    rdi,rax
  400c67:	e8 a4 f9 ff ff       	call   400610 <atoi@plt>
  400c6c:	89 45 bc             	mov    DWORD PTR [rbp-0x44],eax
  400c6f:	8b 4d bc             	mov    ecx,DWORD PTR [rbp-0x44]
  400c72:	48 8d 45 c0          	lea    rax,[rbp-0x40]
  400c76:	ba 05 00 00 00       	mov    edx,0x5
  400c7b:	89 ce                	mov    esi,ecx
  400c7d:	48 89 c7             	mov    rdi,rax
  400c80:	e8 b1 fa ff ff       	call   400736 <check_input>
  400c85:	85 c0                	test   eax,eax
  400c87:	75 1b                	jne    400ca4 <main+0xfb>
  400c89:	be f0 0e 40 00       	mov    esi,0x400ef0
  400c8e:	bf 02 00 00 00       	mov    edi,0x2
  400c93:	b8 00 00 00 00       	mov    eax,0x0
  400c98:	e8 33 f9 ff ff       	call   4005d0 <dprintf@plt>
  400c9d:	b8 01 00 00 00       	mov    eax,0x1
  400ca2:	eb 3f                	jmp    400ce3 <main+0x13a>
  400ca4:	48 8d 55 b8          	lea    rdx,[rbp-0x48]
  400ca8:	48 8d 45 e0          	lea    rax,[rbp-0x20]
  400cac:	48 89 d6             	mov    rsi,rdx
  400caf:	48 89 c7             	mov    rdi,rax
  400cb2:	e8 53 fb ff ff       	call   40080a <pick_numbers>
  400cb7:	8b 55 b8             	mov    edx,DWORD PTR [rbp-0x48]
  400cba:	48 8d 45 e0          	lea    rax,[rbp-0x20]
  400cbe:	89 d6                	mov    esi,edx
  400cc0:	48 89 c7             	mov    rdi,rax
  400cc3:	e8 01 fd ff ff       	call   4009c9 <print_numbers>
  400cc8:	8b 75 b8             	mov    esi,DWORD PTR [rbp-0x48]
  400ccb:	8b 4d bc             	mov    ecx,DWORD PTR [rbp-0x44]
  400cce:	48 8d 55 c0          	lea    rdx,[rbp-0x40]
  400cd2:	48 8d 45 e0          	lea    rax,[rbp-0x20]
  400cd6:	48 89 c7             	mov    rdi,rax
  400cd9:	e8 4b fd ff ff       	call   400a29 <check_result>
  400cde:	b8 00 00 00 00       	mov    eax,0x0
  400ce3:	48 8b 4d f8          	mov    rcx,QWORD PTR [rbp-0x8]
  400ce7:	64 48 33 0c 25 28 00 	xor    rcx,QWORD PTR fs:0x28
  400cee:	00 00 
  400cf0:	74 05                	je     400cf7 <main+0x14e>
  400cf2:	e8 b9 f8 ff ff       	call   4005b0 <__stack_chk_fail@plt>
  400cf7:	c9                   	leave  
  400cf8:	c3                   	ret    
  400cf9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

0000000000400d00 <__libc_csu_init>:
  400d00:	41 57                	push   r15
  400d02:	41 56                	push   r14
  400d04:	41 89 ff             	mov    r15d,edi
  400d07:	41 55                	push   r13
  400d09:	41 54                	push   r12
  400d0b:	4c 8d 25 fe 10 20 00 	lea    r12,[rip+0x2010fe]        # 601e10 <__frame_dummy_init_array_entry>
  400d12:	55                   	push   rbp
  400d13:	48 8d 2d fe 10 20 00 	lea    rbp,[rip+0x2010fe]        # 601e18 <__do_global_dtors_aux_fini_array_entry>
  400d1a:	53                   	push   rbx
  400d1b:	49 89 f6             	mov    r14,rsi
  400d1e:	49 89 d5             	mov    r13,rdx
  400d21:	4c 29 e5             	sub    rbp,r12
  400d24:	48 83 ec 08          	sub    rsp,0x8
  400d28:	48 c1 fd 03          	sar    rbp,0x3
  400d2c:	e8 37 f8 ff ff       	call   400568 <_init>
  400d31:	48 85 ed             	test   rbp,rbp
  400d34:	74 20                	je     400d56 <__libc_csu_init+0x56>
  400d36:	31 db                	xor    ebx,ebx
  400d38:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
  400d3f:	00 
  400d40:	4c 89 ea             	mov    rdx,r13
  400d43:	4c 89 f6             	mov    rsi,r14
  400d46:	44 89 ff             	mov    edi,r15d
  400d49:	41 ff 14 dc          	call   QWORD PTR [r12+rbx*8]
  400d4d:	48 83 c3 01          	add    rbx,0x1
  400d51:	48 39 eb             	cmp    rbx,rbp
  400d54:	75 ea                	jne    400d40 <__libc_csu_init+0x40>
  400d56:	48 83 c4 08          	add    rsp,0x8
  400d5a:	5b                   	pop    rbx
  400d5b:	5d                   	pop    rbp
  400d5c:	41 5c                	pop    r12
  400d5e:	41 5d                	pop    r13
  400d60:	41 5e                	pop    r14
  400d62:	41 5f                	pop    r15
  400d64:	c3                   	ret    
  400d65:	90                   	nop
  400d66:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
  400d6d:	00 00 00 

0000000000400d70 <__libc_csu_fini>:
  400d70:	f3 c3                	repz ret 

Disassembly of section .fini:

0000000000400d74 <_fini>:
  400d74:	48 83 ec 08          	sub    rsp,0x8
  400d78:	48 83 c4 08          	add    rsp,0x8
  400d7c:	c3                   	ret    
