#ifndef ECHO_SVC_HANDLER
#define ECHO_SVC_HANDLER

#include <Svc_Handler.h>
#include <SOCK_Stream.h>

class Echo_Svc_Handler : public ACE_Svc_Handler<ACE_SOCK_Stream, ACE_NULL_SYNCH> {


    public:
        Echo_Svc_Handler(void);



};


#endif
