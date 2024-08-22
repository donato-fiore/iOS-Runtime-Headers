// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIBMLTACTIVEEVALUATIONTUPLE_H
#define TRIBMLTACTIVEEVALUATIONTUPLE_H

@class TRIClientBackgroundMLTask;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TRIFactorsState.h"

@interface TRIBMLTActiveEvaluationTuple : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) TRIClientBackgroundMLTask *bmlt; // ivar: _bmlt
@property (readonly, nonatomic) TRIFactorsState *factorsState; // ivar: _factorsState


+(BOOL)supportsSecureCoding;
+(id)tupleWithBmlt:(id)arg0 factorsState:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTuple:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementBmlt:(id)arg0 ;
-(id)copyWithReplacementFactorsState:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBmlt:(id)arg0 factorsState:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif