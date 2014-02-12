
/* Python wrapper functions auto-generated by pidl */
#include <Python.h>
#include "includes.h"
#include <pytalloc.h>
#include "librpc/rpc/pyrpc.h"
#include "librpc/rpc/pyrpc_util.h"
#include "librpc/gen_ndr/ndr_dssetup.h"
#include "librpc/gen_ndr/ndr_dssetup_c.h"

#include "librpc/gen_ndr/misc.h"
staticforward PyTypeObject dssetup_DsRolePrimaryDomInfoBasic_Type;
staticforward PyTypeObject dssetup_DsRoleUpgradeStatus_Type;
staticforward PyTypeObject dssetup_DsRoleOpStatus_Type;
staticforward PyTypeObject dssetup_InterfaceType;

void initdssetup(void);static PyTypeObject *Object_Type;
static PyTypeObject *GUID_Type;
static PyTypeObject *ClientConnection_Type;

static PyObject *py_dssetup_DsRolePrimaryDomInfoBasic_get_role(PyObject *obj, void *closure)
{
	struct dssetup_DsRolePrimaryDomInfoBasic *object = (struct dssetup_DsRolePrimaryDomInfoBasic *)py_talloc_get_ptr(obj);
	PyObject *py_role;
	py_role = PyInt_FromLong(object->role);
	return py_role;
}

static int py_dssetup_DsRolePrimaryDomInfoBasic_set_role(PyObject *py_obj, PyObject *value, void *closure)
{
	struct dssetup_DsRolePrimaryDomInfoBasic *object = (struct dssetup_DsRolePrimaryDomInfoBasic *)py_talloc_get_ptr(py_obj);
	if (PyLong_Check(value)) {
		object->role = PyLong_AsLongLong(value);
	} else if (PyInt_Check(value)) {
		object->role = PyInt_AsLong(value);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return -1;
	}
	return 0;
}

static PyObject *py_dssetup_DsRolePrimaryDomInfoBasic_get_flags(PyObject *obj, void *closure)
{
	struct dssetup_DsRolePrimaryDomInfoBasic *object = (struct dssetup_DsRolePrimaryDomInfoBasic *)py_talloc_get_ptr(obj);
	PyObject *py_flags;
	py_flags = PyInt_FromLong(object->flags);
	return py_flags;
}

static int py_dssetup_DsRolePrimaryDomInfoBasic_set_flags(PyObject *py_obj, PyObject *value, void *closure)
{
	struct dssetup_DsRolePrimaryDomInfoBasic *object = (struct dssetup_DsRolePrimaryDomInfoBasic *)py_talloc_get_ptr(py_obj);
	if (PyLong_Check(value)) {
		object->flags = PyLong_AsLongLong(value);
	} else if (PyInt_Check(value)) {
		object->flags = PyInt_AsLong(value);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return -1;
	}
	return 0;
}

static PyObject *py_dssetup_DsRolePrimaryDomInfoBasic_get_domain(PyObject *obj, void *closure)
{
	struct dssetup_DsRolePrimaryDomInfoBasic *object = (struct dssetup_DsRolePrimaryDomInfoBasic *)py_talloc_get_ptr(obj);
	PyObject *py_domain;
	if (object->domain == NULL) {
		py_domain = Py_None;
		Py_INCREF(py_domain);
	} else {
		if (object->domain == NULL) {
			py_domain = Py_None;
			Py_INCREF(py_domain);
		} else {
			py_domain = PyUnicode_Decode(object->domain, strlen(object->domain), "utf-8", "ignore");
		}
	}
	return py_domain;
}

static int py_dssetup_DsRolePrimaryDomInfoBasic_set_domain(PyObject *py_obj, PyObject *value, void *closure)
{
	struct dssetup_DsRolePrimaryDomInfoBasic *object = (struct dssetup_DsRolePrimaryDomInfoBasic *)py_talloc_get_ptr(py_obj);
	if (value == Py_None) {
		object->domain = NULL;
	} else {
		object->domain = NULL;
		if (PyUnicode_Check(value)) {
			object->domain = PyString_AS_STRING(PyUnicode_AsEncodedString(value, "utf-8", "ignore"));
		} else if (PyString_Check(value)) {
			object->domain = PyString_AS_STRING(value);
		} else {
			PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(value)->tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_dssetup_DsRolePrimaryDomInfoBasic_get_dns_domain(PyObject *obj, void *closure)
{
	struct dssetup_DsRolePrimaryDomInfoBasic *object = (struct dssetup_DsRolePrimaryDomInfoBasic *)py_talloc_get_ptr(obj);
	PyObject *py_dns_domain;
	if (object->dns_domain == NULL) {
		py_dns_domain = Py_None;
		Py_INCREF(py_dns_domain);
	} else {
		if (object->dns_domain == NULL) {
			py_dns_domain = Py_None;
			Py_INCREF(py_dns_domain);
		} else {
			py_dns_domain = PyUnicode_Decode(object->dns_domain, strlen(object->dns_domain), "utf-8", "ignore");
		}
	}
	return py_dns_domain;
}

static int py_dssetup_DsRolePrimaryDomInfoBasic_set_dns_domain(PyObject *py_obj, PyObject *value, void *closure)
{
	struct dssetup_DsRolePrimaryDomInfoBasic *object = (struct dssetup_DsRolePrimaryDomInfoBasic *)py_talloc_get_ptr(py_obj);
	if (value == Py_None) {
		object->dns_domain = NULL;
	} else {
		object->dns_domain = NULL;
		if (PyUnicode_Check(value)) {
			object->dns_domain = PyString_AS_STRING(PyUnicode_AsEncodedString(value, "utf-8", "ignore"));
		} else if (PyString_Check(value)) {
			object->dns_domain = PyString_AS_STRING(value);
		} else {
			PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(value)->tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_dssetup_DsRolePrimaryDomInfoBasic_get_forest(PyObject *obj, void *closure)
{
	struct dssetup_DsRolePrimaryDomInfoBasic *object = (struct dssetup_DsRolePrimaryDomInfoBasic *)py_talloc_get_ptr(obj);
	PyObject *py_forest;
	if (object->forest == NULL) {
		py_forest = Py_None;
		Py_INCREF(py_forest);
	} else {
		if (object->forest == NULL) {
			py_forest = Py_None;
			Py_INCREF(py_forest);
		} else {
			py_forest = PyUnicode_Decode(object->forest, strlen(object->forest), "utf-8", "ignore");
		}
	}
	return py_forest;
}

static int py_dssetup_DsRolePrimaryDomInfoBasic_set_forest(PyObject *py_obj, PyObject *value, void *closure)
{
	struct dssetup_DsRolePrimaryDomInfoBasic *object = (struct dssetup_DsRolePrimaryDomInfoBasic *)py_talloc_get_ptr(py_obj);
	if (value == Py_None) {
		object->forest = NULL;
	} else {
		object->forest = NULL;
		if (PyUnicode_Check(value)) {
			object->forest = PyString_AS_STRING(PyUnicode_AsEncodedString(value, "utf-8", "ignore"));
		} else if (PyString_Check(value)) {
			object->forest = PyString_AS_STRING(value);
		} else {
			PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(value)->tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_dssetup_DsRolePrimaryDomInfoBasic_get_domain_guid(PyObject *obj, void *closure)
{
	struct dssetup_DsRolePrimaryDomInfoBasic *object = (struct dssetup_DsRolePrimaryDomInfoBasic *)py_talloc_get_ptr(obj);
	PyObject *py_domain_guid;
	py_domain_guid = py_talloc_reference_ex(GUID_Type, py_talloc_get_mem_ctx(obj), &object->domain_guid);
	return py_domain_guid;
}

static int py_dssetup_DsRolePrimaryDomInfoBasic_set_domain_guid(PyObject *py_obj, PyObject *value, void *closure)
{
	struct dssetup_DsRolePrimaryDomInfoBasic *object = (struct dssetup_DsRolePrimaryDomInfoBasic *)py_talloc_get_ptr(py_obj);
	PY_CHECK_TYPE(GUID_Type, value, return -1;);
	if (talloc_reference(py_talloc_get_mem_ctx(py_obj), py_talloc_get_mem_ctx(value)) == NULL) {
		PyErr_NoMemory();
		return -1;
	}
	object->domain_guid = *(struct GUID *)py_talloc_get_ptr(value);
	return 0;
}

static PyGetSetDef py_dssetup_DsRolePrimaryDomInfoBasic_getsetters[] = {
	{ discard_const_p(char, "role"), py_dssetup_DsRolePrimaryDomInfoBasic_get_role, py_dssetup_DsRolePrimaryDomInfoBasic_set_role },
	{ discard_const_p(char, "flags"), py_dssetup_DsRolePrimaryDomInfoBasic_get_flags, py_dssetup_DsRolePrimaryDomInfoBasic_set_flags },
	{ discard_const_p(char, "domain"), py_dssetup_DsRolePrimaryDomInfoBasic_get_domain, py_dssetup_DsRolePrimaryDomInfoBasic_set_domain },
	{ discard_const_p(char, "dns_domain"), py_dssetup_DsRolePrimaryDomInfoBasic_get_dns_domain, py_dssetup_DsRolePrimaryDomInfoBasic_set_dns_domain },
	{ discard_const_p(char, "forest"), py_dssetup_DsRolePrimaryDomInfoBasic_get_forest, py_dssetup_DsRolePrimaryDomInfoBasic_set_forest },
	{ discard_const_p(char, "domain_guid"), py_dssetup_DsRolePrimaryDomInfoBasic_get_domain_guid, py_dssetup_DsRolePrimaryDomInfoBasic_set_domain_guid },
	{ NULL }
};

static PyObject *py_dssetup_DsRolePrimaryDomInfoBasic_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_talloc_new(struct dssetup_DsRolePrimaryDomInfoBasic, type);
}


static PyTypeObject dssetup_DsRolePrimaryDomInfoBasic_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "dssetup.DsRolePrimaryDomInfoBasic",
	.tp_getset = py_dssetup_DsRolePrimaryDomInfoBasic_getsetters,
	.tp_methods = NULL,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(py_talloc_Object),
	.tp_new = py_dssetup_DsRolePrimaryDomInfoBasic_new,
};


static PyObject *py_dssetup_DsRoleUpgradeStatus_get_upgrading(PyObject *obj, void *closure)
{
	struct dssetup_DsRoleUpgradeStatus *object = (struct dssetup_DsRoleUpgradeStatus *)py_talloc_get_ptr(obj);
	PyObject *py_upgrading;
	py_upgrading = PyInt_FromLong(object->upgrading);
	return py_upgrading;
}

static int py_dssetup_DsRoleUpgradeStatus_set_upgrading(PyObject *py_obj, PyObject *value, void *closure)
{
	struct dssetup_DsRoleUpgradeStatus *object = (struct dssetup_DsRoleUpgradeStatus *)py_talloc_get_ptr(py_obj);
	if (PyLong_Check(value)) {
		object->upgrading = PyLong_AsLongLong(value);
	} else if (PyInt_Check(value)) {
		object->upgrading = PyInt_AsLong(value);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return -1;
	}
	return 0;
}

static PyObject *py_dssetup_DsRoleUpgradeStatus_get_previous_role(PyObject *obj, void *closure)
{
	struct dssetup_DsRoleUpgradeStatus *object = (struct dssetup_DsRoleUpgradeStatus *)py_talloc_get_ptr(obj);
	PyObject *py_previous_role;
	py_previous_role = PyInt_FromLong(object->previous_role);
	return py_previous_role;
}

static int py_dssetup_DsRoleUpgradeStatus_set_previous_role(PyObject *py_obj, PyObject *value, void *closure)
{
	struct dssetup_DsRoleUpgradeStatus *object = (struct dssetup_DsRoleUpgradeStatus *)py_talloc_get_ptr(py_obj);
	if (PyLong_Check(value)) {
		object->previous_role = PyLong_AsLongLong(value);
	} else if (PyInt_Check(value)) {
		object->previous_role = PyInt_AsLong(value);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return -1;
	}
	return 0;
}

static PyGetSetDef py_dssetup_DsRoleUpgradeStatus_getsetters[] = {
	{ discard_const_p(char, "upgrading"), py_dssetup_DsRoleUpgradeStatus_get_upgrading, py_dssetup_DsRoleUpgradeStatus_set_upgrading },
	{ discard_const_p(char, "previous_role"), py_dssetup_DsRoleUpgradeStatus_get_previous_role, py_dssetup_DsRoleUpgradeStatus_set_previous_role },
	{ NULL }
};

static PyObject *py_dssetup_DsRoleUpgradeStatus_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_talloc_new(struct dssetup_DsRoleUpgradeStatus, type);
}


static PyTypeObject dssetup_DsRoleUpgradeStatus_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "dssetup.DsRoleUpgradeStatus",
	.tp_getset = py_dssetup_DsRoleUpgradeStatus_getsetters,
	.tp_methods = NULL,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(py_talloc_Object),
	.tp_new = py_dssetup_DsRoleUpgradeStatus_new,
};


static PyObject *py_dssetup_DsRoleOpStatus_get_status(PyObject *obj, void *closure)
{
	struct dssetup_DsRoleOpStatus *object = (struct dssetup_DsRoleOpStatus *)py_talloc_get_ptr(obj);
	PyObject *py_status;
	py_status = PyInt_FromLong(object->status);
	return py_status;
}

static int py_dssetup_DsRoleOpStatus_set_status(PyObject *py_obj, PyObject *value, void *closure)
{
	struct dssetup_DsRoleOpStatus *object = (struct dssetup_DsRoleOpStatus *)py_talloc_get_ptr(py_obj);
	if (PyLong_Check(value)) {
		object->status = PyLong_AsLongLong(value);
	} else if (PyInt_Check(value)) {
		object->status = PyInt_AsLong(value);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return -1;
	}
	return 0;
}

static PyGetSetDef py_dssetup_DsRoleOpStatus_getsetters[] = {
	{ discard_const_p(char, "status"), py_dssetup_DsRoleOpStatus_get_status, py_dssetup_DsRoleOpStatus_set_status },
	{ NULL }
};

static PyObject *py_dssetup_DsRoleOpStatus_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_talloc_new(struct dssetup_DsRoleOpStatus, type);
}


static PyTypeObject dssetup_DsRoleOpStatus_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "dssetup.DsRoleOpStatus",
	.tp_getset = py_dssetup_DsRoleOpStatus_getsetters,
	.tp_methods = NULL,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(py_talloc_Object),
	.tp_new = py_dssetup_DsRoleOpStatus_new,
};

PyObject *py_import_dssetup_DsRoleInfo(TALLOC_CTX *mem_ctx, int level, union dssetup_DsRoleInfo *in)
{
	PyObject *ret;

	switch (level) {
		case DS_ROLE_BASIC_INFORMATION:
			ret = py_talloc_reference_ex(&dssetup_DsRolePrimaryDomInfoBasic_Type, mem_ctx, &in->basic);
			return ret;

		case DS_ROLE_UPGRADE_STATUS:
			ret = py_talloc_reference_ex(&dssetup_DsRoleUpgradeStatus_Type, mem_ctx, &in->upgrade);
			return ret;

		case DS_ROLE_OP_STATUS:
			ret = py_talloc_reference_ex(&dssetup_DsRoleOpStatus_Type, mem_ctx, &in->opstatus);
			return ret;

	}
	PyErr_SetString(PyExc_TypeError, "unknown union level");
	return NULL;
}

union dssetup_DsRoleInfo *py_export_dssetup_DsRoleInfo(TALLOC_CTX *mem_ctx, int level, PyObject *in)
{
	union dssetup_DsRoleInfo *ret = talloc_zero(mem_ctx, union dssetup_DsRoleInfo);
	switch (level) {
		case DS_ROLE_BASIC_INFORMATION:
			PY_CHECK_TYPE(&dssetup_DsRolePrimaryDomInfoBasic_Type, in, talloc_free(ret); return NULL;);
			if (talloc_reference(mem_ctx, py_talloc_get_mem_ctx(in)) == NULL) {
				PyErr_NoMemory();
				talloc_free(ret); return NULL;
			}
			ret->basic = *(struct dssetup_DsRolePrimaryDomInfoBasic *)py_talloc_get_ptr(in);
			break;

		case DS_ROLE_UPGRADE_STATUS:
			PY_CHECK_TYPE(&dssetup_DsRoleUpgradeStatus_Type, in, talloc_free(ret); return NULL;);
			if (talloc_reference(mem_ctx, py_talloc_get_mem_ctx(in)) == NULL) {
				PyErr_NoMemory();
				talloc_free(ret); return NULL;
			}
			ret->upgrade = *(struct dssetup_DsRoleUpgradeStatus *)py_talloc_get_ptr(in);
			break;

		case DS_ROLE_OP_STATUS:
			PY_CHECK_TYPE(&dssetup_DsRoleOpStatus_Type, in, talloc_free(ret); return NULL;);
			if (talloc_reference(mem_ctx, py_talloc_get_mem_ctx(in)) == NULL) {
				PyErr_NoMemory();
				talloc_free(ret); return NULL;
			}
			ret->opstatus = *(struct dssetup_DsRoleOpStatus *)py_talloc_get_ptr(in);
			break;

		default:
			PyErr_SetString(PyExc_TypeError, "invalid union level value");
			talloc_free(ret);
			ret = NULL;
	}

	return ret;
}


static bool pack_py_dssetup_DsRoleGetPrimaryDomainInformation_args_in(PyObject *args, PyObject *kwargs, struct dssetup_DsRoleGetPrimaryDomainInformation *r)
{
	PyObject *py_level;
	const char *kwnames[] = {
		"level", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:dssetup_DsRoleGetPrimaryDomainInformation", discard_const_p(char *, kwnames), &py_level)) {
		return false;
	}

	if (PyLong_Check(py_level)) {
		r->in.level = PyLong_AsLongLong(py_level);
	} else if (PyInt_Check(py_level)) {
		r->in.level = PyInt_AsLong(py_level);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return false;
	}
	return true;
}

static PyObject *unpack_py_dssetup_DsRoleGetPrimaryDomainInformation_args_out(struct dssetup_DsRoleGetPrimaryDomainInformation *r)
{
	PyObject *result;
	PyObject *py_info;
	if (r->out.info == NULL) {
		py_info = Py_None;
		Py_INCREF(py_info);
	} else {
		py_info = py_import_dssetup_DsRoleInfo(r->out.info, r->in.level, r->out.info);
		if (py_info == NULL) {
			return NULL;
		}
	}
	result = py_info;
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

const struct PyNdrRpcMethodDef py_ndr_dssetup_methods[] = {
	{ "DsRoleGetPrimaryDomainInformation", "S.DsRoleGetPrimaryDomainInformation(level) -> info", (py_dcerpc_call_fn)dcerpc_dssetup_DsRoleGetPrimaryDomainInformation_r, (py_data_pack_fn)pack_py_dssetup_DsRoleGetPrimaryDomainInformation_args_in, (py_data_unpack_fn)unpack_py_dssetup_DsRoleGetPrimaryDomainInformation_args_out, 0, &ndr_table_dssetup },
	{ NULL }
};

static PyObject *interface_dssetup_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_interface_init_helper(type, args, kwargs, &ndr_table_dssetup);
}

#define PY_DOC_DSSETUP "Active Directory Setup"
static PyTypeObject dssetup_InterfaceType = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "dssetup.dssetup",
	.tp_basicsize = sizeof(dcerpc_InterfaceObject),
	.tp_doc = "dssetup(binding, lp_ctx=None, credentials=None) -> connection\n"
"\n"
"binding should be a DCE/RPC binding string (for example: ncacn_ip_tcp:127.0.0.1)\n"
"lp_ctx should be a path to a smb.conf file or a param.LoadParm object\n"
"credentials should be a credentials.Credentials object.\n\n"PY_DOC_DSSETUP,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = interface_dssetup_new,
};

static PyMethodDef dssetup_methods[] = {
	{ NULL, NULL, 0, NULL }
};

void initdssetup(void)
{
	PyObject *m;
	PyObject *dep_talloc;
	PyObject *dep_samba_dcerpc_misc;
	PyObject *dep_samba_dcerpc_base;

	dep_talloc = PyImport_ImportModule("talloc");
	if (dep_talloc == NULL)
		return;

	dep_samba_dcerpc_misc = PyImport_ImportModule("samba.dcerpc.misc");
	if (dep_samba_dcerpc_misc == NULL)
		return;

	dep_samba_dcerpc_base = PyImport_ImportModule("samba.dcerpc.base");
	if (dep_samba_dcerpc_base == NULL)
		return;

	Object_Type = (PyTypeObject *)PyObject_GetAttrString(dep_talloc, "Object");
	if (Object_Type == NULL)
		return;

	GUID_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_misc, "GUID");
	if (GUID_Type == NULL)
		return;

	ClientConnection_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_base, "ClientConnection");
	if (ClientConnection_Type == NULL)
		return;

	dssetup_DsRolePrimaryDomInfoBasic_Type.tp_base = Object_Type;

	dssetup_DsRoleUpgradeStatus_Type.tp_base = Object_Type;

	dssetup_DsRoleOpStatus_Type.tp_base = Object_Type;

	dssetup_InterfaceType.tp_base = ClientConnection_Type;

	if (PyType_Ready(&dssetup_DsRolePrimaryDomInfoBasic_Type) < 0)
		return;
	if (PyType_Ready(&dssetup_DsRoleUpgradeStatus_Type) < 0)
		return;
	if (PyType_Ready(&dssetup_DsRoleOpStatus_Type) < 0)
		return;
	if (PyType_Ready(&dssetup_InterfaceType) < 0)
		return;
	if (!PyInterface_AddNdrRpcMethods(&dssetup_InterfaceType, py_ndr_dssetup_methods))
		return;

#ifdef PY_DSROLEPRIMARYDOMINFOBASIC_PATCH
	PY_DSROLEPRIMARYDOMINFOBASIC_PATCH(&dssetup_DsRolePrimaryDomInfoBasic_Type);
#endif
#ifdef PY_DSROLEUPGRADESTATUS_PATCH
	PY_DSROLEUPGRADESTATUS_PATCH(&dssetup_DsRoleUpgradeStatus_Type);
#endif
#ifdef PY_DSROLEOPSTATUS_PATCH
	PY_DSROLEOPSTATUS_PATCH(&dssetup_DsRoleOpStatus_Type);
#endif
#ifdef PY_DSSETUP_PATCH
	PY_DSSETUP_PATCH(&dssetup_InterfaceType);
#endif

	m = Py_InitModule3("dssetup", dssetup_methods, "dssetup DCE/RPC");
	if (m == NULL)
		return;

	PyModule_AddObject(m, "DS_ROLE_NOT_UPGRADING", PyInt_FromLong(DS_ROLE_NOT_UPGRADING));
	PyModule_AddObject(m, "DS_ROLE_PRIMARY_DC", PyInt_FromLong(DS_ROLE_PRIMARY_DC));
	PyModule_AddObject(m, "DS_ROLE_OP_STATUS", PyInt_FromLong(DS_ROLE_OP_STATUS));
	PyModule_AddObject(m, "DS_ROLE_PRIMARY_DS_MIXED_MODE", PyInt_FromLong(DS_ROLE_PRIMARY_DS_MIXED_MODE));
	PyModule_AddObject(m, "DS_ROLE_OP_NEEDS_REBOOT", PyInt_FromLong(DS_ROLE_OP_NEEDS_REBOOT));
	PyModule_AddObject(m, "DS_ROLE_UPGRADE_IN_PROGRESS", PyInt_FromLong(DS_ROLE_UPGRADE_IN_PROGRESS));
	PyModule_AddObject(m, "DS_ROLE_BASIC_INFORMATION", PyInt_FromLong(DS_ROLE_BASIC_INFORMATION));
	PyModule_AddObject(m, "DS_ROLE_UPGRADING", PyInt_FromLong(DS_ROLE_UPGRADING));
	PyModule_AddObject(m, "DS_ROLE_PREVIOUS_BACKUP", PyInt_FromLong(DS_ROLE_PREVIOUS_BACKUP));
	PyModule_AddObject(m, "DS_ROLE_OP_IDLE", PyInt_FromLong(DS_ROLE_OP_IDLE));
	PyModule_AddObject(m, "DS_ROLE_OP_ACTIVE", PyInt_FromLong(DS_ROLE_OP_ACTIVE));
	PyModule_AddObject(m, "DS_ROLE_BACKUP_DC", PyInt_FromLong(DS_ROLE_BACKUP_DC));
	PyModule_AddObject(m, "DS_ROLE_MEMBER_WORKSTATION", PyInt_FromLong(DS_ROLE_MEMBER_WORKSTATION));
	PyModule_AddObject(m, "DS_ROLE_UPGRADE_STATUS", PyInt_FromLong(DS_ROLE_UPGRADE_STATUS));
	PyModule_AddObject(m, "DS_ROLE_PRIMARY_DS_RUNNING", PyInt_FromLong(DS_ROLE_PRIMARY_DS_RUNNING));
	PyModule_AddObject(m, "DS_ROLE_STANDALONE_WORKSTATION", PyInt_FromLong(DS_ROLE_STANDALONE_WORKSTATION));
	PyModule_AddObject(m, "DS_ROLE_PRIMARY_DOMAIN_GUID_PRESENT", PyInt_FromLong(DS_ROLE_PRIMARY_DOMAIN_GUID_PRESENT));
	PyModule_AddObject(m, "DS_ROLE_PREVIOUS_UNKNOWN", PyInt_FromLong(DS_ROLE_PREVIOUS_UNKNOWN));
	PyModule_AddObject(m, "DS_ROLE_STANDALONE_SERVER", PyInt_FromLong(DS_ROLE_STANDALONE_SERVER));
	PyModule_AddObject(m, "DS_ROLE_PREVIOUS_PRIMARY", PyInt_FromLong(DS_ROLE_PREVIOUS_PRIMARY));
	PyModule_AddObject(m, "DS_ROLE_MEMBER_SERVER", PyInt_FromLong(DS_ROLE_MEMBER_SERVER));
	Py_INCREF((PyObject *)(void *)&dssetup_DsRolePrimaryDomInfoBasic_Type);
	PyModule_AddObject(m, "DsRolePrimaryDomInfoBasic", (PyObject *)(void *)&dssetup_DsRolePrimaryDomInfoBasic_Type);
	Py_INCREF((PyObject *)(void *)&dssetup_DsRoleUpgradeStatus_Type);
	PyModule_AddObject(m, "DsRoleUpgradeStatus", (PyObject *)(void *)&dssetup_DsRoleUpgradeStatus_Type);
	Py_INCREF((PyObject *)(void *)&dssetup_DsRoleOpStatus_Type);
	PyModule_AddObject(m, "DsRoleOpStatus", (PyObject *)(void *)&dssetup_DsRoleOpStatus_Type);
	Py_INCREF((PyObject *)(void *)&dssetup_InterfaceType);
	PyModule_AddObject(m, "dssetup", (PyObject *)(void *)&dssetup_InterfaceType);
#ifdef PY_MOD_DSSETUP_PATCH
	PY_MOD_DSSETUP_PATCH(m);
#endif

}
