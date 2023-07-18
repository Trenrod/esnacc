// [PrintTSCode]
// [PrintTSComments]
/*
 * SNACCROSE.ts
 * "SNACC-ROSE" ASN.1 stubs.
 * This file was generated by estos esnacc (V5.0.14, 18.07.2023)
 * based on Coral WinSnacc written by Deepak Gupta
 * NOTE: This is a machine generated file - editing not recommended
 */

// prettier-ignore
/* eslint-disable */
// [PrintTSImports]
import * as asn1ts from "@estos/asn1ts";
// [PrintTSRootTypes]
export const moduleName = "SNACCROSE";

// [PrintTSTypeDefCode]
// [PrintTSimpleDefCode]
export type GeneralProblem = number;
export enum GeneralProblemenum {
	unrecognisedAPDU = 0,
	mistypedAPDU = 1,
	badlyStructuredAPDU = 2
}

// [PrintTSTypeDefCode]
// [PrintTSimpleDefCode]
export type InvokeProblem = number;
export enum InvokeProblemenum {
	duplicateInvocation = 0,
	unrecognisedOperation = 1,
	mistypedArgument = 2,
	resourceLimitation = 3,
	initiatorReleasing = 4,
	unrecognisedLinkedID = 5,
	linkedResponseUnexpected = 6,
	unexpectedChildOperation = 7,
	invalidSessionID = 8,
	authenticationIncomplete = 9,
	authenticationFailed = 10
}

// [PrintTSTypeDefCode]
// [PrintTSimpleDefCode]
export type ReturnResultProblem = number;
export enum ReturnResultProblemenum {
	unrecognisedInvocation = 0,
	resultResponseUnexpected = 1,
	mistypedResult = 2
}

// [PrintTSTypeDefCode]
// [PrintTSimpleDefCode]
export type ReturnErrorProblem = number;
export enum ReturnErrorProblemenum {
	unrecognisedInvocation = 0,
	errorResponseUnexpected = 1,
	unrecognisedError = 2,
	unexpectedError = 3,
	mistypedParameter = 4
}

// [PrintTSTypeDefCode]
// [PrintTSChoiceDefCode]
export class ROSERejectChoice {
	public constructor(that?: ROSERejectChoice) {
		Object.assign(this, that);
	}

	public static initEmpty(): ROSERejectChoice {
		return new ROSERejectChoice();
	}

	public static type = "ROSERejectChoice";

	public static getASN1Schema(params?: asn1ts.ConstructedParams): asn1ts.Choice {
		return new asn1ts.Choice({
			name: "ROSERejectChoice",
			...params,
			value: [
				new asn1ts.Integer({ name: "invokedID" }),
				new asn1ts.Null({ name: "invokednull" })
			]
		});
	}

	public invokedID?: number;
	public invokednull?: null;
}

// [PrintTSTypeDefCode]
// [PrintTSSeqDefCode]
export class ROSEResultSeq {
	public constructor(that: ROSEResultSeq) {
		Object.assign(this, that);
	}

	public static initEmpty(): ROSEResultSeq {
		return new ROSEResultSeq({
			resultValue: 0,
			result: undefined
		});
	}

	public static type = "ROSEResultSeq";

	public static getASN1Schema(params?: asn1ts.ConstructedParams): asn1ts.Sequence {
		return new asn1ts.Sequence({
			name: "ROSEResultSeq",
			...params,
			value: [
				new asn1ts.Integer({ name: "resultValue" }),
				new asn1ts.Any({ name: "result" })
			]
		});
	}

	public resultValue!: number;
	// eslint-disable-next-line @typescript-eslint/no-explicit-any
	public result!: any;
}

// [PrintTSTypeDefCode]
// [PrintTSSeqDefCode]
export class ROSEAuth {
	public constructor(that: ROSEAuth) {
		Object.assign(this, that);
	}

	public static initEmpty(): ROSEAuth {
		return new ROSEAuth({
			method: "",
			authdata: new Uint8Array(0)
		});
	}

	public static type = "ROSEAuth";

	public static getASN1Schema(params?: asn1ts.ConstructedParams): asn1ts.Sequence {
		return new asn1ts.Sequence({
			name: "ROSEAuth",
			...params,
			value: [
				new asn1ts.Utf8String({ name: "method" }),
				new asn1ts.OctetString({ name: "authdata" })
			]
		});
	}

	public method!: string;
	public authdata!: Uint8Array;
}

// [PrintTSTypeDefCode]
// [PrintTSSeqDefCode]
export class ROSEError {
	public constructor(that: ROSEError) {
		Object.assign(this, that);
	}

	public static initEmpty(): ROSEError {
		return new ROSEError({
			invokedID: 0,
			error_value: 0
		});
	}

	public static type = "ROSEError";

	public static getASN1Schema(params?: asn1ts.ConstructedParams): asn1ts.Sequence {
		return new asn1ts.Sequence({
			name: "ROSEError",
			...params,
			value: [
				new asn1ts.Sequence({ idBlock: { optionalID: 1 }, value: [new asn1ts.Utf8String({ name: "sessionID", optional: true })] }),
				new asn1ts.Integer({ name: "invokedID" }),
				new asn1ts.Integer({ name: "error_value" }),
				new asn1ts.Any({ name: "error", optional: true })
			]
		});
	}

	public sessionID?: string;
	public invokedID!: number;
	public error_value!: number;
	// eslint-disable-next-line @typescript-eslint/no-explicit-any
	public error?: any;
}

// [PrintTSTypeDefCode]
// [PrintTSSetOfDefCode]
// [PrintTSListClass]
export class ROSEAuthList extends Array<ROSEAuth> {
	public static getASN1Schema(params?: asn1ts.SequenceOfParams): asn1ts.SequenceOf {
		return new asn1ts.SequenceOf({
			...params,
			value: ROSEAuth.getASN1Schema()
		});
	}
}

// [PrintTSTypeDefCode]
// [PrintTSSeqDefCode]
export class ROSEAuthRequest {
	public constructor(that: ROSEAuthRequest) {
		Object.assign(this, that);
	}

	public static initEmpty(): ROSEAuthRequest {
		return new ROSEAuthRequest({
			auth: ROSEAuth.initEmpty()
		});
	}

	public static type = "ROSEAuthRequest";

	public static getASN1Schema(params?: asn1ts.ConstructedParams): asn1ts.Sequence {
		return new asn1ts.Sequence({
			name: "ROSEAuthRequest",
			...params,
			value: [
				ROSEAuth.getASN1Schema({ name: "auth" }),
				new asn1ts.Utf8String({ name: "context", optional: true })
			]
		});
	}

	public auth!: ROSEAuth;
	public context?: string;
}

// [PrintTSTypeDefCode]
// [PrintTSSeqDefCode]
export class ROSEAuthResult {
	public constructor(that: ROSEAuthResult) {
		Object.assign(this, that);
	}

	public static initEmpty(): ROSEAuthResult {
		return new ROSEAuthResult({
			authList: new ROSEAuthList()
		});
	}

	public static type = "ROSEAuthResult";

	public static getASN1Schema(params?: asn1ts.ConstructedParams): asn1ts.Sequence {
		return new asn1ts.Sequence({
			name: "ROSEAuthResult",
			...params,
			value: [
				ROSEAuthList.getASN1Schema({ name: "authList" }),
				new asn1ts.Utf8String({ name: "context", optional: true })
			]
		});
	}

	public authList!: ROSEAuthList;
	public context?: string;
}

// [PrintTSTypeDefCode]
// [PrintTSSeqDefCode]
export class ROSEInvoke {
	public constructor(that: ROSEInvoke) {
		Object.assign(this, that);
	}

	public static initEmpty(): ROSEInvoke {
		return new ROSEInvoke({
			invokeID: 0,
			operationID: 0
		});
	}

	public static type = "ROSEInvoke";

	public static getASN1Schema(params?: asn1ts.ConstructedParams): asn1ts.Sequence {
		return new asn1ts.Sequence({
			name: "ROSEInvoke",
			...params,
			value: [
				new asn1ts.Sequence({ idBlock: { optionalID: 1 }, value: [new asn1ts.Utf8String({ name: "sessionID", optional: true })] }),
				new asn1ts.Integer({ name: "invokeID" }),
				new asn1ts.Integer({ name: "linked_ID", idBlock: { optionalID: 0 } }),
				new asn1ts.Sequence({ idBlock: { optionalID: 2 }, value: [new asn1ts.Utf8String({ name: "operationName", optional: true })] }),
				new asn1ts.Sequence({ idBlock: { optionalID: 3 }, value: [ROSEAuthRequest.getASN1Schema({ name: "authentication", optional: true })] }),
				new asn1ts.Integer({ name: "operationID" }),
				new asn1ts.Any({ name: "argument", optional: true })
			]
		});
	}

	public sessionID?: string;
	public invokeID!: number;
	public linked_ID?: number;
	public operationName?: string;
	public authentication?: ROSEAuthRequest;
	public operationID!: number;
	// eslint-disable-next-line @typescript-eslint/no-explicit-any
	public argument?: any;
}

