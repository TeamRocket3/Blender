#include "BPy_QuantitativeInvisibilityUP1D.h"

#ifdef __cplusplus
extern "C" {
#endif

///////////////////////////////////////////////////////////////////////////////////////////

//------------------------INSTANCE METHODS ----------------------------------

static char QuantitativeInvisibilityUP1D___doc__[] =
".. method:: __init__(qi=0)\n"
"\n"
"   Builds a QuantitativeInvisibilityUP1D object.\n"
"\n"
"   :arg qi: The Quantitative Invisibility you want the Interface1D to\n"
"      have.\n"
"   :type qi: int\n"
"\n"
".. method:: __call__(inter)\n"
"\n"
"   Returns true if the Quantitative Invisibility evaluated at an\n"
"   Interface1D, using the :class:`QuantitativeInvisibilityF1D`\n"
"   functor, equals a certain user-defined value.\n"
"\n"
"   :arg inter: An Interface1D object.\n"
"   :type inter: :class:`Interface1D`\n"
"   :return: True if Quantitative Invisibility equals a user-defined\n"
"      value.\n"
"   :rtype: bool\n";

static int QuantitativeInvisibilityUP1D___init__( BPy_QuantitativeInvisibilityUP1D* self, PyObject *args )
{
	int i = 0;

	if( !PyArg_ParseTuple(args, "|i", &i) )
		return -1;
	
	self->py_up1D.up1D = new Predicates1D::QuantitativeInvisibilityUP1D(i);
	return 0;
}

/*-----------------------BPy_QuantitativeInvisibilityUP1D type definition ------------------------------*/

PyTypeObject QuantitativeInvisibilityUP1D_Type = {
	PyVarObject_HEAD_INIT(NULL, 0)
	"QuantitativeInvisibilityUP1D", /* tp_name */
	sizeof(BPy_QuantitativeInvisibilityUP1D), /* tp_basicsize */
	0,                              /* tp_itemsize */
	0,                              /* tp_dealloc */
	0,                              /* tp_print */
	0,                              /* tp_getattr */
	0,                              /* tp_setattr */
	0,                              /* tp_reserved */
	0,                              /* tp_repr */
	0,                              /* tp_as_number */
	0,                              /* tp_as_sequence */
	0,                              /* tp_as_mapping */
	0,                              /* tp_hash  */
	0,                              /* tp_call */
	0,                              /* tp_str */
	0,                              /* tp_getattro */
	0,                              /* tp_setattro */
	0,                              /* tp_as_buffer */
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /* tp_flags */
	QuantitativeInvisibilityUP1D___doc__, /* tp_doc */
	0,                              /* tp_traverse */
	0,                              /* tp_clear */
	0,                              /* tp_richcompare */
	0,                              /* tp_weaklistoffset */
	0,                              /* tp_iter */
	0,                              /* tp_iternext */
	0,                              /* tp_methods */
	0,                              /* tp_members */
	0,                              /* tp_getset */
	&UnaryPredicate1D_Type,         /* tp_base */
	0,                              /* tp_dict */
	0,                              /* tp_descr_get */
	0,                              /* tp_descr_set */
	0,                              /* tp_dictoffset */
	(initproc)QuantitativeInvisibilityUP1D___init__, /* tp_init */
	0,                              /* tp_alloc */
	0,                              /* tp_new */
};

///////////////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
}
#endif
