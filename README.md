This is a simple project that simulates a UART receive buffer using a singly linked list in C. In embedded systems, data received over UART often gets stored byte-by-byte into a queue- this project mimics that behavior in software.

It supports:

Enqueuing characters as they "arrive"
Dequeuing characters for processing
Checking if the buffer is empty
Printing the current state of the buffer
