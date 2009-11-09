/*
 * PLEASE NOTE: 
 * 
 * This file is automatically generated by tag_dll.awk.
 * It contains tag_typedef_t for tag references.
 * 
 * Do not, repeat, do not edit this file. Edit 'nua_tag.c' instead.
 * 
 */

#include "config.h"

#include <sofia-sip/su_tag_class.h>

#if defined _WIN32 || defined HAVE_OPEN_C
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif


#undef TAG_NAMESPACE
#define TAG_NAMESPACE "nua"

extern tag_typedef_t nutag_url;
EXPORT tag_typedef_t nutag_url_ref = 
  REFTAG_TYPEDEF(nutag_url);
extern tag_typedef_t nutag_method;
EXPORT tag_typedef_t nutag_method_ref = 
  REFTAG_TYPEDEF(nutag_method);
extern tag_typedef_t nutag_uicc;
EXPORT tag_typedef_t nutag_uicc_ref = 
  REFTAG_TYPEDEF(nutag_uicc);
extern tag_typedef_t nutag_media_features;
EXPORT tag_typedef_t nutag_media_features_ref = 
  REFTAG_TYPEDEF(nutag_media_features);
extern tag_typedef_t nutag_callee_caps;
EXPORT tag_typedef_t nutag_callee_caps_ref = 
  REFTAG_TYPEDEF(nutag_callee_caps);
extern tag_typedef_t nutag_early_ims;
EXPORT tag_typedef_t nutag_early_ims_ref = 
  REFTAG_TYPEDEF(nutag_early_ims);
extern tag_typedef_t nutag_sigcomp_enabled;
EXPORT tag_typedef_t nutag_sigcomp_enabled_ref = 
  REFTAG_TYPEDEF(nutag_sigcomp_enabled);
extern tag_typedef_t nutag_impu;
EXPORT tag_typedef_t nutag_impu_ref = 
  REFTAG_TYPEDEF(nutag_impu);
extern tag_typedef_t nutag_impi;
EXPORT tag_typedef_t nutag_impi_ref = 
  REFTAG_TYPEDEF(nutag_impi);
extern tag_typedef_t nutag_realm;
EXPORT tag_typedef_t nutag_realm_ref = 
  REFTAG_TYPEDEF(nutag_realm);
extern tag_typedef_t nutag_early_media;
EXPORT tag_typedef_t nutag_early_media_ref = 
  REFTAG_TYPEDEF(nutag_early_media);
extern tag_typedef_t nutag_only183_100rel;
EXPORT tag_typedef_t nutag_only183_100rel_ref = 
  REFTAG_TYPEDEF(nutag_only183_100rel);
extern tag_typedef_t nutag_early_answer;
EXPORT tag_typedef_t nutag_early_answer_ref = 
  REFTAG_TYPEDEF(nutag_early_answer);
extern tag_typedef_t nutag_include_extra_sdp;
EXPORT tag_typedef_t nutag_include_extra_sdp_ref = 
  REFTAG_TYPEDEF(nutag_include_extra_sdp);
extern tag_typedef_t nutag_media_enable;
EXPORT tag_typedef_t nutag_media_enable_ref = 
  REFTAG_TYPEDEF(nutag_media_enable);
extern tag_typedef_t nutag_soa_name;
EXPORT tag_typedef_t nutag_soa_name_ref = 
  REFTAG_TYPEDEF(nutag_soa_name);
extern tag_typedef_t nutag_retry_count;
EXPORT tag_typedef_t nutag_retry_count_ref = 
  REFTAG_TYPEDEF(nutag_retry_count);
extern tag_typedef_t nutag_max_subscriptions;
EXPORT tag_typedef_t nutag_max_subscriptions_ref = 
  REFTAG_TYPEDEF(nutag_max_subscriptions);
extern tag_typedef_t nutag_callstate;
EXPORT tag_typedef_t nutag_callstate_ref = 
  REFTAG_TYPEDEF(nutag_callstate);
extern tag_typedef_t nutag_offer_recv;
EXPORT tag_typedef_t nutag_offer_recv_ref = 
  REFTAG_TYPEDEF(nutag_offer_recv);
extern tag_typedef_t nutag_answer_recv;
EXPORT tag_typedef_t nutag_answer_recv_ref = 
  REFTAG_TYPEDEF(nutag_answer_recv);
