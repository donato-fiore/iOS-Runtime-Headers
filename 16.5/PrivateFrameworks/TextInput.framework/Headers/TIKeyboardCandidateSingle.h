// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIKEYBOARDCANDIDATESINGLE_H
#define TIKEYBOARDCANDIDATESINGLE_H

@class NSString;


#import "TIKeyboardCandidate.h"

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate

@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *applicationBundleId; // ivar: _applicationBundleId
@property (copy, nonatomic) NSString *applicationKey; // ivar: _applicationKey
@property (copy, nonatomic) NSString *candidate; // ivar: _candidate
@property (nonatomic) NSInteger cursorMovement; // ivar: _cursorMovement
@property (nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate; // ivar: _extensionCandidate
@property (copy, nonatomic) NSString *input; // ivar: _input
@property (copy, nonatomic) NSString *lexiconLocale; // ivar: _lexiconLocale
@property (copy, nonatomic) NSString *rawInput; // ivar: _rawInput


+(BOOL)supportsSecureCoding;
+(id)candidateWithCandidate:(id)arg0 forInput:(id)arg1 ;
+(id)candidateWithCandidate:(id)arg0 forInput:(id)arg1 cursorMovement:(NSInteger)arg2 ;
+(id)candidateWithCandidate:(id)arg0 forInput:(id)arg1 customInfoType:(NSUInteger)arg2 ;
+(id)candidateWithCandidate:(id)arg0 forInput:(id)arg1 extensionCandidate:(BOOL)arg2 ;
+(id)candidateWithUnchangedInput:(id)arg0 ;
+(id)secureCandidateForInput:(id)arg0 slotID:(unsigned int)arg1 ;
+(id)secureCandidateForInput:(id)arg0 slotID:(unsigned int)arg1 customInfoType:(NSUInteger)arg2 ;
+(id)secureCandidateForInput:(id)arg0 slotID:(unsigned int)arg1 customInfoType:(NSUInteger)arg2 applicationKey:(id)arg3 applicationBundleId:(id)arg4 altDSID:(id)arg5 ;
+(int)type;
-(BOOL)isAutocorrectionIgnoringCaseAndDiacriticsAndSupplementalItemPrefix;
-(BOOL)isAutocorrectionIgnoringCaseAndSupplementalItemPrefix;
-(BOOL)isHideMyEmailType;
-(id)candidateByReplacingWithCandidate:(id)arg0 ;
-(id)candidateByReplacingWithCandidate:(id)arg0 input:(id)arg1 ;
-(id)candidateByReplacingWithCandidate:(id)arg0 input:(id)arg1 rawInput:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCandidate:(id)arg0 ;
-(id)initWithCandidate:(id)arg0 forInput:(id)arg1 ;
-(id)initWithCandidate:(id)arg0 forInput:(id)arg1 rawInput:(id)arg2 ;
-(id)initWithCandidate:(id)arg0 forInput:(id)arg1 rawInput:(id)arg2 extensionCandidate:(BOOL)arg3 ;
-(id)initWithCandidateResultSetCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseCandidate:(id)arg0 ;
-(id)initWithUnchangedInput:(id)arg0 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif