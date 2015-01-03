#include <stdio.h>
#include <ace/Reactor.h>
#include <ace/Acceptor.h>
#include <ace/SOCK_Acceptor.h>
#include "Echo_Svc_Handler.h"
//#include "Echo_Acceptor.h"
#include <ace/INET_Addr.h>

typedef ACE_Acceptor<Echo_Svc_Handler, ACE_SOCK_Acceptor> Echo_Aceptor;



int main (int argc, char **argv){

int port=ACE_DEFAULT_SERVER_PORT;

printf("server starting on port %d\n", port);

ACE_Reactor reactor;
ACE_INET_Addr addr(port);
//Echo_Aceptor acceptor(addr, &reactor);
//reactor.register_handler(&acceptor, ACE_Event_Handler::READ_MASK);

Echo_Aceptor acceptor;
if ( acceptor.open(addr,&reactor) == -1 ) return 1;




reactor.run_reactor_event_loop();


} 
