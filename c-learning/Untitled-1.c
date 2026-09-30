#include<stdio.h>
int main(){
    char *art[]={
"hhhhhhh                                                       tttt",          
"h:::::h                                                    ttt:::t",          
"h:::::h                                                    t:::::t",          
"h:::::h                                                    t:::::t",          
 "h::::h hhhhh         aaaaaaaaaaaaa  uuuuuu    uuuuuuttttttt:::::ttttttt",    
 "h::::hh:::::hhh      a::::::::::::a u::::u    u::::ut:::::::::::::::::t",    
 "h::::::::::::::hh    aaaaaaaaa:::::au::::u    u::::ut:::::::::::::::::t",    
 "h:::::::hhh::::::h            a::::au::::u    u::::utttttt:::::::tttttt",    
 "h::::::h   h::::::h    aaaaaaa:::::au::::u    u::::u      t:::::t",          
 "h:::::h     h:::::h  aa::::::::::::au::::u    u::::u      t:::::t",          
 "h:::::h     h:::::h a::::aaaa::::::au::::u    u::::u      t:::::t",          
 "h:::::h     h:::::ha::::a    a:::::au:::::uuuu:::::u      t:::::t    tttttt",
 "h:::::h     h:::::ha::::a    a:::::au:::::::::::::::uu    t::::::tttt:::::t",
 "h:::::h     h:::::ha:::::aaaa::::::a u:::::::::::::::u    tt::::::::::::::t",
 "h:::::h     h:::::h a::::::::::aa:::a uu::::::::uu:::u      tt:::::::::::tt",
 "hhhhhhh     hhhhhhh  aaaaaaaaaa  aaaa   uuuuuuuu  uuuu        ttttttttttt",  
    };
    for(int i=0;i<16;i++){
    printf("%s\n",art[i]);
    }
    return 0;


    
}