extern tag_typedef_t nutag_offer_sent;
EXPORT tag_typedef_t nutag_offer_sent_ref = 
  REFTAG_TYPEDEF(nutag_offer_sent);
extern tag_typedef_t nutag_answer_sent;
EXPORT tag_typedef_t nutag_answer_sent_ref = 
  REFTAG_TYPEDEF(nutag_answer_sent);
extern tag_typedef_t nutag_substate;
EXPORT tag_typedef_t nutag_substate_ref = 
  REFTAG_TYPEDEF(nutag_substate);
extern tag_typedef_t nutag_sub_expires;
EXPORT tag_typedef_t nutag_sub_expires_ref = 
  REFTAG_TYPEDEF(nutag_sub_expires);
extern tag_typedef_t nutag_newsub;
EXPORT tag_typedef_t nutag_newsub_ref = 
  REFTAG_TYPEDEF(nutag_newsub);
extern tag_typedef_t nutag_invite_timer;
EXPORT tag_typedef_t nutag_invite_timer_ref = 
  REFTAG_TYPEDEF(nutag_invite_timer);
extern tag_typedef_t nutag_session_timer;
EXPORT tag_typedef_t nutag_session_timer_ref = 
  REFTAG_TYPEDEF(nutag_session_timer);
extern tag_typedef_t nutag_min_se;
EXPORT tag_typedef_t nutag_min_se_ref = 
  REFTAG_TYPEDEF(nutag_min_se);
extern tag_typedef_t nutag_session_refresher;
EXPORT tag_typedef_t nutag_session_refresher_ref = 
  REFTAG_TYPEDEF(nutag_session_refresher);
extern tag_typedef_t nutag_update_refresh;
EXPORT tag_typedef_t nutag_update_refresh_ref = 
  REFTAG_TYPEDEF(nutag_update_refresh);
extern tag_typedef_t nutag_refresh_without_sdp;
EXPORT tag_typedef_t nutag_refresh_without_sdp_ref = 
  REFTAG_TYPEDEF(nutag_refresh_without_sdp);
extern tag_typedef_t nutag_refer_expires;
EXPORT tag_typedef_t nutag_refer_expires_ref = 
  REFTAG_TYPEDEF(nutag_refer_expires);
extern tag_typedef_t nutag_refer_with_id;
EXPORT tag_typedef_t nutag_refer_with_id_ref = 
  REFTAG_TYPEDEF(nutag_refer_with_id);
extern tag_typedef_t nutag_autoalert;
EXPORT tag_typedef_t nutag_autoalert_ref = 
  REFTAG_TYPEDEF(nutag_autoalert);
extern tag_typedef_t nutag_autoanswer;
EXPORT tag_typedef_t nutag_autoanswer_ref = 
  REFTAG_TYPEDEF(nutag_autoanswer);
extern tag_typedef_t nutag_autoack;
EXPORT tag_typedef_t nutag_autoack_ref = 
  REFTAG_TYPEDEF(nutag_autoack);
extern tag_typedef_t nutag_enableinvite;
EXPORT tag_typedef_t nutag_enableinvite_ref = 
  REFTAG_TYPEDEF(nutag_enableinvite);
extern tag_typedef_t nutag_enablemessage;
EXPORT tag_typedef_t nutag_enablemessage_ref = 
  REFTAG_TYPEDEF(nutag_enablemessage);
extern tag_typedef_t nutag_enablemessenger;
EXPORT tag_typedef_t nutag_enablemessenger_ref = 
  REFTAG_TYPEDEF(nutag_enablemessenger);
extern tag_typedef_t nutag_smime_enable;
EXPORT tag_typedef_t nutag_smime_enable_ref = 
  REFTAG_TYPEDEF(nutag_smime_enable);
extern tag_typedef_t nutag_smime_opt;
EXPORT tag_typedef_t nutag_smime_opt_ref = 
  REFTAG_TYPEDEF(nutag_smime_opt);
extern tag_typedef_t nutag_smime_protection_mode;
EXPORT tag_typedef_t nutag_smime_protection_mode_ref = 
  REFTAG_TYPEDEF(nutag_smime_protection_mode);
extern tag_typedef_t nutag_smime_message_digest;
EXPORT tag_typedef_t nutag_smime_message_digest_ref = 
  REFTAG_TYPEDEF(nutag_smime_message_digest);
