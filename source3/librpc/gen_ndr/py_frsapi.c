
/* Python wrapper functions auto-generated by pidl */
#include <Python.h>
#include "includes.h"
#include <pytalloc.h>
#include "librpc/rpc/pyrpc.h"
#include "librpc/rpc/pyrpc_util.h"
#include "librpc/gen_ndr/ndr_frsapi.h"
#include "librpc/gen_ndr/ndr_frsapi_c.h"

#include "librpc/gen_ndr/misc.h"
staticforward PyTypeObject frsapi_Info_Type;
staticforward PyTypeObject frsapi_InterfaceType;

void initfrsapi(void);static PyTypeObject *Object_Type;
static PyTypeObject *GUID_Type;
static PyTypeObject *ClientConnection_Type;

static PyObject *py_frsapi_Info_get_length(PyObject *obj, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(obj);
	PyObject *py_length;
	py_length = PyInt_FromLong(object->length);
	return py_length;
}

static int py_frsapi_Info_set_length(PyObject *py_obj, PyObject *value, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->length = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_frsapi_Info_get_guid(PyObject *obj, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(obj);
	PyObject *py_guid;
	py_guid = py_talloc_reference_ex(GUID_Type, py_talloc_get_mem_ctx(obj), &object->guid);
	return py_guid;
}

static int py_frsapi_Info_set_guid(PyObject *py_obj, PyObject *value, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(py_obj);
	PY_CHECK_TYPE(GUID_Type, value, return -1;);
	if (talloc_reference(py_talloc_get_mem_ctx(py_obj), py_talloc_get_mem_ctx(value)) == NULL) {
		PyErr_NoMemory();
		return -1;
	}
	object->guid = *(struct GUID *)py_talloc_get_ptr(value);
	return 0;
}

static PyObject *py_frsapi_Info_get_length2(PyObject *obj, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(obj);
	PyObject *py_length2;
	py_length2 = PyInt_FromLong(object->length2);
	return py_length2;
}

static int py_frsapi_Info_set_length2(PyObject *py_obj, PyObject *value, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->length2 = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_frsapi_Info_get_unknown1(PyObject *obj, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(obj);
	PyObject *py_unknown1;
	py_unknown1 = PyInt_FromLong(object->unknown1);
	return py_unknown1;
}

static int py_frsapi_Info_set_unknown1(PyObject *py_obj, PyObject *value, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->unknown1 = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_frsapi_Info_get_level(PyObject *obj, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(obj);
	PyObject *py_level;
	py_level = PyInt_FromLong(object->level);
	return py_level;
}

static int py_frsapi_Info_set_level(PyObject *py_obj, PyObject *value, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(py_obj);
	if (PyLong_Check(value)) {
		object->level = PyLong_AsLongLong(value);
	} else if (PyInt_Check(value)) {
		object->level = PyInt_AsLong(value);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return -1;
	}
	return 0;
}

static PyObject *py_frsapi_Info_get_query_counter(PyObject *obj, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(obj);
	PyObject *py_query_counter;
	py_query_counter = PyInt_FromLong(object->query_counter);
	return py_query_counter;
}

static int py_frsapi_Info_set_query_counter(PyObject *py_obj, PyObject *value, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->query_counter = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_frsapi_Info_get_unknown2(PyObject *obj, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(obj);
	PyObject *py_unknown2;
	py_unknown2 = PyInt_FromLong(object->unknown2);
	return py_unknown2;
}

static int py_frsapi_Info_set_unknown2(PyObject *py_obj, PyObject *value, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->unknown2 = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_frsapi_Info_get_offset(PyObject *obj, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(obj);
	PyObject *py_offset;
	py_offset = PyInt_FromLong(object->offset);
	return py_offset;
}

static int py_frsapi_Info_set_offset(PyObject *py_obj, PyObject *value, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->offset = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_frsapi_Info_get_blob_len(PyObject *obj, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(obj);
	PyObject *py_blob_len;
	py_blob_len = PyInt_FromLong(object->blob_len);
	return py_blob_len;
}

static int py_frsapi_Info_set_blob_len(PyObject *py_obj, PyObject *value, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(py_obj);
	PY_CHECK_TYPE(&PyInt_Type, value, return -1;);
	object->blob_len = PyInt_AsLong(value);
	return 0;
}

static PyObject *py_frsapi_Info_get_blob(PyObject *obj, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(obj);
	PyObject *py_blob;
	py_blob = PyString_FromStringAndSize((char *)(object->blob).data, (object->blob).length);
	return py_blob;
}

static int py_frsapi_Info_set_blob(PyObject *py_obj, PyObject *value, void *closure)
{
	struct frsapi_Info *object = (struct frsapi_Info *)py_talloc_get_ptr(py_obj);
	object->blob = data_blob_talloc(py_talloc_get_mem_ctx(py_obj), PyString_AS_STRING(value), PyString_GET_SIZE(value));
	return 0;
}

static PyGetSetDef py_frsapi_Info_getsetters[] = {
	{ discard_const_p(char, "length"), py_frsapi_Info_get_length, py_frsapi_Info_set_length },
	{ discard_const_p(char, "guid"), py_frsapi_Info_get_guid, py_frsapi_Info_set_guid },
	{ discard_const_p(char, "length2"), py_frsapi_Info_get_length2, py_frsapi_Info_set_length2 },
	{ discard_const_p(char, "unknown1"), py_frsapi_Info_get_unknown1, py_frsapi_Info_set_unknown1 },
	{ discard_const_p(char, "level"), py_frsapi_Info_get_level, py_frsapi_Info_set_level },
	{ discard_const_p(char, "query_counter"), py_frsapi_Info_get_query_counter, py_frsapi_Info_set_query_counter },
	{ discard_const_p(char, "unknown2"), py_frsapi_Info_get_unknown2, py_frsapi_Info_set_unknown2 },
	{ discard_const_p(char, "offset"), py_frsapi_Info_get_offset, py_frsapi_Info_set_offset },
	{ discard_const_p(char, "blob_len"), py_frsapi_Info_get_blob_len, py_frsapi_Info_set_blob_len },
	{ discard_const_p(char, "blob"), py_frsapi_Info_get_blob, py_frsapi_Info_set_blob },
	{ NULL }
};

static PyObject *py_frsapi_Info_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_talloc_new(struct frsapi_Info, type);
}


static PyTypeObject frsapi_Info_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "frsapi.Info",
	.tp_getset = py_frsapi_Info_getsetters,
	.tp_methods = NULL,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_basicsize = sizeof(py_talloc_Object),
	.tp_new = py_frsapi_Info_new,
};


static bool pack_py_frsapi_SetDsPollingIntervalW_args_in(PyObject *args, PyObject *kwargs, struct frsapi_SetDsPollingIntervalW *r)
{
	PyObject *py_CurrentInterval;
	PyObject *py_DsPollingLongInterval;
	PyObject *py_DsPollingShortInterval;
	const char *kwnames[] = {
		"CurrentInterval", "DsPollingLongInterval", "DsPollingShortInterval", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "OOO:frsapi_SetDsPollingIntervalW", discard_const_p(char *, kwnames), &py_CurrentInterval, &py_DsPollingLongInterval, &py_DsPollingShortInterval)) {
		return false;
	}

	PY_CHECK_TYPE(&PyInt_Type, py_CurrentInterval, return false;);
	r->in.CurrentInterval = PyInt_AsLong(py_CurrentInterval);
	PY_CHECK_TYPE(&PyInt_Type, py_DsPollingLongInterval, return false;);
	r->in.DsPollingLongInterval = PyInt_AsLong(py_DsPollingLongInterval);
	PY_CHECK_TYPE(&PyInt_Type, py_DsPollingShortInterval, return false;);
	r->in.DsPollingShortInterval = PyInt_AsLong(py_DsPollingShortInterval);
	return true;
}

static PyObject *unpack_py_frsapi_SetDsPollingIntervalW_args_out(struct frsapi_SetDsPollingIntervalW *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

static bool pack_py_frsapi_GetDsPollingIntervalW_args_in(PyObject *args, PyObject *kwargs, struct frsapi_GetDsPollingIntervalW *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":frsapi_GetDsPollingIntervalW", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_frsapi_GetDsPollingIntervalW_args_out(struct frsapi_GetDsPollingIntervalW *r)
{
	PyObject *result;
	PyObject *py_CurrentInterval;
	PyObject *py_DsPollingLongInterval;
	PyObject *py_DsPollingShortInterval;
	result = PyTuple_New(3);
	py_CurrentInterval = PyInt_FromLong(*r->out.CurrentInterval);
	PyTuple_SetItem(result, 0, py_CurrentInterval);
	py_DsPollingLongInterval = PyInt_FromLong(*r->out.DsPollingLongInterval);
	PyTuple_SetItem(result, 1, py_DsPollingLongInterval);
	py_DsPollingShortInterval = PyInt_FromLong(*r->out.DsPollingShortInterval);
	PyTuple_SetItem(result, 2, py_DsPollingShortInterval);
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

static bool pack_py_frsapi_InfoW_args_in(PyObject *args, PyObject *kwargs, struct frsapi_InfoW *r)
{
	PyObject *py_length;
	PyObject *py_info;
	const char *kwnames[] = {
		"length", "info", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "OO:frsapi_InfoW", discard_const_p(char *, kwnames), &py_length, &py_info)) {
		return false;
	}

	PY_CHECK_TYPE(&PyInt_Type, py_length, return false;);
	r->in.length = PyInt_AsLong(py_length);
	if (py_info == Py_None) {
		r->in.info = NULL;
	} else {
		r->in.info = NULL;
		PY_CHECK_TYPE(&frsapi_Info_Type, py_info, return false;);
		if (talloc_reference(r, py_talloc_get_mem_ctx(py_info)) == NULL) {
			PyErr_NoMemory();
			return false;
		}
		r->in.info = (struct frsapi_Info *)py_talloc_get_ptr(py_info);
	}
	return true;
}

static PyObject *unpack_py_frsapi_InfoW_args_out(struct frsapi_InfoW *r)
{
	PyObject *result;
	PyObject *py_info;
	if (r->out.info == NULL) {
		py_info = Py_None;
		Py_INCREF(py_info);
	} else {
		py_info = py_talloc_reference_ex(&frsapi_Info_Type, r->out.info, r->out.info);
	}
	result = py_info;
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

static bool pack_py_frsapi_IsPathReplicated_args_in(PyObject *args, PyObject *kwargs, struct frsapi_IsPathReplicated *r)
{
	PyObject *py_path;
	PyObject *py_replica_set_type;
	const char *kwnames[] = {
		"path", "replica_set_type", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "OO:frsapi_IsPathReplicated", discard_const_p(char *, kwnames), &py_path, &py_replica_set_type)) {
		return false;
	}

	if (py_path == Py_None) {
		r->in.path = NULL;
	} else {
		r->in.path = NULL;
		if (PyUnicode_Check(py_path)) {
			r->in.path = PyString_AS_STRING(PyUnicode_AsEncodedString(py_path, "utf-8", "ignore"));
		} else if (PyString_Check(py_path)) {
			r->in.path = PyString_AS_STRING(py_path);
		} else {
			PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(py_path)->tp_name);
			return false;
		}
	}
	if (PyLong_Check(py_replica_set_type)) {
		r->in.replica_set_type = PyLong_AsLongLong(py_replica_set_type);
	} else if (PyInt_Check(py_replica_set_type)) {
		r->in.replica_set_type = PyInt_AsLong(py_replica_set_type);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return false;
	}
	return true;
}

static PyObject *unpack_py_frsapi_IsPathReplicated_args_out(struct frsapi_IsPathReplicated *r)
{
	PyObject *result;
	PyObject *py_replicated;
	PyObject *py_primary;
	PyObject *py_root;
	PyObject *py_replica_set_guid;
	result = PyTuple_New(4);
	py_replicated = PyInt_FromLong(*r->out.replicated);
	PyTuple_SetItem(result, 0, py_replicated);
	py_primary = PyInt_FromLong(*r->out.primary);
	PyTuple_SetItem(result, 1, py_primary);
	py_root = PyInt_FromLong(*r->out.root);
	PyTuple_SetItem(result, 2, py_root);
	py_replica_set_guid = py_talloc_reference_ex(GUID_Type, r->out.replica_set_guid, r->out.replica_set_guid);
	PyTuple_SetItem(result, 3, py_replica_set_guid);
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

static bool pack_py_frsapi_WriterCommand_args_in(PyObject *args, PyObject *kwargs, struct frsapi_WriterCommand *r)
{
	PyObject *py_command;
	const char *kwnames[] = {
		"command", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:frsapi_WriterCommand", discard_const_p(char *, kwnames), &py_command)) {
		return false;
	}

	if (PyLong_Check(py_command)) {
		r->in.command = PyLong_AsLongLong(py_command);
	} else if (PyInt_Check(py_command)) {
		r->in.command = PyInt_AsLong(py_command);
	} else {
		PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
		  PyInt_Type.tp_name, PyLong_Type.tp_name);
		return false;
	}
	return true;
}

static PyObject *unpack_py_frsapi_WriterCommand_args_out(struct frsapi_WriterCommand *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

static bool pack_py_frsapi_ForceReplication_args_in(PyObject *args, PyObject *kwargs, struct frsapi_ForceReplication *r)
{
	PyObject *py_replica_set_guid;
	PyObject *py_connection_guid;
	PyObject *py_replica_set_name;
	PyObject *py_partner_dns_name;
	const char *kwnames[] = {
		"replica_set_guid", "connection_guid", "replica_set_name", "partner_dns_name", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "OOOO:frsapi_ForceReplication", discard_const_p(char *, kwnames), &py_replica_set_guid, &py_connection_guid, &py_replica_set_name, &py_partner_dns_name)) {
		return false;
	}

	if (py_replica_set_guid == Py_None) {
		r->in.replica_set_guid = NULL;
	} else {
		r->in.replica_set_guid = NULL;
		PY_CHECK_TYPE(GUID_Type, py_replica_set_guid, return false;);
		if (talloc_reference(r, py_talloc_get_mem_ctx(py_replica_set_guid)) == NULL) {
			PyErr_NoMemory();
			return false;
		}
		r->in.replica_set_guid = (struct GUID *)py_talloc_get_ptr(py_replica_set_guid);
	}
	if (py_connection_guid == Py_None) {
		r->in.connection_guid = NULL;
	} else {
		r->in.connection_guid = NULL;
		PY_CHECK_TYPE(GUID_Type, py_connection_guid, return false;);
		if (talloc_reference(r, py_talloc_get_mem_ctx(py_connection_guid)) == NULL) {
			PyErr_NoMemory();
			return false;
		}
		r->in.connection_guid = (struct GUID *)py_talloc_get_ptr(py_connection_guid);
	}
	if (py_replica_set_name == Py_None) {
		r->in.replica_set_name = NULL;
	} else {
		r->in.replica_set_name = NULL;
		if (PyUnicode_Check(py_replica_set_name)) {
			r->in.replica_set_name = PyString_AS_STRING(PyUnicode_AsEncodedString(py_replica_set_name, "utf-8", "ignore"));
		} else if (PyString_Check(py_replica_set_name)) {
			r->in.replica_set_name = PyString_AS_STRING(py_replica_set_name);
		} else {
			PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(py_replica_set_name)->tp_name);
			return false;
		}
	}
	if (py_partner_dns_name == Py_None) {
		r->in.partner_dns_name = NULL;
	} else {
		r->in.partner_dns_name = NULL;
		if (PyUnicode_Check(py_partner_dns_name)) {
			r->in.partner_dns_name = PyString_AS_STRING(PyUnicode_AsEncodedString(py_partner_dns_name, "utf-8", "ignore"));
		} else if (PyString_Check(py_partner_dns_name)) {
			r->in.partner_dns_name = PyString_AS_STRING(py_partner_dns_name);
		} else {
			PyErr_Format(PyExc_TypeError, "Expected string or unicode object, got %s", Py_TYPE(py_partner_dns_name)->tp_name);
			return false;
		}
	}
	return true;
}

static PyObject *unpack_py_frsapi_ForceReplication_args_out(struct frsapi_ForceReplication *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	if (!W_ERROR_IS_OK(r->out.result)) {
		PyErr_SetWERROR(r->out.result);
		return NULL;
	}

	return result;
}

const struct PyNdrRpcMethodDef py_ndr_frsapi_methods[] = {
	{ "SetDsPollingIntervalW", "S.SetDsPollingIntervalW(CurrentInterval, DsPollingLongInterval, DsPollingShortInterval) -> None", (py_dcerpc_call_fn)dcerpc_frsapi_SetDsPollingIntervalW_r, (py_data_pack_fn)pack_py_frsapi_SetDsPollingIntervalW_args_in, (py_data_unpack_fn)unpack_py_frsapi_SetDsPollingIntervalW_args_out, 4, &ndr_table_frsapi },
	{ "GetDsPollingIntervalW", "S.GetDsPollingIntervalW() -> (CurrentInterval, DsPollingLongInterval, DsPollingShortInterval)", (py_dcerpc_call_fn)dcerpc_frsapi_GetDsPollingIntervalW_r, (py_data_pack_fn)pack_py_frsapi_GetDsPollingIntervalW_args_in, (py_data_unpack_fn)unpack_py_frsapi_GetDsPollingIntervalW_args_out, 5, &ndr_table_frsapi },
	{ "InfoW", "S.InfoW(length, info) -> info", (py_dcerpc_call_fn)dcerpc_frsapi_InfoW_r, (py_data_pack_fn)pack_py_frsapi_InfoW_args_in, (py_data_unpack_fn)unpack_py_frsapi_InfoW_args_out, 7, &ndr_table_frsapi },
	{ "IsPathReplicated", "S.IsPathReplicated(path, replica_set_type) -> (replicated, primary, root, replica_set_guid)", (py_dcerpc_call_fn)dcerpc_frsapi_IsPathReplicated_r, (py_data_pack_fn)pack_py_frsapi_IsPathReplicated_args_in, (py_data_unpack_fn)unpack_py_frsapi_IsPathReplicated_args_out, 8, &ndr_table_frsapi },
	{ "WriterCommand", "S.WriterCommand(command) -> None", (py_dcerpc_call_fn)dcerpc_frsapi_WriterCommand_r, (py_data_pack_fn)pack_py_frsapi_WriterCommand_args_in, (py_data_unpack_fn)unpack_py_frsapi_WriterCommand_args_out, 9, &ndr_table_frsapi },
	{ "ForceReplication", "S.ForceReplication(replica_set_guid, connection_guid, replica_set_name, partner_dns_name) -> None", (py_dcerpc_call_fn)dcerpc_frsapi_ForceReplication_r, (py_data_pack_fn)pack_py_frsapi_ForceReplication_args_in, (py_data_unpack_fn)unpack_py_frsapi_ForceReplication_args_out, 10, &ndr_table_frsapi },
	{ NULL }
};

static PyObject *interface_frsapi_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_interface_init_helper(type, args, kwargs, &ndr_table_frsapi);
}

#define PY_DOC_FRSAPI "File Replication API"
static PyTypeObject frsapi_InterfaceType = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "frsapi.frsapi",
	.tp_basicsize = sizeof(dcerpc_InterfaceObject),
	.tp_doc = "frsapi(binding, lp_ctx=None, credentials=None) -> connection\n"
"\n"
"binding should be a DCE/RPC binding string (for example: ncacn_ip_tcp:127.0.0.1)\n"
"lp_ctx should be a path to a smb.conf file or a param.LoadParm object\n"
"credentials should be a credentials.Credentials object.\n\n"PY_DOC_FRSAPI,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = interface_frsapi_new,
};

static PyMethodDef frsapi_methods[] = {
	{ NULL, NULL, 0, NULL }
};

void initfrsapi(void)
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

	frsapi_Info_Type.tp_base = Object_Type;

	frsapi_InterfaceType.tp_base = ClientConnection_Type;

	if (PyType_Ready(&frsapi_Info_Type) < 0)
		return;
	if (PyType_Ready(&frsapi_InterfaceType) < 0)
		return;
	if (!PyInterface_AddNdrRpcMethods(&frsapi_InterfaceType, py_ndr_frsapi_methods))
		return;

#ifdef PY_INFO_PATCH
	PY_INFO_PATCH(&frsapi_Info_Type);
#endif
#ifdef PY_FRSAPI_PATCH
	PY_FRSAPI_PATCH(&frsapi_InterfaceType);
#endif

	m = Py_InitModule3("frsapi", frsapi_methods, "frsapi DCE/RPC");
	if (m == NULL)
		return;

	PyModule_AddObject(m, "FRSAPI_INFO_CONFIGTABLE", PyInt_FromLong(FRSAPI_INFO_CONFIGTABLE));
	PyModule_AddObject(m, "FRSAPI_INFO_SETS", PyInt_FromLong(FRSAPI_INFO_SETS));
	PyModule_AddObject(m, "FRSAPI_INFO_VERSION", PyInt_FromLong(FRSAPI_INFO_VERSION));
	PyModule_AddObject(m, "FRSAPI_REPLICA_SET_TYPE_DFS", PyInt_FromLong(FRSAPI_REPLICA_SET_TYPE_DFS));
	PyModule_AddObject(m, "FRSAPI_INFO_INLOG", PyInt_FromLong(FRSAPI_INFO_INLOG));
	PyModule_AddObject(m, "FRSAPI_WRITER_COMMAND_THAW", PyInt_FromLong(FRSAPI_WRITER_COMMAND_THAW));
	PyModule_AddObject(m, "FRSAPI_REPLICA_SET_TYPE_DOMAIN", PyInt_FromLong(FRSAPI_REPLICA_SET_TYPE_DOMAIN));
	PyModule_AddObject(m, "FRSAPI_INFO_OUTLOG", PyInt_FromLong(FRSAPI_INFO_OUTLOG));
	PyModule_AddObject(m, "FRSAPI_WRITER_COMMAND_FREEZE", PyInt_FromLong(FRSAPI_WRITER_COMMAND_FREEZE));
	PyModule_AddObject(m, "FRSAPI_INFO_STAGE", PyInt_FromLong(FRSAPI_INFO_STAGE));
	PyModule_AddObject(m, "FRSAPI_INFO_IDTABLE", PyInt_FromLong(FRSAPI_INFO_IDTABLE));
	PyModule_AddObject(m, "FRSAPI_INFO_THREADS", PyInt_FromLong(FRSAPI_INFO_THREADS));
	PyModule_AddObject(m, "FRSAPI_INFO_MEMORY", PyInt_FromLong(FRSAPI_INFO_MEMORY));
	PyModule_AddObject(m, "FRSAPI_REPLICA_SET_TYPE_0", PyInt_FromLong(FRSAPI_REPLICA_SET_TYPE_0));
	PyModule_AddObject(m, "FRSAPI_INFO_DS", PyInt_FromLong(FRSAPI_INFO_DS));
	Py_INCREF((PyObject *)(void *)&frsapi_Info_Type);
	PyModule_AddObject(m, "Info", (PyObject *)(void *)&frsapi_Info_Type);
	Py_INCREF((PyObject *)(void *)&frsapi_InterfaceType);
	PyModule_AddObject(m, "frsapi", (PyObject *)(void *)&frsapi_InterfaceType);
#ifdef PY_MOD_FRSAPI_PATCH
	PY_MOD_FRSAPI_PATCH(m);
#endif

}
