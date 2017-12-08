cmd_net/xfrm/built-in.o :=  ld -m elf_x86_64  -r -o net/xfrm/built-in.o net/xfrm/xfrm_policy.o net/xfrm/xfrm_state.o net/xfrm/xfrm_input.o net/xfrm/xfrm_algo.o net/xfrm/xfrm_user.o