// [PrintTSTypeDefCode]
// [PrintTSSeqDefCode]
export class ROSEResult {
	public constructor(that: ROSEResult) {
		Object.assign(this, that);
	}

	public static initEmpty(): ROSEResult {
		return new ROSEResult({
			invokeID: 0
		});
	}

	public static type = "ROSEResult";

	public static getASN1Schema(params?: asn1ts.ConstructedParams): asn1ts.Sequence {
		return new asn1ts.Sequence({
			name: "ROSEResult",
			...params,
			value: [
				new asn1ts.Sequence({ idBlock: { optionalID: 1 }, value: [new asn1ts.Utf8String({ name: "sessionID", optional: true })] }),
				new asn1ts.Integer({ name: "invokeID" }),
				ROSEResultSeq.getASN1Schema({ name: "result", optional: true })
			]
		});
	}

	public sessionID?: string;
	public invokeID!: number;
	public result?: ROSEResultSeq;
}

// [PrintTSTypeDefCode]
// [PrintTSChoiceDefCode]
export class RejectProblem {
	public constructor(that?: RejectProblem) {
		Object.assign(this, that);
	}

	public static initEmpty(): RejectProblem {
		return new RejectProblem();
	}

	public static type = "RejectProblem";

	public static getASN1Schema(params?: asn1ts.ConstructedParams): asn1ts.Choice {
		return new asn1ts.Choice({
			name: "RejectProblem",
			...params,
			value: [
				new asn1ts.Integer({ name: "generalProblem", idBlock: { optionalID: 0 } }),
				new asn1ts.Integer({ name: "invokeProblem", idBlock: { optionalID: 1 } }),
				new asn1ts.Integer({ name: "returnResultProblem", idBlock: { optionalID: 2 } }),
				new asn1ts.Integer({ name: "returnErrorProblem", idBlock: { optionalID: 3 } })
			]
		});
	}

	public generalProblem?: number;
	public invokeProblem?: number;
	public returnResultProblem?: number;
	public returnErrorProblem?: number;
}

// [PrintTSTypeDefCode]
// [PrintTSSeqDefCode]
export class ROSEReject {
	public constructor(that: ROSEReject) {
		Object.assign(this, that);
	}

	public static initEmpty(): ROSEReject {
		return new ROSEReject({
			invokedID: ROSERejectChoice.initEmpty()
		});
	}

	public static type = "ROSEReject";

	public static getASN1Schema(params?: asn1ts.ConstructedParams): asn1ts.Sequence {
		return new asn1ts.Sequence({
			name: "ROSEReject",
			...params,
			value: [
				new asn1ts.Sequence({ idBlock: { optionalID: 1 }, value: [new asn1ts.Utf8String({ name: "sessionID", optional: true })] }),
				ROSERejectChoice.getASN1Schema({ name: "invokedID" }),
				RejectProblem.getASN1Schema({ name: "reject", optional: true }),
				new asn1ts.Utf8String({ name: "details", optional: true }),
				new asn1ts.Sequence({ idBlock: { optionalID: 4 }, value: [ROSEAuthResult.getASN1Schema({ name: "authentication", optional: true })] })
			]
		});
	}

	public sessionID?: string;
	public invokedID!: ROSERejectChoice;
	public reject?: RejectProblem;
	public details?: string;
	public authentication?: ROSEAuthResult;
}

// [PrintTSTypeDefCode]
// [PrintTSChoiceDefCode]
export class ROSEMessage {
	public constructor(that?: ROSEMessage) {
		Object.assign(this, that);
	}

	public static initEmpty(): ROSEMessage {
		return new ROSEMessage();
	}

	public static type = "ROSEMessage";

	public static getASN1Schema(params?: asn1ts.ConstructedParams): asn1ts.Choice {
		return new asn1ts.Choice({
			name: "ROSEMessage",
			...params,
			value: [
				ROSEInvoke.getASN1Schema({ name: "invoke", idBlock: { optionalID: 1 } }),
				ROSEResult.getASN1Schema({ name: "result", idBlock: { optionalID: 2 } }),
				ROSEError.getASN1Schema({ name: "error", idBlock: { optionalID: 3 } }),
				ROSEReject.getASN1Schema({ name: "reject", idBlock: { optionalID: 4 } })
			]
		});
	}

	public invoke?: ROSEInvoke;
	public result?: ROSEResult;
	public error?: ROSEError;
	public reject?: ROSEReject;
}
