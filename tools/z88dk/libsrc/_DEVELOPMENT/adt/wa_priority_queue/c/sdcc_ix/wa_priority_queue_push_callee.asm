
; int wa_priority_queue_push_callee(wa_priority_queue_t *q, void *item)

SECTION code_clib
SECTION code_adt_wa_priority_queue

PUBLIC _wa_priority_queue_push_callee, l0_wa_priority_queue_push_callee

EXTERN asm_wa_priority_queue_push

_wa_priority_queue_push_callee:

   pop af
   pop hl
   pop bc
   push af

l0_wa_priority_queue_push_callee:

   push ix
   call asm_wa_priority_queue_push
   pop ix
   
   ret
