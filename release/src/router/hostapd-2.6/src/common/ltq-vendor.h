/*
 * Lantiq OUI and vendor specific assignments
 * Copyright (c) 2014, Lantiq
 */

#ifndef LTQ_VENDOR_H
#define LTQ_VENDOR_H

/*
 * This file is a registry of identifier assignments from the Lantiq
 * OUI AC:9A:96 for purposes other than MAC address assignment. New identifiers
 * can be assigned through normal review process for changes to the upstream
 * hostap.git repository.
 */

#define OUI_LTQ 0xAC9A96

/**
 * enum ltq_nl80211_vendor_subcmds - LTQ nl80211 vendor command identifiers
 *
 * @LTQ_NL80211_VENDOR_SUBCMD_UNSPEC: Reserved value 0
 *
 * @LTQ_NL80211_VENDOR_SUBCMD_GET_AID: Get AID request. 
 *  
 * @LTQ_NL80211_VENDOR_SUBCMD_FREE_AID: Free AID request. 
 *  
 * @LTQ_NL80211_VENDOR_SUBCMD_TX_EAPOL: Send EAPoL request.
 *
 * @LTQ_NL80211_VENDOR_SUBCMD_SYNC_DONE: Sync the operations between hostapd and
 * driver
 */
enum ltq_nl80211_vendor_subcmds {
	LTQ_NL80211_VENDOR_SUBCMD_UNSPEC = 0,
	LTQ_NL80211_VENDOR_SUBCMD_GET_AID = 1,
	LTQ_NL80211_VENDOR_SUBCMD_FREE_AID = 2,
	LTQ_NL80211_VENDOR_SUBCMD_TX_EAPOL = 3,
	LTQ_NL80211_VENDOR_SUBCMD_COUNTRY_CODE = 4,
	LTQ_NL80211_VENDOR_SUBCMD_SYNC_DONE = 5,
	LTQ_NL80211_VENDOR_SUBCMD_DFS_DEBUG = 6,
	LTQ_NL80211_VENDOR_SUBCMD_CAC_COMPLETE = 7,
	LTQ_NL80211_VENDOR_SUBCMD_SET_DENY_MAC = 8,
	LTQ_NL80211_VENDOR_SUBCMD_STA_STEER = 9,
	LTQ_NL80211_VENDOR_SUBCMD_GET_STA_MEASUREMENTS = 10,
	LTQ_NL80211_VENDOR_SUBCMD_GET_UNCONNECTED_STA  = 11,
	LTQ_NL80211_VENDOR_SUBCMD_GET_VAP_MEASUREMENTS = 12,
	LTQ_NL80211_VENDOR_SUBCMD_GET_RADIO_INFO       = 13,
	LTQ_NL80211_VENDOR_SUBCMD_SET_ATF_QUOTAS       = 14,  /* Air time fairness data */
};

enum ltq_nl80211_vendor_events {
	LTQ_NL80211_VENDOR_EVENT_RX_EAPOL = 0,
  LTQ_NL80211_VENDOR_EVENT_FLUSH_STATIONS = 1,
  LTQ_NL80211_VENDOR_EVENT_CHAN_DATA = 2,
	LTQ_NL80211_VENDOR_EVENT_UNCONNECTED_STA = 3,
	LTQ_NL80211_VENDOR_EVENT_WDS_CONNECT = 4,
	LTQ_NL80211_VENDOR_EVENT_WDS_DISCONNECT = 5,
};

#endif /* LTQ_VENDOR_H */
