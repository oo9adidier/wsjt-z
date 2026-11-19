  integer :: level, onlevel(0:10)
  common/timer_private/ level, onlevel
  ! threadprivate removed: MinGW assembler cannot handle .tls_common (timer is a no-op unless init_timer is called)
