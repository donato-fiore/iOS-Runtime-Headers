// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITRANSFORMTOREASONASSOCIATION_H
#define _UITRANSFORMTOREASONASSOCIATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UITransform.h"

@interface _UITransformToReasonAssociation : NSObject

@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (retain, nonatomic) UITransform *transform; // ivar: _transform


+(id)association:(id)arg0 reason:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithTransform:(id)arg0 reason:(id)arg1 ;


@end


#endif