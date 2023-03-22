//   NOTE: this is a machine generated file--editing not recommended
//
// SNACCROSE.h - class definitions for ASN.1 module SNACC-ROSE
//
//   This file was generated by esnacc
//   esnacc by Jan Fellner - estos GmbH

#ifndef _SNACCROSE_h_
#define _SNACCROSE_h_


#include <cpp-lib/include/asn-incl.h>
#include <cpp-lib/include/asn-listset.h>

#ifndef NO_NAMESPACE
namespace SNACC {
#endif
//------------------------------------------------------------------------------
// class declarations:

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
//------------------------------------------------------------------------------
// class definitions:

/* INTEGER { unrecognisedAPDU (0), mistypedAPDU (1), badlyStructuredAPDU (2) }  */
class  GeneralProblem: public AsnInt
{
public:
			GeneralProblem(): AsnInt() {}
			GeneralProblem (int i): AsnInt (i) {}

	enum GeneralProblemenum
	{
		unrecognisedAPDU = 0,
		mistypedAPDU = 1,
		badlyStructuredAPDU = 2
	};
};


/* INTEGER { duplicateInvocation (0), unrecognisedOperation (1), mistypedArgument (2), resourceLimitation (3), initiatorReleasing (4), unrecognisedLinkedID (5), linkedResponseUnexpected (6), unexpectedChildOperation (7), invalidSessionID (8), authenticationIncomplete (9), authenticationFailed (10) }  */
class  InvokeProblem: public AsnInt
{
public:
			InvokeProblem(): AsnInt() {}
			InvokeProblem (int i): AsnInt (i) {}

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


/* INTEGER { unrecognisedInvocation (0), resultResponseUnexpected (1), mistypedResult (2) }  */
class  ReturnResultProblem: public AsnInt
{
public:
			ReturnResultProblem(): AsnInt() {}
			ReturnResultProblem (int i): AsnInt (i) {}

	enum ReturnResultProblemenum
	{
		unrecognisedInvocation = 0,
		resultResponseUnexpected = 1,
		mistypedResult = 2
	};
};


/* INTEGER { unrecognisedInvocation (0), errorResponseUnexpected (1), unrecognisedError (2), unexpectedError (3), mistypedParameter (4) }  */
class  ReturnErrorProblem: public AsnInt
{
public:
			ReturnErrorProblem(): AsnInt() {}
			ReturnErrorProblem (int i): AsnInt (i) {}

	enum ReturnErrorProblemenum
	{
		unrecognisedInvocation = 0,
		errorResponseUnexpected = 1,
		unrecognisedError = 2,
		unexpectedError = 3,
		mistypedParameter = 4
	};
};


class  ROSERejectChoice: public AsnType
{
public:
  enum ChoiceIdEnum
  {
     invokedIDCid = 0,
     invokednullCid = 1
  };

  enum ChoiceIdEnum	choiceId;
  union
  {
     AsnInt       *invokedID;
     AsnNull       *invokednull;
  };


   ROSERejectChoice() {Init();}
   ROSERejectChoice(const ROSERejectChoice& that);
public:
   const char* typeName() const	{ return "ROSERejectChoice"; }
   void Init(void);

   virtual int checkConstraints(ConstraintFailList* pConstraintFails)const;

   virtual ~ROSERejectChoice() {Clear();}

   void Clear();

  AsnType		*Clone() const;

  ROSERejectChoice		&operator = (const ROSERejectChoice &that);
  AsnLen		BEncContent (AsnBuf &_b) const;
  void			BDecContent (const AsnBuf &_b, AsnTag tag, AsnLen elmtLen, AsnLen &bytesDecoded /*, s env*/);
  AsnLen		BEnc (AsnBuf &_b) const;
  void			JEnc (EJson::Value &b) const;
  void			BDec (const AsnBuf &_b, AsnLen &bytesDecoded);
  bool			JDec (const EJson::Value &b);

  void Print(std::ostream& os, unsigned short indent = 0) const;
  void			PrintXML (std::ostream &os, const char *lpszTitle=NULL) const;
};


class  ROSEResultSeq: public AsnType
{
public:
  AsnInt       resultValue;
  AsnAny       result;

   ROSEResultSeq() {Init();}
   void Init(void);
   virtual ~ROSEResultSeq() {Clear();}
   void Clear();