extern tag_typedef_t nutag_smime_signature;
EXPORT tag_typedef_t nutag_smime_signature_ref = 
  REFTAG_TYPEDEF(nutag_smime_signature);
extern tag_typedef_t nutag_smime_key_encryption;
EXPORT tag_typedef_t nutag_smime_key_encryption_ref = 
  REFTAG_TYPEDEF(nutag_smime_key_encryption);
extern tag_typedef_t nutag_smime_message_encryption;
EXPORT tag_typedef_t nutag_smime_message_encryption_ref = 
  REFTAG_TYPEDEF(nutag_smime_message_encryption);
extern tag_typedef_t nutag_sips_url;
EXPORT tag_typedef_t nutag_sips_url_ref = 
  REFTAG_TYPEDEF(nutag_sips_url);
extern tag_typedef_t nutag_certificate_dir;
EXPORT tag_typedef_t nutag_certificate_dir_ref = 
  REFTAG_TYPEDEF(nutag_certificate_dir);
extern tag_typedef_t nutag_certificate_phrase;
EXPORT tag_typedef_t nutag_certificate_phrase_ref = 
  REFTAG_TYPEDEF(nutag_certificate_phrase);
extern tag_typedef_t nutag_initial_route;
EXPORT tag_typedef_t nutag_initial_route_ref = 
  REFTAG_TYPEDEF(nutag_initial_route);
extern tag_typedef_t nutag_initial_route_str;
EXPORT tag_typedef_t nutag_initial_route_str_ref = 
  REFTAG_TYPEDEF(nutag_initial_route_str);
extern tag_typedef_t nutag_registrar;
EXPORT tag_typedef_t nutag_registrar_ref = 
  REFTAG_TYPEDEF(nutag_registrar);
extern tag_typedef_t nutag_identity;
EXPORT tag_typedef_t nutag_identity_ref = 
  REFTAG_TYPEDEF(nutag_identity);
extern tag_typedef_t nutag_m_display;
EXPORT tag_typedef_t nutag_m_display_ref = 
  REFTAG_TYPEDEF(nutag_m_display);
extern tag_typedef_t nutag_m_username;
EXPORT tag_typedef_t nutag_m_username_ref = 
  REFTAG_TYPEDEF(nutag_m_username);
extern tag_typedef_t nutag_m_params;
EXPORT tag_typedef_t nutag_m_params_ref = 
  REFTAG_TYPEDEF(nutag_m_params);
extern tag_typedef_t nutag_m_features;
EXPORT tag_typedef_t nutag_m_features_ref = 
  REFTAG_TYPEDEF(nutag_m_features);
extern tag_typedef_t nutag_instance;
EXPORT tag_typedef_t nutag_instance_ref = 
  REFTAG_TYPEDEF(nutag_instance);
extern tag_typedef_t nutag_outbound;
EXPORT tag_typedef_t nutag_outbound_ref = 
  REFTAG_TYPEDEF(nutag_outbound);
extern tag_typedef_t nutag_outbound_set1;
EXPORT tag_typedef_t nutag_outbound_set1_ref = 
  REFTAG_TYPEDEF(nutag_outbound_set1);
extern tag_typedef_t nutag_outbound_set2;
EXPORT tag_typedef_t nutag_outbound_set2_ref = 
  REFTAG_TYPEDEF(nutag_outbound_set2);
extern tag_typedef_t nutag_outbound_set3;
EXPORT tag_typedef_t nutag_outbound_set3_ref = 
  REFTAG_TYPEDEF(nutag_outbound_set3);
extern tag_typedef_t nutag_outbound_set4;
EXPORT tag_typedef_t nutag_outbound_set4_ref = 
  REFTAG_TYPEDEF(nutag_outbound_set4);
extern tag_typedef_t nutag_keepalive;
EXPORT tag_typedef_t nutag_keepalive_ref = 
  REFTAG_TYPEDEF(nutag_keepalive);
extern tag_typedef_t nutag_keepalive_stream;
EXPORT tag_typedef_t nutag_keepalive_stream_ref = 
  REFTAG_TYPEDEF(nutag_keepalive_stream);
extern tag_typedef_t nutag_use_dialog;
EXPORT tag_typedef_t nutag_use_dialog_ref = 
  REFTAG_TYPEDEF(nutag_use_dialog);
