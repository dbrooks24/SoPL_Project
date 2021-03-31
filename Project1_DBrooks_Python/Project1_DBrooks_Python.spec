# -*- mode: python ; coding: utf-8 -*-

block_cipher = None


a = Analysis(['Project1_DBrooks_Python.py'],
             pathex=['C:\\Users\\David Brooks\\OneDrive - Kent State University\\Spring 2021\\Structure Of Programming Languages\\Project_git\\SoPL_Project\\Project1_DBrooks_Python'],
             binaries=[],
             datas=[],
             hiddenimports=[],
             hookspath=[],
             runtime_hooks=[],
             excludes=[],
             win_no_prefer_redirects=False,
             win_private_assemblies=False,
             cipher=block_cipher,
             noarchive=False)
pyz = PYZ(a.pure, a.zipped_data,
             cipher=block_cipher)
exe = EXE(pyz,
          a.scripts,
          a.binaries,
          a.zipfiles,
          a.datas,
          [],
          name='Project1_DBrooks_Python',
          debug=False,
          bootloader_ignore_signals=False,
          strip=False,
          upx=True,
          upx_exclude=[],
          runtime_tmpdir=None,
          console=False )