  int checkConstraints(ConstraintFailList* pConstraintFails) const;

   ROSEResultSeq(const ROSEResultSeq& that);
public:
   const char* typeName() const	{ return "ROSEResultSeq"; }
  AsnType		*Clone() const;

  ROSEResultSeq		&operator = (const ROSEResultSeq &that);
  AsnLen		BEncContent (AsnBuf &_b) const;
  void			BDecContent (const AsnBuf &_b, AsnTag tag, AsnLen elmtLen, AsnLen &bytesDecoded);

  AsnLen		BEnc (AsnBuf &_b) const;
  void			JEnc (EJson::Value &b) const;
  void			BDec (const AsnBuf &_b, AsnLen &bytesDecoded);
  bool			JDec (const EJson::Value &b);

  void Print(std::ostream& os, unsigned short indent = 0) const;
  void		PrintXML (std::ostream &os, const char *lpszTitle=NULL) const;
};


class  ROSEAuth: public AsnType
{
public:
  UTF8String       method;
  AsnOcts       authdata;

   ROSEAuth() {Init();}
   void Init(void);
   virtual ~ROSEAuth() {Clear();}
   void Clear();

  int checkConstraints(ConstraintFailList* pConstraintFails) const;

   ROSEAuth(const ROSEAuth& that);
public:
   const char* typeName() const	{ return "ROSEAuth"; }
  AsnType		*Clone() const;

  ROSEAuth		&operator = (const ROSEAuth &that);
  AsnLen		BEncContent (AsnBuf &_b) const;
  void			BDecContent (const AsnBuf &_b, AsnTag tag, AsnLen elmtLen, AsnLen &bytesDecoded);

  AsnLen		BEnc (AsnBuf &_b) const;
  void			JEnc (EJson::Value &b) const;
  void			BDec (const AsnBuf &_b, AsnLen &bytesDecoded);
  bool			JDec (const EJson::Value &b);

  void Print(std::ostream& os, unsigned short indent = 0) const;
  void		PrintXML (std::ostream &os, const char *lpszTitle=NULL) const;
};


class  ROSEError: public AsnType
{
public:
  UTF8String       *sessionID;
  AsnInt       invokedID;
  AsnInt       error_value;
  AsnAny       *error;

   ROSEError() {Init();}
   void Init(void);
   virtual ~ROSEError() {Clear();}
   void Clear();

  int checkConstraints(ConstraintFailList* pConstraintFails) const;

   ROSEError(const ROSEError& that);
public:
   const char* typeName() const	{ return "ROSEError"; }
  AsnType		*Clone() const;

  ROSEError		&operator = (const ROSEError &that);
  AsnLen		BEncContent (AsnBuf &_b) const;
  void			BDecContent (const AsnBuf &_b, AsnTag tag, AsnLen elmtLen, AsnLen &bytesDecoded);

  AsnLen		BEnc (AsnBuf &_b) const;
  void			JEnc (EJson::Value &b) const;
  void			BDec (const AsnBuf &_b, AsnLen &bytesDecoded);
  bool			JDec (const EJson::Value &b);

  void Print(std::ostream& os, unsigned short indent = 0) const;
  void		PrintXML (std::ostream &os, const char *lpszTitle=NULL) const;
};


class ROSEAuthList : public AsnSeqOf<ROSEAuth>
{
public:
   const char* typeName() const	{ return "ROSEAuthList"; }
   AsnType* Clone() const			{ return new ROSEAuthList(*this); }
};

class  ROSEAuthRequest: public AsnType
{
public:
  ROSEAuth       auth;
  UTF8String       *context;

   ROSEAuthRequest() {Init();}
   void Init(void);
   virtual ~ROSEAuthRequest() {Clear();}
   void Clear();

  int checkConstraints(ConstraintFailList* pConstraintFails) const;

   ROSEAuthRequest(const ROSEAuthRequest& that);
public:
   const char* typeName() const	{ return "ROSEAuthRequest"; }
  AsnType		*Clone() const;

  ROSEAuthRequest		&operator = (const ROSEAuthRequest &that);
  AsnLen		BEncContent (AsnBuf &_b) const;
  void			BDecContent (const AsnBuf &_b, AsnTag tag, AsnLen elmtLen, AsnLen &bytesDecoded);

  AsnLen		BEnc (AsnBuf &_b) const;
  void			JEnc (EJson::Value &b) const;
  void			BDec (const AsnBuf &_b, AsnLen &bytesDecoded);
  bool			JDec (const EJson::Value &b);

  void Print(std::ostream& os, unsigned short indent = 0) const;
  void		PrintXML (std::ostream &os, const char *lpszTitle=NULL) const;
};


class  ROSEAuthResult: public AsnType
{
public:
  ROSEAuthList       authList;
  UTF8String       *context;

   ROSEAuthResult() {Init();}
   void Init(void);
   virtual ~ROSEAuthResult() {Clear();}
   void Clear();

  int checkConstraints(ConstraintFailList* pConstraintFails) const;

   ROSEAuthResult(const ROSEAuthResult& that);
public:
   const char* typeName() const	{ return "ROSEAuthResult"; }
  AsnType		*Clone() const;

  ROSEAuthResult		&operator = (const ROSEAuthResult &that);
  AsnLen		BEncContent (AsnBuf &_b) const;
  void			BDecContent (const AsnBuf &_b, AsnTag tag, AsnLen elmtLen, AsnLen &bytesDecoded);

  AsnLen		BEnc (AsnBuf &_b) const;
  void			JEnc (EJson::Value &b) const;
  void			BDec (const AsnBuf &_b, AsnLen &bytesDecoded);
  bool			JDec (const EJson::Value &b);

  void Print(std::ostream& os, unsigned short indent = 0) const;
  void		PrintXML (std::ostream &os, const char *lpszTitle=NULL) const;
};


class  ROSEInvoke: public AsnType
{
public:
  UTF8String       *sessionID;
  AsnInt       invokeID;
  AsnInt       *linked_ID;
  UTF8String       *operationName;
  ROSEAuthRequest       *authentication;
  AsnInt       operationID;
  AsnAny       *argument;

   ROSEInvoke() {Init();}
   void Init(void);
   virtual ~ROSEInvoke() {Clear();}
   void Clear();

  int checkConstraints(ConstraintFailList* pConstraintFails) const;

   ROSEInvoke(const ROSEInvoke& that);
public:
   const char* typeName() const	{ return "ROSEInvoke"; }
  AsnType		*Clone() const;

  ROSEInvoke		&operator = (const ROSEInvoke &that);
  AsnLen		BEncContent (AsnBuf &_b) const;
  void			BDecContent (const AsnBuf &_b, AsnTag tag, AsnLen elmtLen, AsnLen &bytesDecoded);

  AsnLen		BEnc (AsnBuf &_b) const;
  void			JEnc (EJson::Value &b) const;
  void			BDec (const AsnBuf &_b, AsnLen &bytesDecoded);
  bool			JDec (const EJson::Value &b);

  void Print(std::ostream& os, unsigned short indent = 0) const;
  void		PrintXML (std::ostream &os, const char *lpszTitle=NULL) const;
};


class  ROSEResult: public AsnType
{
public:
  UTF8String       *sessionID;
  AsnInt       invokeID;
  ROSEResultSeq       *result;

   ROSEResult() {Init();}
   void Init(void);
   virtual ~ROSEResult() {Clear();}
   void Clear();

  int checkConstraints(ConstraintFailList* pConstraintFails) const;

   ROSEResult(const ROSEResult& that);
public:
   const char* typeName() const	{ return "ROSEResult"; }
  AsnType		*Clone() const;

  ROSEResult		&operator = (const ROSEResult &that);
  AsnLen		BEncContent (AsnBuf &_b) const;
  void			BDecContent (const AsnBuf &_b, AsnTag tag, AsnLen elmtLen, AsnLen &bytesDecoded);

  AsnLen		BEnc (AsnBuf &_b) const;
  void			JEnc (EJson::Value &b) const;
  void			BDec (const AsnBuf &_b, AsnLen &bytesDecoded);
  bool			JDec (const EJson::Value &b);

  void Print(std::ostream& os, unsigned short indent = 0) const;
  void		PrintXML (std::ostream &os, const char *lpszTitle=NULL) const;
};


class  RejectProblem: public AsnType
{
public:
  enum ChoiceIdEnum
  {
     generalProblemCid = 0,
     invokeProblemCid = 1,
     returnResultProblemCid = 2,
     returnErrorProblemCid = 3
  };

