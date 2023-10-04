// [PrintTSROSEHeader]
/**
 * ENetUC_Event_ManagerROSE
 * "UC-Server-Access-Protocol-Event-Manager" ASN.1 stubs.
 * This file was generated by estos esnacc (V5.0.20, 04.10.2023)
 * based on Coral WinSnacc written by Deepak Gupta
 * NOTE: This is a machine generated file - editing not recommended
 */

// prettier-ignore
/* eslint-disable */
// [PrintTSROSEImports]
// Global imports
import { IENetUC_Event_ManagerROSE, IENetUC_Event_ManagerROSE_Handler } from "./ENetUC_Event_ManagerROSE_Interface";
import { ROSEError, ROSEInvoke, ROSEReject, ROSEResult } from "./SNACCROSE";
import { AsnInvokeProblem, AsnInvokeProblemEnum, createInvokeReject, IASN1Transport, IASN1LogData, IReceiveInvokeContext, ISendInvokeContextParams, IInvokeHandler, ELogSeverity, ROSEBase } from "./TSROSEBase";
// Local imports
import * as ENetUC_Event_Manager from "./ENetUC_Event_Manager";
import * as Converter from "./ENetUC_Event_Manager_Converter";
// [PrintTSImports]
import * as ENetUC_Common from "./ENetUC_Common";
import * as ENetUC_Common_Converter from "./ENetUC_Common_Converter";
// [PrintTSRootTypes]
export const moduleName = "ENetUC_Event_ManagerROSE";

// [PrintTSROSEOperationDefines]
enum OperationIDs {
	OPID_asnCreateFancyEvents = 4000,
	OPID_asnFancyEvent = 4050
}

// [PrintTSROSEModuleComment]

// [PrintTSROSEClass]
export class ENetUC_Event_ManagerROSE extends ROSEBase implements IInvokeHandler, IENetUC_Event_ManagerROSE {
	/**
	 * Contains the attributes that have to be filtered from logging
	 * Use logfilter property;property inside the asn1 root comments to specify this list
	 */
	public readonly logFilter: string[];

	/**
	 * The Loggers getLogData callback (used in all the log methods called in this class, add the classname to every log entry)
	 *
	 * @returns - an ILogData log data object provided additional data for all the logger calls in this class
	 */
	public getLogData(): IASN1LogData {
		return {
			className: moduleName
		};
	}

	/**
	 * Returns the name for a certain operationID
	 *
	 * @param id - the id we want to have the name for
	 * @returns - the name or an emtpy string if not found
	 */
	public getNameForOperationID(id: OperationIDs): string {
		switch (id) {
			case OperationIDs.OPID_asnCreateFancyEvents:
				return "asnCreateFancyEvents";
			case OperationIDs.OPID_asnFancyEvent:
				return "asnFancyEvent";
			default:
				return "";
		}
	}

	// [PrintTSROSEConstructor]
	/**
	 * Constructs the invoke and oninvoke object targeting all the ROSE related parts.
	 *
	 * @param transport - The transport is the connection to the other side. It takes care of delivering the invoke
	 * to us as well as to send invokes and events to the other side. It also holds the logger.
	 * @param handleEvents - Set this to true if you want to receive events or false if the stub should cached them
	 * until you call dispatchEvents();
	 * @param handler - The handler takes care of handling methods that are exposed through the ASN1 file
	 * The outer ROSE envelop specifies the function that is called. The server looks for an appropriate handler
	 * and calls the handler for the operation. Inside the operation the argument is decoded. Once the handling of the
	 * operation is done the result (error) is encoded and handed back to the callee, embedded in the ROSE envelop and send
	 * back to the other side. If a certain function is not register the function call will fail with not function not implemented
	 */
	public constructor(transport: IASN1Transport, handleEvents: boolean, handler?: Partial<IENetUC_Event_ManagerROSE_Handler>) {
		super(transport, handleEvents);

		this.logFilter = [];

		if (handler)
			this.setHandler(handler);
	}

	// [PrintTSROSESetHandler]
	/**
	 * Sets the handler and registers the operations with it
	 *
	 * @param handler - The handler takes care of handling methods that are exposed through the ASN1 file
	 * The outer ROSE envelop specifies the function that is called. The server looks for an appropriate handler
	 * and calls the handler for the operation. Inside the operation the argument is decoded. Once the handling of the
	 * operation is done the result (error) is encoded and handed back to the callee, embedded in the ROSE envelop and send
	 * back to the other side. If a certain function is not register the function call will fail with not function not implemented
	 */
	public setHandler(handler: Partial<IENetUC_Event_ManagerROSE_Handler>) {
		this.transport.registerOperation(this, handler, 4000);
		this.transport.registerOperation(this, handler, 4050);
	}

	// [PrintTSROSEInvokeMethods]

	// [PrintTSROSEInvokeMethod]
	/**
	 * Method that will create some events the server will then dispatch to the clients
	 * It´s not possible to call this method through rest as the client won´t receive these events
	 *
	 * @param argument - An AsnCreateFancyEventsArgument object containing all the relevant parameters for the call
	 * @param invokeContext - Invoke related contextual data (e.g. a clientConnectionID)
	 * @returns a Promise resolving into AsnCreateFancyEventsResult, an AsnRequestError or AsnInvokeProblem object
	 */
	public async invoke_asnCreateFancyEvents(argument: ENetUC_Event_Manager.AsnCreateFancyEventsArgument, invokeContext?: ISendInvokeContextParams): Promise<ENetUC_Event_Manager.AsnCreateFancyEventsResult | ENetUC_Common.AsnRequestError | AsnInvokeProblem> {
		return this.handleInvoke(argument, ENetUC_Event_Manager.AsnCreateFancyEventsResult, OperationIDs.OPID_asnCreateFancyEvents, Converter.AsnCreateFancyEventsArgument_Converter, Converter.AsnCreateFancyEventsResult_Converter, invokeContext);
	}

	// [PrintTSROSEInvokeMethod]
	/**
	 * An event that is dispatched from the server to the clients
	 *
	 * @param argument - An AsnFancyEventArgument object containing all the relevant parameters for the call
	 * @param invokeContext - Invoke related contextual data (e.g. a clientConnectionID)
	 * @returns undefined or, if bSendEventSynchronous has been set true when the event was sent
	 */
	public event_asnFancyEvent(argument: ENetUC_Event_Manager.AsnFancyEventArgument, invokeContext?: ISendInvokeContextParams): undefined | boolean {
		return this.handleEvent(argument, OperationIDs.OPID_asnFancyEvent, Converter.AsnFancyEventArgument_Converter, invokeContext);
	}

	// [PrintTSROSEOnInvokeswitchCase]
	/**
	 * This is the central onInvoke method that is called whenever a method of this module is called.
	 * Based on the operationID we step into the decoding of the method argument and call the method in the handler.
	 * The result is then again encoded and send to the other side.
	 *
	 * @param invoke - The (ROSE) decoded invoke which also contains the function argument (not yet decoded). The
	 * operationID is the one that defines which function we call. In the switch case we decode the methods argument
	 * and call the metho in the handler.
	 * @param invokeContext - The invoke related contextual data (see IReceiveInvokeContext)
	 * @param handler - This object is handling the invoke after having successfully decoded the argument.
	 * it contains the methods as defined in the asn.1 files.
	 * @returns ROSEReject if the request was not handled, ROSEResult for the invoke result, ROSEError for an error or undefined if an event was called
	 */
	public async onInvoke(invoke: ROSEInvoke, invokeContext: IReceiveInvokeContext, handler: IENetUC_Event_ManagerROSE_Handler): Promise<ROSEReject | ROSEResult | ROSEError | undefined> {
		switch (invoke.operationID) {
			case OperationIDs.OPID_asnCreateFancyEvents:
				return await this.handleOnInvoke(invoke, OperationIDs.OPID_asnCreateFancyEvents, ENetUC_Event_Manager.AsnCreateFancyEventsArgument, Converter.AsnCreateFancyEventsArgument_Converter, Converter.AsnCreateFancyEventsResult_Converter, handler, handler.onInvoke_asnCreateFancyEvents, invokeContext);
			case OperationIDs.OPID_asnFancyEvent:
				return this.onEvent(invoke, invokeContext, handler);
			default:
				// If you land here stub of client and server are incompatible...
				debugger;
				return createInvokeReject(invoke, AsnInvokeProblemEnum.unrecognisedOperation, `${invoke.operationID} ("${invoke.operationName}") is not a function of ENetUC_Event_ManagerROSE`);
		}
	}

	// [PrintTSROSEOnEventSwitchCase]
	/**
	 * This is the onEvent method that is called whenever an event is called in this module.
	 * It is called from the onInvoke in case of an event is being called.
	 * Depending on the handleEvents flag the event is either handled or cached.
	 *
	 * @param invoke - The (ROSE) decoded invoke which also contains the function argument (not yet decoded). The
	 * operationID is the one that defines which function we call. In the switch case we decode the methods argument
	 * and call the method in the handler.
	 * @param invokeContext - The invoke related contextual data (see IReceiveInvokeContext)
	 * @param handler - This object is handling the invoke after having successfully decoded the argument.
	 * it contains the methods as defined in the asn.1 files.
	 * @returns ROSEReject if the request was not handled or undefined
	 */
	private async onEvent(invoke: ROSEInvoke, invokeContext: IReceiveInvokeContext, handler: IENetUC_Event_ManagerROSE_Handler): Promise<ROSEReject | undefined> {
		// If the class says do not handle events and the override flag in the invokeContext has not been set, add the event to the que, otherwise we dispatch it
		if (!this.handleEvents && !invokeContext?.handleEvent) {
			this.transport.log(ELogSeverity.debug, "Adding event to queue", "onEvent", this, { operationName: invoke.operationName, operationID: invoke.operationID });
			this.cachedEvents.push({ invoke, invokeContext, handler });
			return;
		}

		switch (invoke.operationID) {
			case OperationIDs.OPID_asnFancyEvent:
				return await this.handleOnEvent(invoke, OperationIDs.OPID_asnFancyEvent, ENetUC_Event_Manager.AsnFancyEventArgument, Converter.AsnFancyEventArgument_Converter, handler, handler.onEvent_asnFancyEvent, invokeContext);
			default:
				// If you land here stub of client and server are incompatible...
				debugger;
				return createInvokeReject(invoke, AsnInvokeProblemEnum.unrecognisedOperation, `${invoke.operationID} ("${invoke.operationName}") is not a function of ENetUC_Event_ManagerROSE`);
		}
	}
}
