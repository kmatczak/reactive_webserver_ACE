#include "Echo_Svc_Handler.h"
#include <stdio.h>
#include <string>
//#include <ace/Mem_Map.h>

Echo_Svc_Handler::Echo_Svc_Handler(void){

    printf("%s ctor\n", __FUNCTION__);  

}

int Echo_Svc_Handler::handle_input( ACE_HANDLE fd ){

    printf("%s \n", __FUNCTION__);
    
    char buf[ACE_DEFAULT_MAX_SOCKET_BUFSIZ];
    ssize_t recv_cnt=this->peer().recv(buf,sizeof(buf));   

    switch (recv_cnt)
    {
        case -1:
                return -1;

        case 0:  
                return -1;
                
        default:    
                //handle echo
                buf[recv_cnt]='\0';
                char resp[ACE_DEFAULT_MAX_SOCKET_BUFSIZ] = "response:";
                strcat(resp,buf);
                this->peer().send(resp,strlen(resp)); //todo: add errorcheck
                //this->peer().send(buf,recv_cnt); //todo: add errorcheck
                break;
    }    
    
    return 0; 



/*    std::string pathname(get_pathname(peer()));
    std::string pathname;
    ACE_Mem_Map mapped_file (pathname.c_str());       

//    return peer.send_n( mapped_file.addr(), mapped_file.size() );
*/
}

Echo_Svc_Handler::~Echo_Svc_Handler(void){
    
    printf("%s \n", __FUNCTION__);

}
