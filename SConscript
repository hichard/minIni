from building import *

cwd     = GetCurrentDir()
src     = Split('''
dev/minIni.c
''')

if GetDepend(['MININI_USING_EXAMPLE']):
    src += Glob('example/*.c')

CPPPATH = [cwd + '/dev']
group = DefineGroup('minIni', src, depend = ['RT_USING_DFS', 'RT_USING_INI'], CPPPATH = CPPPATH)

Return('group')
