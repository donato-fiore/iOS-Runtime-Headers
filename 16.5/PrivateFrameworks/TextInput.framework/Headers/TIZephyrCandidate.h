// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIZEPHYRCANDIDATE_H
#define TIZEPHYRCANDIDATE_H

@class TIProactiveTrigger, NSString, _ICPredictedItem;


#import "TIKeyboardCandidateSingle.h"

@interface TIZephyrCandidate : TIKeyboardCandidateSingle {
    BOOL _isSecureContentCandidate;
    unsigned int _usageTrackingMask;
    unsigned int _sourceMask;
    NSUInteger _wordOriginFeedbackID;
    TIProactiveTrigger *_proactiveTrigger;
    NSString *_responseKitCategory;
}


@property (nonatomic) NSUInteger ageForConnectionsMetrics; // ivar: _ageForConnectionsMetrics
@property (nonatomic, getter=confidence) int confidence; // ivar: _confidence
@property (nonatomic, getter=isContinuousPathConversion) BOOL continuousPathConversion; // ivar: _continuousPathConversion
@property (nonatomic) int dynamicPenaltyCount; // ivar: _dynamicPenaltyCount
@property (nonatomic) int dynamicUsageCount; // ivar: _dynamicUsageCount
@property (nonatomic) CGFloat excessPathRatio; // ivar: _excessPathRatio
@property (copy, nonatomic) NSString *fromBundleId; // ivar: _fromBundleId
@property (nonatomic) CGFloat geometryScore; // ivar: _geometryScore
@property (nonatomic) BOOL isFromPhraseDictionary; // ivar: _isFromPhraseDictionary
@property (nonatomic) BOOL isFromTextChecker; // ivar: _isFromTextChecker
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) _ICPredictedItem *proactivePredictedItem; // ivar: _proactivePredictedItem
@property (nonatomic, getter=shouldAccept) BOOL shouldAccept; // ivar: _shouldAccept
@property (nonatomic, getter=shouldInsertSpaceAfterSelection) BOOL shouldInsertSpaceAfterSelection; // ivar: _shouldInsertSpaceAfterSelection
@property (nonatomic) CGFloat wordScore; // ivar: _wordScore


+(BOOL)supportsSecureCoding;
+(int)type;
-(BOOL)isAutocorrection;
-(BOOL)isSecureContentCandidate;
-(NSUInteger)wordOriginFeedbackID;
-(id)candidateByReplacingWithCandidate:(id)arg0 input:(id)arg1 label:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCandidate:(id)arg0 forInput:(id)arg1 rawInput:(id)arg2 wordOriginFeedbackID:(NSUInteger)arg3 ;
-(id)initWithCandidate:(id)arg0 forInput:(id)arg1 rawInput:(id)arg2 wordOriginFeedbackID:(NSUInteger)arg3 usageTrackingMask:(unsigned int)arg4 sourceMask:(unsigned int)arg5 ;
-(id)initWithCandidate:(id)arg0 forInput:(id)arg1 rawInput:(id)arg2 wordOriginFeedbackID:(NSUInteger)arg3 usageTrackingMask:(unsigned int)arg4 sourceMask:(unsigned int)arg5 secureContentCandidate:(BOOL)arg6 proactiveTrigger:(id)arg7 proactivePredictedItem:(id)arg8 ;
-(id)initWithCandidate:(id)arg0 forInput:(id)arg1 rawInput:(id)arg2 wordOriginFeedbackID:(NSUInteger)arg3 usageTrackingMask:(unsigned int)arg4 sourceMask:(unsigned int)arg5 secureContentCandidate:(BOOL)arg6 proactiveTrigger:(id)arg7 proactivePredictedItem:(id)arg8 responseKitCategory:(id)arg9 ;
-(id)initWithCandidate:(id)arg0 forInput:(id)arg1 wordOriginFeedbackID:(NSUInteger)arg2 ;
-(id)initWithCandidate:(id)arg0 responseKitCategory:(id)arg1 ;
-(id)initWithCandidateResultSetCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)proactiveTrigger;
-(id)responseKitCategory;
-(unsigned int)sourceMask;
-(unsigned int)usageTrackingMask;
-(void)encodeWithCandidateResultSetCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif