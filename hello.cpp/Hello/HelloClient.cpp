#include "stdafx.h"
#include "Hello_h.h"


int _main()
{
	RPC_STATUS status;
	unsigned char* szStringBinding = NULL;

	//with reinterpreter cast
	//unsigned char* szOutput = reinterpret_cast<unsigned char*>("Let's RPC Call");

	// Creates a string binding handle.
	// This function is nothing more than a printf.
	// Connection is not done here.
	status = RpcStringBindingCompose(
		NULL, // UUID to bind to.
		reinterpret_cast<unsigned char*>("ncacn_ip_tcp"), // Use TCP/IP
		// protocol.
		reinterpret_cast<unsigned char*>("localhost"), // TCP/IP network
		// address to use.
		reinterpret_cast<unsigned char*>("4747"), // TCP/IP port to use.
		NULL, // Protocol dependent network options to use.
		&szStringBinding); // String binding output.

	if (status)
		exit(status);

	// Validates the format of the string binding handle and converts
	// it to a binding handle.
	// Connection is not done here either.
	status = RpcBindingFromStringBinding(
		szStringBinding, // The string binding to validate.
		&hHelloBinding); // Put the result in the implicit binding
	// handle defined in the IDL file.

	if (status)
		exit(status);

	RpcTryExcept
	{
		// Calls the RPC function. The hHelloBinding binding handle
		// is used implicitly.
		// Connection is done here.
		const char*  szOutput = "Hello Thanyadol !";
		std::cout << "Call to RPC server command ^^ : " << szOutput << std::endl;

		//output(szOutput);
		getchar();
	}
		RpcExcept(1)
	{
		std::cerr << "Runtime reported exception " << RpcExceptionCode()
			<< std::endl;
	}
	RpcEndExcept

		// Free the memory allocated by a string.
		status = RpcStringFree(
		&szStringBinding); // String to be freed.

	if (status)
		exit(status);

	// Releases binding handle resources and disconnects from the server.
	status = RpcBindingFree(
		&hHelloBinding); // Frees the implicit binding handle defined in
	// the IDL file.

	if (status)
		exit(status);
}

// Memory allocation function for RPC.
// The runtime uses these two functions for allocating/deallocating
// enough memory to pass the string to the server.
void* __RPC_USER midl_user_allocate(size_t size)
{
	return malloc(size);
}

// Memory deallocation function for RPC.
void __RPC_USER midl_user_free(void* p)
{
	free(p);
}