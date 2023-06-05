// [PrintCxxCode]
//
// SNACCROSE.h - class definitions for ASN.1 module SNACC-ROSE
//
// This file was generated by estos esnacc (V5.0.6, 02.06.2023)
// based on Coral WinSnacc written by Deepak Gupta
// NOTE: This is a machine generated file - editing not recommended

#ifndef _SNACCROSE_h_
#define _SNACCROSE_h_

#include "asn-incl.h"
#include "asn-listset.h"

#ifndef NO_NAMESPACE
namespace SNACC
{
#endif

	//------------------------------------------------------------------------------
	// forward declarations:
	class GeneralProblem;
	class InvokeProblem;
	class ReturnResultProblem;
	class ReturnErrorProblem;
	class ROSERejectChoice;
	class ROSEResultSeq;
	class ROSEAuth;
	class ROSEError;
	class ROSEAuthList;
	class ROSEAuthRequest;
	class ROSEAuthResult;
	class ROSEInvoke;
	class ROSEResult;
	class RejectProblem;
	class ROSEReject;
	class ROSEMessage;

	//------------------------------------------------------------------------------
	// module class definitions:
	// [PrintCxxSimpleDef]
	class GeneralProblem : public AsnInt
	{
	public:
		GeneralProblem();
		GeneralProblem(const int i);

		enum GeneralProblemenum
		{
			unrecognisedAPDU = 0,
			mistypedAPDU = 1,
			badlyStructuredAPDU = 2
		};
	};

	// [PrintCxxSimpleDef]
	class InvokeProblem : public AsnInt
	{
	public:
		InvokeProblem();
		InvokeProblem(const int i);

		enum InvokeProblemenum
		{
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
		};
	};

	// [PrintCxxSimpleDef]
	class ReturnResultProblem : public AsnInt
	{
	public:
		ReturnResultProblem();
		ReturnResultProblem(const int i);

		enum ReturnResultProblemenum
		{
			unrecognisedInvocation = 0,
			resultResponseUnexpected = 1,
			mistypedResult = 2
		};
	};

	// [PrintCxxSimpleDef]
	class ReturnErrorProblem : public AsnInt
	{
	public:
		ReturnErrorProblem();
		ReturnErrorProblem(const int i);

		enum ReturnErrorProblemenum
		{
			unrecognisedInvocation = 0,
			errorResponseUnexpected = 1,
			unrecognisedError = 2,
			unexpectedError = 3,
			mistypedParameter = 4
		};
	};

	// [PrintCxxChoiceDefCode]
	class ROSERejectChoice : public AsnType
	{
	public:
		ROSERejectChoice();
		ROSERejectChoice(const ROSERejectChoice& that);
		virtual ~ROSERejectChoice();

		void Init();
		void Clear();
		ROSERejectChoice* Clone() const;
		ROSERejectChoice& operator=(const ROSERejectChoice& that);
		const char* typeName() const;
		int checkConstraints(ConstraintFailList* pConstraintFails) const;

		// Encoders & Decoders
		AsnLen BEncContent(AsnBuf& _b) const;
		void BDecContent(const AsnBuf& _b, AsnTag tag, AsnLen elmtLen, AsnLen& bytesDecoded);
		AsnLen BEnc(AsnBuf& _b) const;
		void BDec(const AsnBuf& _b, AsnLen& bytesDecoded);
		void JEnc(EJson::Value& b) const;
		bool JDec(const EJson::Value& b);
		void Print(std::ostream& os, unsigned short indent = 0) const;
		void PrintXML(std::ostream& os, const char* lpszTitle = NULL) const;

		// [PrintMemberAttributes]
		union
		{
			AsnInt* invokedID;
			AsnNull* invokednull;
		};
		enum ChoiceIdEnum
		{
			invokedIDCid = 0,
			invokednullCid = 1
		};
		ChoiceIdEnum choiceId;
	};

	// [PrintCxxSeqDefCode]
	class ROSEResultSeq : public AsnType
	{
	public:
		ROSEResultSeq();
		ROSEResultSeq(const ROSEResultSeq& that);
		virtual ~ROSEResultSeq();