  enum ChoiceIdEnum	choiceId;
  union
  {
     GeneralProblem       *generalProblem;
     InvokeProblem       *invokeProblem;
     ReturnResultProblem       *returnResultProblem;
     ReturnErrorProblem       *returnErrorProblem;
  };


   RejectProblem() {Init();}
   RejectProblem(const RejectProblem& that);
public:
   const char* typeName() const	{ return "RejectProblem"; }
   void Init(void);

   virtual int checkConstraints(ConstraintFailList* pConstraintFails)const;

   virtual ~RejectProblem() {Clear();}

   void Clear();

  AsnType		*Clone() const;

  RejectProblem		&operator = (const RejectProblem &that);
  AsnLen		BEncContent (AsnBuf &_b) const;
  void			BDecContent (const AsnBuf &_b, AsnTag tag, AsnLen elmtLen, AsnLen &bytesDecoded /*, s env*/);
  AsnLen		BEnc (AsnBuf &_b) const;
  void			JEnc (EJson::Value &b) const;
  void			BDec (const AsnBuf &_b, AsnLen &bytesDecoded);
  bool			JDec (const EJson::Value &b);

  void Print(std::ostream& os, unsigned short indent = 0) const;
  void			PrintXML (std::ostream &os, const char *lpszTitle=NULL) const;
};


class  ROSEReject: public AsnType
{
public:
  UTF8String       *sessionID;
  ROSERejectChoice       invokedID;
  RejectProblem       *reject;
  UTF8String       *details;
  ROSEAuthResult       *authentication;

   ROSEReject() {Init();}
   void Init(void);
   virtual ~ROSEReject() {Clear();}
   void Clear();

  int checkConstraints(ConstraintFailList* pConstraintFails) const;

   ROSEReject(const ROSEReject& that);
public:
   const char* typeName() const	{ return "ROSEReject"; }
  AsnType		*Clone() const;

  ROSEReject		&operator = (const ROSEReject &that);
  AsnLen		BEncContent (AsnBuf &_b) const;
  void			BDecContent (const AsnBuf &_b, AsnTag tag, AsnLen elmtLen, AsnLen &bytesDecoded);

  AsnLen		BEnc (AsnBuf &_b) const;
  void			JEnc (EJson::Value &b) const;
  void			BDec (const AsnBuf &_b, AsnLen &bytesDecoded);
  bool			JDec (const EJson::Value &b);

  void Print(std::ostream& os, unsigned short indent = 0) const;
  void		PrintXML (std::ostream &os, const char *lpszTitle=NULL) const;
};


class  ROSEMessage: public AsnType
{
public:
  enum ChoiceIdEnum
  {
     invokeCid = 0,
     resultCid = 1,
     errorCid = 2,
     rejectCid = 3
  };

  enum ChoiceIdEnum	choiceId;
  union
  {
     ROSEInvoke       *invoke;
     ROSEResult       *result;
     ROSEError       *error;
     ROSEReject       *reject;
  };


   ROSEMessage() {Init();}
   ROSEMessage(const ROSEMessage& that);
public:
   const char* typeName() const	{ return "ROSEMessage"; }
   void Init(void);

   virtual int checkConstraints(ConstraintFailList* pConstraintFails)const;

   virtual ~ROSEMessage() {Clear();}

   void Clear();

  AsnType		*Clone() const;

  ROSEMessage		&operator = (const ROSEMessage &that);
  AsnLen		BEncContent (AsnBuf &_b) const;
  void			BDecContent (const AsnBuf &_b, AsnTag tag, AsnLen elmtLen, AsnLen &bytesDecoded /*, s env*/);
  AsnLen		BEnc (AsnBuf &_b) const;
  void			JEnc (EJson::Value &b) const;
  void			BDec (const AsnBuf &_b, AsnLen &bytesDecoded);
  bool			JDec (const EJson::Value &b);

  void Print(std::ostream& os, unsigned short indent = 0) const;
  void			PrintXML (std::ostream &os, const char *lpszTitle=NULL) const;
};


#ifndef NO_NAMESPACE
} // namespace close
#endif

#endif /* conditional include of SNACCROSE.h */
