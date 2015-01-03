#ifndef ECHO_SVC_HANDLER
#define ECHO_SVC_HANDLER

#include <ace/Svc_Handler.h>
#include <ace/SOCK_Stream.h>

class Echo_Svc_Handler : public ACE_Svc_Handler<ACE_SOCK_Stream, ACE_NULL_SYNCH> {


    public:
        Echo_Svc_Handler(void);
        ~Echo_Svc_Handler(void);
        virtual int handle_input(ACE_HANDLE);
      


};


#endif
