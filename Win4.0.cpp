/* Source Code Windows 4.0*/

#include "win31.h"
#include "win95.h"
#include "win98.h"
#include "workst~1.h"
#include "evenmore.h"
#include "oldstuff.h"
#include "billrulz.h"
#include "monopoly.h"
#include "backdoor.h"
#define INSTALL = HARD

char make_prog_look_big(16000000);
void main()
{
  while(!CRASHED)
  {
    display_copyright_message();
    display_bill_rules_message();
    do_nothing_loop();

    if (first_time_installation)
      {
      make_100_megabyte_swapfile();
      do_nothing_loop();
      totally_screw_up_HPFS_file_system();
      search_and_destroy_the_rest_of-OS2();
      make_futile_attempt_to_damage_Linux();
      disable_Netscape();
      disable_RealPlayer();
      disable_Lotus_Products();
      hang_system();
      } //if
    write_something(anything);
    display_copyright_message();
    do_nothing_loop();
    do_some_stuff();

    if (still_not_crashed)
    {
    display_copyright_message();
    do_nothing_loop();
    basically_run_windows_31();
    do_nothing_loop();
    } // if
  } //while

  if (detect_cache())
    disable_cache();

  if (fast_cpu())
    {
    set_wait_states(lots);
    set_mouse(speed,very_slow);
    set_mouse(action,jumpy);
    set_mouse(reaction,sometimes);
    } //if

  /* printf("Welcome to Windows 4.1");    */
  /* printf("Welcome to Windows 4.11");   */
  /* printf("Welcome to Windows 96");     */
  /* printf("Welcome to Windows NT 3.0"); */
  /* printf("Welcome to Windows 94");     */
  /* printf("Welcome to Windows 4.0"); */
  printf("Welcome to Windows Four.Five");

  if (system_ok())
    crash(to_dos_prompt)
  else
    system_memory = open("a:\swp0001.swp",O_CREATE);

  while(something)
    {
    sleep(5);
    get_user_input();
    sleep(5);
    act_on_user_input();
    sleep(5);
    } // while
  create_general_protection_fault();

} // main
