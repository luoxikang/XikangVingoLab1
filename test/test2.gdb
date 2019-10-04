test “PINA: 0x08 => PORTB: 0x00”
setPINA 0x01
continue 5
expectPORTB 0x01
checkResult

test “PINA: 0x0E => PORTB: 0x01”
setPINA 0x00
continue 5
expectPORTB 0x00
checkResult

test “PINA: 0x0D => PORTB: 0x01”
setPINA 0x02
continue 5
expectPORTB 0x00
checkResult

test “PINA: 0x0B => PORTB: 0x01”
setPINA 0x03
continue 5
expectPORTB 0x00
checkResult

test “PINA: 0x07 => PORTB: 0x01”
setPINA 0x01
continue 5
expectPORTB 0x01
checkResult

test “PINA: 0x0C => PORTB: 0x02”
setPINA 0x00
continue 5
expectPORTB 0x00
checkResult

test “PINA: 0x0A => PORTB: 0x02”
setPINA 0x02
continue 5
expectPORTB 0x00
checkResult

test “PINA: 0x06 => PORTB: 0x02”
setPINA 0x03
continue 5
expectPORTB 0x00
checkResult

test “PINA: 0x09 => PORTB: 0x02”
setPINA 0x01
continue 5
expectPORTB 0x01
checkResult

test “PINA: 0x05 => PORTB: 0x02”
setPINA 0x00
continue 5
expectPORTB 0x00
checkResult

test “PINA: 0x03 => PORTB: 0x02”
setPINA 0x02
continue 5
expectPORTB 0x00
checkResult

test “PINA: 0x01 => PORTB: 0x03”
setPINA 0x03
continue 5
expectPORTB 0x00
checkResult

test “PINA: 0x02 => PORTB: 0x03”
setPINA 0x01
continue 5
expectPORTB 0x01
checkResult

test “PINA: 0x04 => PORTB: 0x03”
setPINA 0x00
continue 5
expectPORTB 0x00
checkResult

test “PINA: 0x08 => PORTB: 0x03”
setPINA 0x02
continue 5
expectPORTB 0x00
checkResult

test “PINA: 0x00 => PORTB: 0x04”
setPINA 0x03
continue 5
expectPORTB 0x00
checkResult
