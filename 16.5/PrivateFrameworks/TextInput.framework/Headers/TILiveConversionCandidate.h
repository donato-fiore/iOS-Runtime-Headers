// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TILIVECONVERSIONCANDIDATE_H
#define TILIVECONVERSIONCANDIDATE_H

@class NSString;


#import "TIMecabraCandidate.h"

@interface TILiveConversionCandidate : TIMecabraCandidate {
    NSString *_candidate;
}


@property (nonatomic, getter=isInlineCandidate) BOOL inlineCandidate; // ivar: _inlineCandidate
@property (nonatomic, getter=isPartialCandidate) BOOL partialCandidate; // ivar: _partialCandidate


+(BOOL)supportsSecureCoding;
+(int)type;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)candidate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCandidateResultSetCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSurface:(id)arg0 input:(id)arg1 candidate:(id)arg2 mecabraCandidatePointerValue:(id)arg3 ;
-(id)label;
-(void)encodeWithCandidateResultSetCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif