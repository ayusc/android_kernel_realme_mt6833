// NO HEADERS! Hides dummy functions from real prototype definitions
#pragma GCC diagnostic ignored "-Wstrict-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wreturn-type"
#pragma GCC diagnostic ignored "-Wimplicit-int"

void *proc_ux_state_operations = 0;
long ion_total = 0;
int ux_sched_cputopo = 0;

// --- PREVIOUS BATCH ---
long init_task_ux_info() { return 0; }
long phx_is_phoenix_boot_completed() { return 1; }
long is_critial_process() { return 0; }
long oppo_is_android_core_group() { return 0; }
long sysctl_sched_assist_scene_handler() { return 0; }
long hans_report() { return 0; }
long oplus_boost_kill_signal() { return 0; }
long is_key_process() { return 0; }
long ux_init_cpu_data() { return 0; }
long ux_init_rq_data() { return 0; }
long sf_task_util_record() { return 0; }
long test_task_ux() { return 0; }
long place_entity_adjust_ux_task() { return 0; }
long enqueue_ux_thread() { return 0; }
long dequeue_ux_thread() { return 0; }
long should_ux_preempt_wakeup() { return 0; }
void *pick_ux_thread() { return 0; }
long is_heavy_ux_task() { return 0; }
long should_ux_task_skip_cpu() { return 0; }

// --- NEW BATCH: SCHEDULER & MEMORY ---
long should_ux_task_skip_further_check() { return 0; }
long drop_ux_task_cpus() { return 0; }
long update_ux_sched_cputopo() { return 0; }
long mutex_unset_inherit_ux() { return 0; }
long mutex_list_add() { return 0; }
long mutex_set_inherit_ux() { return 0; }
long rwsem_unset_inherit_ux() { return 0; }
long rwsem_set_inherit_ux() { return 0; }
long cgroup_set_sched_assist_boost_task() { return 0; }
long get_eng_version() { return 0; }
long list_sort_add() { return 0; }
long page_to_flc() { return 0; }
long ajust_flc() { return 0; }
long ajust_zone_label() { return 0; }
long is_reclaim_should_cancel() { return 0; }
long sched_assist_target_comm() { return 0; }

// --- NEW BATCH: PMIC, CHARGING, USB ---
long oplus_chg_check_break() { return 0; }
long oplus_chg_track_check_wired_charging_break() { return 0; }
long oplus_otgctl_by_buckboost() { return 0; }
long oplus_vooc_get_fastchg_started() { return 0; }
long oplus_vooc_get_adapter_update_status() { return 0; }
long oplus_vooc_get_fastchg_to_normal() { return 0; }
long oplus_vooc_get_fastchg_to_warm() { return 0; }
long oplus_chg_wake_update_work() { return 0; }
long oplus_vooc_reset_fastchg_after_usbout() { return 0; }
long oplus_chg_set_chargerid_switch_val() { return 0; }
long oplus_chg_clear_chargerid_info() { return 0; }
long oplus_chg_set_charger_type_unknown() { return 0; }
long is_vooc_support_single_batt_svooc() { return 0; }
long oplus_chg_get_voocphy_support() { return 0; }
long oplus_chg_set_otg_online() { return 0; }
long oplus_otg_disable_by_buckboost() { return 0; }
long vooc_enable_cp_for_otg() { return 0; }
long oplus_otg_enable_by_buckboost() { return 0; }
long is_fuelgauge_apply() { return 0; }
long oplus_get_chg_unwakelock() { return 0; }
long oplus_gauge_set_event() { return 0; }

// --- NEW BATCH: SENSORS, CAMERA, NFC ---
long virtual_sensor_report_data() { return 0; }
long oplus_init_sensor_state() { return 0; }
long mm_keylog_write_modemdump() { return 0; }
long register_device_proc() { return 0; }
long oplus_chg_set_camera_on() { return 0; }
long pmic_gpio_enable() { return 0; }
long fan53870_cam_ldo_set_voltage() { return 0; }
long is_fan53870_pmic() { return 0; }
long fan53870_cam_ldo_disable() { return 0; }
long pmic_ldo_set_voltage_mv() { return 0; }
long pmic_ldo_get_type() { return 0; }
long pmic_ldo_set_disable() { return 0; }
long get_PCB_Version() { return 0; }
long oplus_chg_set_camera_status() { return 0; }
long is_support_chip() { return 1; }
long register_device_proc_for_ufsplus() { return 0; }

// --- NEW BATCH: BINDER & UI ---
long binder_unset_inherit_ux() { return 0; }
long binder_set_inherit_ux() { return 0; }
long is_sf() { return 0; }
long is_launcher() { return 0; }
long set_heavy_ux() { return 0; }
long set_once_ux() { return 0; }
long ux_debug_enable() { return 0; }
long ux_debug_systrace_c() { return 0; }

// --- NEW BATCH: AUDIO (AW87339 / SIA81XX) ---
long aw87339_audio_spk_if_kspk() { return 0; }
long aw87339_audio_spk_if_off() { return 0; }
long aw87339_audio_rcv_if_kspk() { return 0; }
long aw87339_audio_rcv_if_off() { return 0; }
long aw87339_audio_rcv_if_drcv() { return 0; }
long aw87339_spk_low_voltage_status() { return 0; }
long aw87339_audio_spk_low_voltage_status() { return 0; }
long aw87339_voice_status() { return 0; }
long aw87339_voice_setting() { return 0; }
long soc_aux_init_only_sia81xx() { return 0; }
long sia81xx_start() { return 0; }
long sia81xx_stop() { return 0; }
long oplus_ext_amp_recv_enable() { return 0; }
long oplus_ext_amp_r_enable() { return 0; }
