from building import *

cwd     = GetCurrentDir()
src     = Split('''
src/minIni.c
''')
CPPPATH = [cwd + '/dev']
group = DefineGroup('minIni', src, depend = ['RT_USING_DFS', 'RT_USING_INI'], CPPPATH = CPPPATH)

Return('group')
