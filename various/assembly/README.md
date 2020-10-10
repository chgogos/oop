# ASSEMBLY

## Compiler explorer

<https://godbolt.org/>    

## Comparing C to machine language

<https://www.youtube.com/watch?v=yOyaJXpAYZQ>

    ```
    $ gcc fib.c -o fib
    $ otool -tv fib
    fib:
    (__TEXT,__text) section
    _main:
    0000000100003f30	pushq	%rbp
    0000000100003f31	movq	%rsp, %rbp
    0000000100003f34	subq	$0x10, %rsp
    0000000100003f38	movl	$0x0, -0x4(%rbp)
    0000000100003f3f	movl	$0x0, -0x8(%rbp)
    0000000100003f46	movl	$0x1, -0xc(%rbp)
    0000000100003f4d	movl	-0x8(%rbp), %esi
    0000000100003f50	leaq	0x4f(%rip), %rdi
    0000000100003f57	movb	$0x0, %al
    0000000100003f59	callq	0x100003f86
    0000000100003f5e	movl	-0x8(%rbp), %ecx
    0000000100003f61	addl	-0xc(%rbp), %ecx
    0000000100003f64	movl	%ecx, -0x10(%rbp)
    0000000100003f67	movl	-0xc(%rbp), %ecx
    0000000100003f6a	movl	%ecx, -0x8(%rbp)
    0000000100003f6d	movl	-0x10(%rbp), %ecx
    0000000100003f70	movl	%ecx, -0xc(%rbp)
    0000000100003f73	cmpl	$0xff, -0x8(%rbp)
    0000000100003f7a	jl	0x100003f4d
    0000000100003f80	jmp	0x100003f3f

   