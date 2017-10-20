import re
import sys

if len(sys.argv) > 1:
    for i in range(1, len(sys.argv)):
      print(re.sub('[AEIOUY]', 'Oodle', re.sub('[aeiouy]', 'oodle', str(sys.argv[i]))), end=' ', flush=True)
else:
  print ('Too few arguments.')
