// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIKEYBOARDCANDIDATE_H
#define TIKEYBOARDCANDIDATE_H

@class NSString, TIProactiveTrigger, NSArray;
@protocol NSCopying, NSSecureCoding, TIKeyboardCandidateCoding;

#import <Foundation/Foundation.h>


@interface TIKeyboardCandidate : NSObject <NSCopying, NSSecureCoding, TIKeyboardCandidateCoding>



@property (readonly, nonatomic, getter=isOTAWordListCandidate) BOOL OTAWordListCandidate;
@property (readonly, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *alternativeText; // ivar: _alternativeText
@property (copy, nonatomic) NSString *annotationText; // ivar: _annotationText
@property (readonly, nonatomic) NSString *applicationBundleId;
@property (readonly, nonatomic) NSString *applicationKey;
@property (readonly, nonatomic, getter=isAsIsCandidate) BOOL asIsCandidate; // ivar: _asIsCandidate
@property (readonly, nonatomic, getter=isBilingualCandidate) BOOL bilingualCandidate;
@property (readonly, nonatomic) NSString *candidate;
@property (readonly, nonatomic, getter=isCompletionCandidate) BOOL completionCandidate;
@property (readonly, nonatomic, getter=confidence) int confidence; // ivar: _confidence
@property (readonly, nonatomic, getter=isContinuousPathConversion) BOOL continuousPathConversion;
@property (readonly, nonatomic) NSInteger cursorMovement;
@property (nonatomic) NSUInteger customInfoType; // ivar: _customInfoType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger deleteCount;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmojiCandidate) BOOL emojiCandidate;
@property (readonly, nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate;
@property (readonly, nonatomic, getter=isFacemarkCandidate) BOOL facemarkCandidate;
@property (readonly, nonatomic, getter=isFullwidthCandidate) BOOL fullwidthCandidate;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger indexForMetrics; // ivar: _indexForMetrics
@property (readonly, nonatomic, getter=isInlineCandidate) BOOL inlineCandidate;
@property (readonly, nonatomic, getter=isInlineCompletionCandidate) BOOL inlineCompletionCandidate;
@property (readonly, nonatomic) NSString *input;
@property (readonly, nonatomic) NSString *inputWithoutSupplementalItemPrefix;
@property (readonly, nonatomic) BOOL isAddress;
@property (readonly, nonatomic) BOOL isAutocorrection;
@property (readonly, nonatomic) BOOL isAutocorrectionIgnoringCaseAndDiacriticsAndSupplementalItemPrefix;
@property (readonly, nonatomic) BOOL isAutocorrectionIgnoringCaseAndSupplementalItemPrefix;
@property (readonly, nonatomic) BOOL isForShortcutConversion;
@property (nonatomic) BOOL isMeCardCandidate; // ivar: _isMeCardCandidate
@property (nonatomic) BOOL isSendCurrentLocation; // ivar: _isSendCurrentLocation
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic, getter=isMecabraCandidate) BOOL mecabraCandidate;
@property (readonly, nonatomic, getter=isPartialCandidate) BOOL partialCandidate;
@property (readonly, nonatomic, getter=isPrefixMatched) BOOL prefixMatched; // ivar: _prefixMatched
@property (readonly, nonatomic) TIProactiveTrigger *proactiveTrigger;
@property (readonly, nonatomic, getter=isPunctuationCompletionCandidate) BOOL punctuationCompletionCandidate;
@property (readonly, nonatomic, getter=isPunctuationKeyCandidate) BOOL punctuationKeyCandidate;
@property (readonly, nonatomic) NSString *rawInput;
@property (readonly, nonatomic, getter=isRegionalCandidate) BOOL regionalCandidate;
@property (readonly, nonatomic, getter=isResponseKitCandidate) BOOL responseKitCandidate; // ivar: _responseKitCandidate
@property (readonly, copy, nonatomic) NSString *responseKitCategory; // ivar: _responseKitCategory
@property (readonly, nonatomic, getter=isSecureContentCandidate) BOOL secureContentCandidate;
@property (readonly, nonatomic) BOOL shouldAccept;
@property (readonly, nonatomic) BOOL shouldInsertSpaceAfterSelection;
@property (nonatomic) unsigned int slotID; // ivar: _slotID
@property (readonly, nonatomic) unsigned int sourceMask; // ivar: _sourceMask
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSupplementalItemCandidate) BOOL supplementalItemCandidate;
@property (copy, nonatomic) NSArray *supplementalItemIdentifiers; // ivar: _supplementalItemIdentifiers
@property (nonatomic) unsigned short supplementalItemPrefix; // ivar: _supplementalItemPrefix
@property (readonly, nonatomic, getter=isTransliterationCandidate) BOOL transliterationCandidate;
@property (nonatomic) unsigned int typingEngine; // ivar: _typingEngine
@property (readonly, nonatomic) unsigned int usageTrackingMask;
@property (readonly, nonatomic) NSUInteger wordOriginFeedbackID;
@property (readonly, nonatomic, getter=isWubixingConvertedByPinyin) BOOL wubixingConvertedByPinyin; // ivar: _wubixingConvertedByPinyin


+(BOOL)supportsSecureCoding;
+(int)type;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPunctuation;
-(id)candidateByReplacingWithCandidate:(id)arg0 ;
-(id)candidateByReplacingWithCandidate:(id)arg0 input:(id)arg1 ;
-(id)candidateByReplacingWithCandidate:(id)arg0 input:(id)arg1 rawInput:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCandidateResultSetCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif