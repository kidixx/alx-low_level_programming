#include <Python.h>

static PyObject *multiply(PyObject *self, PyObject *args)
{
	int x, y;

	if (!PyArg_ParseTuple(args, "ii", &x, &y))
	{
		return (NULL);
	}

	int result = x * y;

	return (Py_BuildValue("i", result));
}

static PyMethodDef example_methods[] = {
	{"multiply", multiply, METH_VARARGS, "Multiply two integers"},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef example_module = {
	PyModuleDef_HEAD_INIT,
	"example",
	"Example module",
	-1,
	example_methods
};

PyMODINIT_FUNC PyInit_example(void)
{
	return (PyModule_Create(&example_module));
}