		void Init();
		void Clear();
		ROSEResultSeq* Clone() const;
		ROSEResultSeq& operator=(const ROSEResultSeq& that);
		const char* typeName() const;
		int checkConstraints(ConstraintFailList* pConstraintFails) const;

		// Encoders & Decoders
		AsnLen BEncContent(AsnBuf& _b) const;
		void BDecContent(const AsnBuf& _b, AsnTag tag, AsnLen elmtLen, AsnLen& bytesDecoded);
		AsnLen BEnc(AsnBuf& _b) const;
		void BDec(const AsnBuf& _b, AsnLen& bytesDecoded);
		void JEnc(EJson::Value& b) const;
		bool JDec(const EJson::Value& b);
		void Print(std::ostream& os, unsigned short indent = 0) const;
		void PrintXML(std::ostream& os, const char* lpszTitle = NULL) const;

		// [PrintMemberAttributes]
		AsnInt resultValue;
		AsnAny result;
	};

	// [PrintCxxSeqDefCode]
	class ROSEAuth : public AsnType
	{
	public:
		ROSEAuth();
		ROSEAuth(const ROSEAuth& that);
		virtual ~ROSEAuth();

		void Init();
		void Clear();
		ROSEAuth* Clone() const;
		ROSEAuth& operator=(const ROSEAuth& that);
		const char* typeName() const;
		int checkConstraints(ConstraintFailList* pConstraintFails) const;

		// Encoders & Decoders
		AsnLen BEncContent(AsnBuf& _b) const;
		void BDecContent(const AsnBuf& _b, AsnTag tag, AsnLen elmtLen, AsnLen& bytesDecoded);
		AsnLen BEnc(AsnBuf& _b) const;
		void BDec(const AsnBuf& _b, AsnLen& bytesDecoded);
		void JEnc(EJson::Value& b) const;
		bool JDec(const EJson::Value& b);
		void Print(std::ostream& os, unsigned short indent = 0) const;
		void PrintXML(std::ostream& os, const char* lpszTitle = NULL) const;

		// [PrintMemberAttributes]
		UTF8String method;
		AsnOcts authdata;
	};

	// [PrintCxxSeqDefCode]
	class ROSEError : public AsnType
	{
	public:
		ROSEError();
		ROSEError(const ROSEError& that);
		virtual ~ROSEError();

		void Init();
		void Clear();
		ROSEError* Clone() const;
		ROSEError& operator=(const ROSEError& that);
		const char* typeName() const;
		int checkConstraints(ConstraintFailList* pConstraintFails) const;

		// Encoders & Decoders
		AsnLen BEncContent(AsnBuf& _b) const;
		void BDecContent(const AsnBuf& _b, AsnTag tag, AsnLen elmtLen, AsnLen& bytesDecoded);
		AsnLen BEnc(AsnBuf& _b) const;
		void BDec(const AsnBuf& _b, AsnLen& bytesDecoded);
		void JEnc(EJson::Value& b) const;
		bool JDec(const EJson::Value& b);
		void Print(std::ostream& os, unsigned short indent = 0) const;
		void PrintXML(std::ostream& os, const char* lpszTitle = NULL) const;

		// [PrintMemberAttributes]
		UTF8String* sessionID;
		AsnInt invokedID;
		AsnInt error_value;
		AsnAny* error;
	};

	// [PrintCxxListClass]
	class ROSEAuthList : public AsnSeqOf<ROSEAuth>
	{
		ROSEAuthList* Clone() const;
		const char* typeName() const;
	};

	// [PrintCxxSeqDefCode]
	class ROSEAuthRequest : public AsnType
	{
	public:
		ROSEAuthRequest();
		ROSEAuthRequest(const ROSEAuthRequest& that);
		virtual ~ROSEAuthRequest();

		void Init();
		void Clear();
		ROSEAuthRequest* Clone() const;
		ROSEAuthRequest& operator=(const ROSEAuthRequest& that);
		const char* typeName() const;
		int checkConstraints(ConstraintFailList* pConstraintFails) const;

		// Encoders & Decoders
		AsnLen BEncContent(AsnBuf& _b) const;
		void BDecContent(const AsnBuf& _b, AsnTag tag, AsnLen elmtLen, AsnLen& bytesDecoded);
		AsnLen BEnc(AsnBuf& _b) const;
		void BDec(const AsnBuf& _b, AsnLen& bytesDecoded);
		void JEnc(EJson::Value& b) const;
		bool JDec(const EJson::Value& b);
		void Print(std::ostream& os, unsigned short indent = 0) const;
		void PrintXML(std::ostream& os, const char* lpszTitle = NULL) const;

