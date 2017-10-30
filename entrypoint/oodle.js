#!/usr/bin/env node

// node v7.2.0

console.log(process.argv.slice(2).join(' ').replace(/[aAeEiIoOuUyY]/g, (match) => match[0] == match[0].toLowerCase() ? 'oodle' : 'Oodle'));

