/* parser auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_auth.h"

#include "librpc/gen_ndr/ndr_misc.h"
#include "librpc/gen_ndr/ndr_security.h"
#include "librpc/gen_ndr/ndr_lsa.h"
#include "librpc/gen_ndr/ndr_krb5pac.h"
_PUBLIC_ enum ndr_err_code ndr_push_auth_method(struct ndr_push *ndr, int ndr_flags, enum auth_method r)
{
	NDR_CHECK(ndr_push_enum_uint1632(ndr, NDR_SCALARS, r));
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_auth_method(struct ndr_pull *ndr, int ndr_flags, enum auth_method *r)
{
	uint16_t v;
	NDR_CHECK(ndr_pull_enum_uint1632(ndr, NDR_SCALARS, &v));
	*r = v;
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_auth_method(struct ndr_print *ndr, const char *name, enum auth_method r)
{
	const char *val = NULL;

	switch (r) {
		case SEC_AUTH_METHOD_UNAUTHENTICATED: val = "SEC_AUTH_METHOD_UNAUTHENTICATED"; break;
		case SEC_AUTH_METHOD_NTLM: val = "SEC_AUTH_METHOD_NTLM"; break;
		case SEC_AUTH_METHOD_KERBEROS: val = "SEC_AUTH_METHOD_KERBEROS"; break;
	}
	ndr_print_enum(ndr, name, "ENUM", val, r);
}

_PUBLIC_ enum ndr_err_code ndr_push_auth_user_info(struct ndr_push *ndr, int ndr_flags, const struct auth_user_info *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->account_name));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->domain_name));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->full_name));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->logon_script));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->profile_path));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->home_directory));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->home_drive));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->logon_server));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->last_logon));
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->last_logoff));
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->acct_expiry));
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->last_password_change));
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->allow_password_change));
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->force_password_change));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->logon_count));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->bad_password_count));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->acct_flags));
		NDR_CHECK(ndr_push_uint8(ndr, NDR_SCALARS, r->authenticated));
		NDR_CHECK(ndr_push_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_auth_user_info(struct ndr_pull *ndr, int ndr_flags, struct auth_user_info *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->account_name));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->domain_name));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->full_name));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->logon_script));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->profile_path));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->home_directory));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->home_drive));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->logon_server));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->last_logon));
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->last_logoff));
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->acct_expiry));
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->last_password_change));
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->allow_password_change));
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->force_password_change));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->logon_count));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->bad_password_count));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->acct_flags));
		NDR_CHECK(ndr_pull_uint8(ndr, NDR_SCALARS, &r->authenticated));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_auth_user_info(struct ndr_print *ndr, const char *name, const struct auth_user_info *r)
{
	ndr_print_struct(ndr, name, "auth_user_info");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_string(ndr, "account_name", r->account_name);
	ndr_print_string(ndr, "domain_name", r->domain_name);
	ndr_print_string(ndr, "full_name", r->full_name);
	ndr_print_string(ndr, "logon_script", r->logon_script);
	ndr_print_string(ndr, "profile_path", r->profile_path);
	ndr_print_string(ndr, "home_directory", r->home_directory);
	ndr_print_string(ndr, "home_drive", r->home_drive);
	ndr_print_string(ndr, "logon_server", r->logon_server);
	ndr_print_NTTIME(ndr, "last_logon", r->last_logon);
	ndr_print_NTTIME(ndr, "last_logoff", r->last_logoff);
	ndr_print_NTTIME(ndr, "acct_expiry", r->acct_expiry);
	ndr_print_NTTIME(ndr, "last_password_change", r->last_password_change);
	ndr_print_NTTIME(ndr, "allow_password_change", r->allow_password_change);
	ndr_print_NTTIME(ndr, "force_password_change", r->force_password_change);
	ndr_print_uint16(ndr, "logon_count", r->logon_count);
	ndr_print_uint16(ndr, "bad_password_count", r->bad_password_count);
	ndr_print_uint32(ndr, "acct_flags", r->acct_flags);
	ndr_print_uint8(ndr, "authenticated", r->authenticated);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_auth_user_info_torture(struct ndr_push *ndr, int ndr_flags, const struct auth_user_info_torture *r)
{
	uint32_t cntr_dc_sids_0;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 5));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->num_dc_sids));
		NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, r->num_dc_sids));
		for (cntr_dc_sids_0 = 0; cntr_dc_sids_0 < r->num_dc_sids; cntr_dc_sids_0++) {
			NDR_CHECK(ndr_push_dom_sid(ndr, NDR_SCALARS, &r->dc_sids[cntr_dc_sids_0]));
		}
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->pac_srv_sig));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->pac_kdc_sig));
		NDR_CHECK(ndr_push_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->pac_srv_sig) {
			NDR_CHECK(ndr_push_PAC_SIGNATURE_DATA(ndr, NDR_SCALARS, r->pac_srv_sig));
		}
		if (r->pac_kdc_sig) {
			NDR_CHECK(ndr_push_PAC_SIGNATURE_DATA(ndr, NDR_SCALARS, r->pac_kdc_sig));
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_auth_user_info_torture(struct ndr_pull *ndr, int ndr_flags, struct auth_user_info_torture *r)
{
	uint32_t size_dc_sids_0 = 0;
	uint32_t cntr_dc_sids_0;
	TALLOC_CTX *_mem_save_dc_sids_0;
	uint32_t _ptr_pac_srv_sig;
	TALLOC_CTX *_mem_save_pac_srv_sig_0;
	uint32_t _ptr_pac_kdc_sig;
	TALLOC_CTX *_mem_save_pac_kdc_sig_0;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 5));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->num_dc_sids));
		NDR_CHECK(ndr_pull_array_size(ndr, &r->dc_sids));
		size_dc_sids_0 = ndr_get_array_size(ndr, &r->dc_sids);
		NDR_PULL_ALLOC_N(ndr, r->dc_sids, size_dc_sids_0);
		_mem_save_dc_sids_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->dc_sids, 0);
		for (cntr_dc_sids_0 = 0; cntr_dc_sids_0 < size_dc_sids_0; cntr_dc_sids_0++) {
			NDR_CHECK(ndr_pull_dom_sid(ndr, NDR_SCALARS, &r->dc_sids[cntr_dc_sids_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_dc_sids_0, 0);
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_pac_srv_sig));
		if (_ptr_pac_srv_sig) {
			NDR_PULL_ALLOC(ndr, r->pac_srv_sig);
		} else {
			r->pac_srv_sig = NULL;
		}
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_pac_kdc_sig));
		if (_ptr_pac_kdc_sig) {
			NDR_PULL_ALLOC(ndr, r->pac_kdc_sig);
		} else {
			r->pac_kdc_sig = NULL;
		}
		if (r->dc_sids) {
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->dc_sids, r->num_dc_sids));
		}
		NDR_CHECK(ndr_pull_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->pac_srv_sig) {
			_mem_save_pac_srv_sig_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->pac_srv_sig, 0);
			NDR_CHECK(ndr_pull_PAC_SIGNATURE_DATA(ndr, NDR_SCALARS, r->pac_srv_sig));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_pac_srv_sig_0, 0);
		}
		if (r->pac_kdc_sig) {
			_mem_save_pac_kdc_sig_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->pac_kdc_sig, 0);
			NDR_CHECK(ndr_pull_PAC_SIGNATURE_DATA(ndr, NDR_SCALARS, r->pac_kdc_sig));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_pac_kdc_sig_0, 0);
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_auth_user_info_torture(struct ndr_print *ndr, const char *name, const struct auth_user_info_torture *r)
{
	uint32_t cntr_dc_sids_0;
	ndr_print_struct(ndr, name, "auth_user_info_torture");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint32(ndr, "num_dc_sids", r->num_dc_sids);
	ndr->print(ndr, "%s: ARRAY(%d)", "dc_sids", (int)r->num_dc_sids);
	ndr->depth++;
	for (cntr_dc_sids_0=0;cntr_dc_sids_0<r->num_dc_sids;cntr_dc_sids_0++) {
		ndr_print_dom_sid(ndr, "dc_sids", &r->dc_sids[cntr_dc_sids_0]);
	}
	ndr->depth--;
	ndr_print_ptr(ndr, "pac_srv_sig", r->pac_srv_sig);
	ndr->depth++;
	if (r->pac_srv_sig) {
		ndr_print_PAC_SIGNATURE_DATA(ndr, "pac_srv_sig", r->pac_srv_sig);
	}
	ndr->depth--;
	ndr_print_ptr(ndr, "pac_kdc_sig", r->pac_kdc_sig);
	ndr->depth++;
	if (r->pac_kdc_sig) {
		ndr_print_PAC_SIGNATURE_DATA(ndr, "pac_kdc_sig", r->pac_kdc_sig);
	}
	ndr->depth--;
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_auth_user_info_unix(struct ndr_push *ndr, int ndr_flags, const struct auth_user_info_unix *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->unix_name));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->sanitized_username));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_push_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_auth_user_info_unix(struct ndr_pull *ndr, int ndr_flags, struct auth_user_info_unix *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->unix_name));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->sanitized_username));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_auth_user_info_unix(struct ndr_print *ndr, const char *name, const struct auth_user_info_unix *r)
{
	ndr_print_struct(ndr, name, "auth_user_info_unix");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_string(ndr, "unix_name", r->unix_name);
	ndr_print_string(ndr, "sanitized_username", r->sanitized_username);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_auth_user_info_dc(struct ndr_push *ndr, int ndr_flags, const struct auth_user_info_dc *r)
{
	uint32_t cntr_sids_0;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 5));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->num_sids));
		NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, r->num_sids));
		for (cntr_sids_0 = 0; cntr_sids_0 < r->num_sids; cntr_sids_0++) {
			NDR_CHECK(ndr_push_dom_sid(ndr, NDR_SCALARS, &r->sids[cntr_sids_0]));
		}
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->info));
		NDR_CHECK(ndr_push_DATA_BLOB(ndr, NDR_SCALARS, r->user_session_key));
		NDR_CHECK(ndr_push_DATA_BLOB(ndr, NDR_SCALARS, r->lm_session_key));
		NDR_CHECK(ndr_push_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->info) {
			NDR_CHECK(ndr_push_auth_user_info(ndr, NDR_SCALARS, r->info));
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_auth_user_info_dc(struct ndr_pull *ndr, int ndr_flags, struct auth_user_info_dc *r)
{
	uint32_t size_sids_0 = 0;
	uint32_t cntr_sids_0;
	TALLOC_CTX *_mem_save_sids_0;
	uint32_t _ptr_info;
	TALLOC_CTX *_mem_save_info_0;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 5));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->num_sids));
		NDR_CHECK(ndr_pull_array_size(ndr, &r->sids));
		size_sids_0 = ndr_get_array_size(ndr, &r->sids);
		NDR_PULL_ALLOC_N(ndr, r->sids, size_sids_0);
		_mem_save_sids_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->sids, 0);
		for (cntr_sids_0 = 0; cntr_sids_0 < size_sids_0; cntr_sids_0++) {
			NDR_CHECK(ndr_pull_dom_sid(ndr, NDR_SCALARS, &r->sids[cntr_sids_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_sids_0, 0);
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_info));
		if (_ptr_info) {
			NDR_PULL_ALLOC(ndr, r->info);
		} else {
			r->info = NULL;
		}
		NDR_CHECK(ndr_pull_DATA_BLOB(ndr, NDR_SCALARS, &r->user_session_key));
		NDR_CHECK(ndr_pull_DATA_BLOB(ndr, NDR_SCALARS, &r->lm_session_key));
		if (r->sids) {
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->sids, r->num_sids));
		}
		NDR_CHECK(ndr_pull_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->info) {
			_mem_save_info_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->info, 0);
			NDR_CHECK(ndr_pull_auth_user_info(ndr, NDR_SCALARS, r->info));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_info_0, 0);
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_auth_user_info_dc(struct ndr_print *ndr, const char *name, const struct auth_user_info_dc *r)
{
	uint32_t cntr_sids_0;
	ndr_print_struct(ndr, name, "auth_user_info_dc");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint32(ndr, "num_sids", r->num_sids);
	ndr->print(ndr, "%s: ARRAY(%d)", "sids", (int)r->num_sids);
	ndr->depth++;
	for (cntr_sids_0=0;cntr_sids_0<r->num_sids;cntr_sids_0++) {
		ndr_print_dom_sid(ndr, "sids", &r->sids[cntr_sids_0]);
	}
	ndr->depth--;
	ndr_print_ptr(ndr, "info", r->info);
	ndr->depth++;
	if (r->info) {
		ndr_print_auth_user_info(ndr, "info", r->info);
	}
	ndr->depth--;
	ndr_print_DATA_BLOB(ndr, "user_session_key", r->user_session_key);
	ndr_print_DATA_BLOB(ndr, "lm_session_key", r->lm_session_key);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_auth_session_info_transport(struct ndr_push *ndr, int ndr_flags, const struct auth_session_info_transport *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 5));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->security_token));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->unix_token));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->info));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->unix_info));
		NDR_CHECK(ndr_push_DATA_BLOB(ndr, NDR_SCALARS, r->session_key));
		NDR_CHECK(ndr_push_DATA_BLOB(ndr, NDR_SCALARS, r->exported_gssapi_credentials));
		NDR_CHECK(ndr_push_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->security_token) {
			NDR_CHECK(ndr_push_security_token(ndr, NDR_SCALARS, r->security_token));
		}
		if (r->unix_token) {
			NDR_CHECK(ndr_push_security_unix_token(ndr, NDR_SCALARS, r->unix_token));
		}
		if (r->info) {
			NDR_CHECK(ndr_push_auth_user_info(ndr, NDR_SCALARS, r->info));
		}
		if (r->unix_info) {
			NDR_CHECK(ndr_push_auth_user_info_unix(ndr, NDR_SCALARS, r->unix_info));
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_auth_session_info_transport(struct ndr_pull *ndr, int ndr_flags, struct auth_session_info_transport *r)
{
	uint32_t _ptr_security_token;
	TALLOC_CTX *_mem_save_security_token_0;
	uint32_t _ptr_unix_token;
	TALLOC_CTX *_mem_save_unix_token_0;
	uint32_t _ptr_info;
	TALLOC_CTX *_mem_save_info_0;
	uint32_t _ptr_unix_info;
	TALLOC_CTX *_mem_save_unix_info_0;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 5));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_security_token));
		if (_ptr_security_token) {
			NDR_PULL_ALLOC(ndr, r->security_token);
		} else {
			r->security_token = NULL;
		}
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_unix_token));
		if (_ptr_unix_token) {
			NDR_PULL_ALLOC(ndr, r->unix_token);
		} else {
			r->unix_token = NULL;
		}
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_info));
		if (_ptr_info) {
			NDR_PULL_ALLOC(ndr, r->info);
		} else {
			r->info = NULL;
		}
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_unix_info));
		if (_ptr_unix_info) {
			NDR_PULL_ALLOC(ndr, r->unix_info);
		} else {
			r->unix_info = NULL;
		}
		NDR_CHECK(ndr_pull_DATA_BLOB(ndr, NDR_SCALARS, &r->session_key));
		NDR_CHECK(ndr_pull_DATA_BLOB(ndr, NDR_SCALARS, &r->exported_gssapi_credentials));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->security_token) {
			_mem_save_security_token_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->security_token, 0);
			NDR_CHECK(ndr_pull_security_token(ndr, NDR_SCALARS, r->security_token));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_security_token_0, 0);
		}
		if (r->unix_token) {
			_mem_save_unix_token_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->unix_token, 0);
			NDR_CHECK(ndr_pull_security_unix_token(ndr, NDR_SCALARS, r->unix_token));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_unix_token_0, 0);
		}
		if (r->info) {
			_mem_save_info_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->info, 0);
			NDR_CHECK(ndr_pull_auth_user_info(ndr, NDR_SCALARS, r->info));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_info_0, 0);
		}
		if (r->unix_info) {
			_mem_save_unix_info_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->unix_info, 0);
			NDR_CHECK(ndr_pull_auth_user_info_unix(ndr, NDR_SCALARS, r->unix_info));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_unix_info_0, 0);
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_auth_session_info_transport(struct ndr_print *ndr, const char *name, const struct auth_session_info_transport *r)
{
	ndr_print_struct(ndr, name, "auth_session_info_transport");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_ptr(ndr, "security_token", r->security_token);
	ndr->depth++;
	if (r->security_token) {
		ndr_print_security_token(ndr, "security_token", r->security_token);
	}
	ndr->depth--;
	ndr_print_ptr(ndr, "unix_token", r->unix_token);
	ndr->depth++;
	if (r->unix_token) {
		ndr_print_security_unix_token(ndr, "unix_token", r->unix_token);
	}
	ndr->depth--;
	ndr_print_ptr(ndr, "info", r->info);
	ndr->depth++;
	if (r->info) {
		ndr_print_auth_user_info(ndr, "info", r->info);
	}
	ndr->depth--;
	ndr_print_ptr(ndr, "unix_info", r->unix_info);
	ndr->depth++;
	if (r->unix_info) {
		ndr_print_auth_user_info_unix(ndr, "unix_info", r->unix_info);
	}
	ndr->depth--;
	ndr_print_DATA_BLOB(ndr, "session_key", r->session_key);
	ndr_print_DATA_BLOB(ndr, "exported_gssapi_credentials", r->exported_gssapi_credentials);
	ndr->depth--;
}