		// [PrintMemberAttributes]
		ROSEAuth auth;
		UTF8String* context;
	};

	// [PrintCxxSeqDefCode]
	class ROSEAuthResult : public AsnType
	{
	public:
		ROSEAuthResult();
		ROSEAuthResult(const ROSEAuthResult& that);
		virtual ~ROSEAuthResult();

		void Init();
		void Clear();
		ROSEAuthResult* Clone() const;
		ROSEAuthResult& operator=(const ROSEAuthResult& that);
		const char* typeName() const;
		int checkConstraints(ConstraintFailList* pConstraintFails) const;

		// Encoders & Decoders
		AsnLen BEncContent(AsnBuf& _b) const;
		void BDecContent(const AsnBuf& _b, AsnTag tag, AsnLen elmtLen, AsnLen& bytesDecoded);
		AsnLen BEnc(AsnBuf& _b) const;
		void BDec(const AsnBuf& _b, AsnLen& bytesDecoded);
		void JEnc(EJson::Value& b) const;
		bool JDec(const EJson::Value& b);
		void Print(std::ostream& os, unsigned short indent = 0) const;
		void PrintXML(std::ostream& os, const char* lpszTitle = NULL) const;

		// [PrintMemberAttributes]
		ROSEAuthList authList;
		UTF8String* context;
	};

	// [PrintCxxSeqDefCode]
	class ROSEInvoke : public AsnType
	{
	public:
		ROSEInvoke();
		ROSEInvoke(const ROSEInvoke& that);
		virtual ~ROSEInvoke();

		void Init();
		void Clear();
		ROSEInvoke* Clone() const;
		ROSEInvoke& operator=(const ROSEInvoke& that);
		const char* typeName() const;
		int checkConstraints(ConstraintFailList* pConstraintFails) const;

		// Encoders & Decoders
		AsnLen BEncContent(AsnBuf& _b) const;
		void BDecContent(const AsnBuf& _b, AsnTag tag, AsnLen elmtLen, AsnLen& bytesDecoded);
		AsnLen BEnc(AsnBuf& _b) const;
		void BDec(const AsnBuf& _b, AsnLen& bytesDecoded);
		void JEnc(EJson::Value& b) const;
		bool JDec(const EJson::Value& b);
		void Print(std::ostream& os, unsigned short indent = 0) const;
		void PrintXML(std::ostream& os, const char* lpszTitle = NULL) const;

		// [PrintMemberAttributes]
		UTF8String* sessionID;
		AsnInt invokeID;
		AsnInt* linked_ID;
		UTF8String* operationName;
		ROSEAuthRequest* authentication;
		AsnInt operationID;
		AsnAny* argument;
	};

	// [PrintCxxSeqDefCode]
	class ROSEResult : public AsnType
	{
	public:
		ROSEResult();
		ROSEResult(const ROSEResult& that);
		virtual ~ROSEResult();

		void Init();
		void Clear();
		ROSEResult* Clone() const;
		ROSEResult& operator=(const ROSEResult& that);
		const char* typeName() const;
		int checkConstraints(ConstraintFailList* pConstraintFails) const;

		// Encoders & Decoders
		AsnLen BEncContent(AsnBuf& _b) const;
		void BDecContent(const AsnBuf& _b, AsnTag tag, AsnLen elmtLen, AsnLen& bytesDecoded);
		AsnLen BEnc(AsnBuf& _b) const;
		void BDec(const AsnBuf& _b, AsnLen& bytesDecoded);
		void JEnc(EJson::Value& b) const;
		bool JDec(const EJson::Value& b);
		void Print(std::ostream& os, unsigned short indent = 0) const;
		void PrintXML(std::ostream& os, const char* lpszTitle = NULL) const;

		// [PrintMemberAttributes]
		UTF8String* sessionID;
		AsnInt invokeID;
		ROSEResultSeq* result;
	};

