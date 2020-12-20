project('graphical_hello', 'c', default_options: ['c_std=c11',
        'warning_level=1', 'werror=true', 'buildtype=debugoptimized'],
        version: '0.1.0')

srcs = ['graphical_hello.c']
exe = 'graphical_hello'
gtk = dependency('gtk+-3.0')

executable(exe, srcs, dependencies: [gtk], install: true)