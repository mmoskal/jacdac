// Autogenerated C header file for Role Manager
#ifndef _JACDAC_SPEC_ROLE_MANAGER_H
#define _JACDAC_SPEC_ROLE_MANAGER_H 1

#define JD_SERVICE_CLASS_ROLE_MANAGER  0x119c3ad1

/**
 * Read-only bool (uint8_t). Indicates if all required roles have been allocated to devices.
 */
#define JD_ROLE_MANAGER_REG_ALL_ROLES_ALLOCATED 0x181

/**
 * Argument: device_id devid (uint64_t). Get the role corresponding to given device identifer. Returns empty string if unset.
 */
#define JD_ROLE_MANAGER_CMD_GET_ROLE 0x80

/**
 * Report: 
 */
typedef struct jd_role_manager_get_role_report {
    uint64_t device_id;
    char role[0];  // string
} jd_role_manager_get_role_report_t;


/**
 * Set role. Can set to empty to remove role binding.
 */
#define JD_ROLE_MANAGER_CMD_SET_ROLE 0x81
typedef struct jd_role_manager_set_role {
    uint64_t device_id;
    char role[0];  // string
} jd_role_manager_set_role_t;


/**
 * No args. Remove all role bindings.
 */
#define JD_ROLE_MANAGER_CMD_CLEAR_ALL_ROLES 0x84

/**
 * Argument: stored_roles pipe (bytes). Return all roles stored internally.
 */
#define JD_ROLE_MANAGER_CMD_LIST_STORED_ROLES 0x82

/**
 * Return all roles stored internally.
 */
typedef struct jd_role_manager_stored_roles {
    uint64_t device_id;
    char role[0];  // string
} jd_role_manager_stored_roles_t;


/**
 * Argument: required_roles pipe (bytes). List all roles required by the current program. `device_id` is `0` if role is unbound.
 */
#define JD_ROLE_MANAGER_CMD_LIST_REQUIRED_ROLES 0x83

/**
 * List all roles required by the current program. `device_id` is `0` if role is unbound.
 */
typedef struct jd_role_manager_required_roles {
    uint64_t device_id;
    uint32_t service_class;
    char roles[0];  // string
} jd_role_manager_required_roles_t;


/**
 * Emit notifying that the internal state of the service changed.
 */
#define JD_ROLE_MANAGER_EV_CHANGE JD_EV_CHANGE

#endif