	// [PrintCxxChoiceDefCode]
	class RejectProblem : public AsnType
	{
	public:
		RejectProblem();
		RejectProblem(const RejectProblem& that);
		virtual ~RejectProblem();

		void Init();
		void Clear();
		RejectProblem* Clone() const;
		RejectProblem& operator=(const RejectProblem& that);
		const char* typeName() const;
		int checkConstraints(ConstraintFailList* pConstraintFails) const;

		// Encoders & Decoders
		AsnLen BEncContent(AsnBuf& _b) const;
		void BDecContent(const AsnBuf& _b, AsnTag tag, AsnLen elmtLen, AsnLen& bytesDecoded);
		AsnLen BEnc(AsnBuf& _b) const;
		void BDec(const AsnBuf& _b, AsnLen& bytesDecoded);
		void JEnc(EJson::Value& b) const;
		bool JDec(const EJson::Value& b);
		void Print(std::ostream& os, unsigned short indent = 0) const;
		void PrintXML(std::ostream& os, const char* lpszTitle = NULL) const;

		// [PrintMemberAttributes]
		union
		{
			GeneralProblem* generalProblem;
			InvokeProblem* invokeProblem;
			ReturnResultProblem* returnResultProblem;
			ReturnErrorProblem* returnErrorProblem;
		};
		enum ChoiceIdEnum
		{
			generalProblemCid = 0,
			invokeProblemCid = 1,
			returnResultProblemCid = 2,
			returnErrorProblemCid = 3
		};
		ChoiceIdEnum choiceId;
	};

	// [PrintCxxSeqDefCode]
	class ROSEReject : public AsnType
	{
	public:
		ROSEReject();
		ROSEReject(const ROSEReject& that);
		virtual ~ROSEReject();

		void Init();
		void Clear();
		ROSEReject* Clone() const;
		ROSEReject& operator=(const ROSEReject& that);
		const char* typeName() const;
		int checkConstraints(ConstraintFailList* pConstraintFails) const;

		// Encoders & Decoders
		AsnLen BEncContent(AsnBuf& _b) const;
		void BDecContent(const AsnBuf& _b, AsnTag tag, AsnLen elmtLen, AsnLen& bytesDecoded);
		AsnLen BEnc(AsnBuf& _b) const;
		void BDec(const AsnBuf& _b, AsnLen& bytesDecoded);
		void JEnc(EJson::Value& b) const;
		bool JDec(const EJson::Value& b);
		void Print(std::ostream& os, unsigned short indent = 0) const;
		void PrintXML(std::ostream& os, const char* lpszTitle = NULL) const;

		// [PrintMemberAttributes]
		UTF8String* sessionID;
		ROSERejectChoice invokedID;
		RejectProblem* reject;
		UTF8String* details;
		ROSEAuthResult* authentication;
	};

	// [PrintCxxChoiceDefCode]
	class ROSEMessage : public AsnType
	{
	public:
		ROSEMessage();
		ROSEMessage(const ROSEMessage& that);
		virtual ~ROSEMessage();

		void Init();
		void Clear();
		ROSEMessage* Clone() const;
		ROSEMessage& operator=(const ROSEMessage& that);
		const char* typeName() const;
		int checkConstraints(ConstraintFailList* pConstraintFails) const;

		// Encoders & Decoders
		AsnLen BEncContent(AsnBuf& _b) const;
		void BDecContent(const AsnBuf& _b, AsnTag tag, AsnLen elmtLen, AsnLen& bytesDecoded);
		AsnLen BEnc(AsnBuf& _b) const;
		void BDec(const AsnBuf& _b, AsnLen& bytesDecoded);
		void JEnc(EJson::Value& b) const;
		bool JDec(const EJson::Value& b);
		void Print(std::ostream& os, unsigned short indent = 0) const;
		void PrintXML(std::ostream& os, const char* lpszTitle = NULL) const;

		// [PrintMemberAttributes]
		union
		{
			ROSEInvoke* invoke;
			ROSEResult* result;
			ROSEError* error;
			ROSEReject* reject;
		};
		enum ChoiceIdEnum
		{
			invokeCid = 0,
			resultCid = 1,
			errorCid = 2,
			rejectCid = 3
		};
		ChoiceIdEnum choiceId;
	};

#ifndef NO_NAMESPACE
}
#endif

#endif