extern tag_typedef_t nutag_auth;
EXPORT tag_typedef_t nutag_auth_ref = 
  REFTAG_TYPEDEF(nutag_auth);
extern tag_typedef_t nutag_authtime;
EXPORT tag_typedef_t nutag_authtime_ref = 
  REFTAG_TYPEDEF(nutag_authtime);
extern tag_typedef_t nutag_event;
EXPORT tag_typedef_t nutag_event_ref = 
  REFTAG_TYPEDEF(nutag_event);
extern tag_typedef_t nutag_status;
EXPORT tag_typedef_t nutag_status_ref = 
  REFTAG_TYPEDEF(nutag_status);
extern tag_typedef_t nutag_phrase;
EXPORT tag_typedef_t nutag_phrase_ref = 
  REFTAG_TYPEDEF(nutag_phrase);
extern tag_typedef_t nutag_handle;
EXPORT tag_typedef_t nutag_handle_ref = 
  REFTAG_TYPEDEF(nutag_handle);
extern tag_typedef_t nutag_notify_refer;
EXPORT tag_typedef_t nutag_notify_refer_ref = 
  REFTAG_TYPEDEF(nutag_notify_refer);
extern tag_typedef_t nutag_refer_event;
EXPORT tag_typedef_t nutag_refer_event_ref = 
  REFTAG_TYPEDEF(nutag_refer_event);
extern tag_typedef_t nutag_refer_pause;
EXPORT tag_typedef_t nutag_refer_pause_ref = 
  REFTAG_TYPEDEF(nutag_refer_pause);
extern tag_typedef_t nutag_user_agent;
EXPORT tag_typedef_t nutag_user_agent_ref = 
  REFTAG_TYPEDEF(nutag_user_agent);
extern tag_typedef_t nutag_allow;
EXPORT tag_typedef_t nutag_allow_ref = 
  REFTAG_TYPEDEF(nutag_allow);
extern tag_typedef_t nutag_allow_events;
EXPORT tag_typedef_t nutag_allow_events_ref = 
  REFTAG_TYPEDEF(nutag_allow_events);
extern tag_typedef_t nutag_appl_method;
EXPORT tag_typedef_t nutag_appl_method_ref = 
  REFTAG_TYPEDEF(nutag_appl_method);
extern tag_typedef_t nutag_supported;
EXPORT tag_typedef_t nutag_supported_ref = 
  REFTAG_TYPEDEF(nutag_supported);
extern tag_typedef_t nutag_path_enable;
EXPORT tag_typedef_t nutag_path_enable_ref = 
  REFTAG_TYPEDEF(nutag_path_enable);
extern tag_typedef_t nutag_service_route_enable;
EXPORT tag_typedef_t nutag_service_route_enable_ref = 
  REFTAG_TYPEDEF(nutag_service_route_enable);
extern tag_typedef_t nutag_auth_cache;
EXPORT tag_typedef_t nutag_auth_cache_ref = 
  REFTAG_TYPEDEF(nutag_auth_cache);
extern tag_typedef_t nutag_detect_network_updates;
EXPORT tag_typedef_t nutag_detect_network_updates_ref = 
  REFTAG_TYPEDEF(nutag_detect_network_updates);
extern tag_typedef_t nutag_with;
EXPORT tag_typedef_t nutag_with_ref = 
  REFTAG_TYPEDEF(nutag_with);
extern tag_typedef_t nutag_dialog;
EXPORT tag_typedef_t nutag_dialog_ref = 
  REFTAG_TYPEDEF(nutag_dialog);
extern tag_typedef_t nutag_shutdown_events;
EXPORT tag_typedef_t nutag_shutdown_events_ref = 
  REFTAG_TYPEDEF(nutag_shutdown_events);
extern tag_typedef_t nutag_soa_session;
EXPORT tag_typedef_t nutag_soa_session_ref = 
  REFTAG_TYPEDEF(nutag_soa_session);
extern tag_typedef_t nutag_hold;
EXPORT tag_typedef_t nutag_hold_ref = 
  REFTAG_TYPEDEF(nutag_hold);
extern tag_typedef_t nutag_address;
EXPORT tag_typedef_t nutag_address_ref = 
  REFTAG_TYPEDEF(nutag_address);