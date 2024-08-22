// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIEWFITTINGSIZETARGETINFO_H
#define _UIVIEWFITTINGSIZETARGETINFO_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIViewFittingSizeTargetInfo : NSObject <NSCopying>



@property (nonatomic, getter=isDummy) BOOL dummy; // ivar: _dummy
@property (readonly, nonatomic) float horizontalPriority; // ivar: _horizontalPriority
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize
@property (readonly, nonatomic) float verticalPriority; // ivar: _verticalPriority


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTargetInfo:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTargetSize:(struct CGSize )arg0 horizontalPriority:(float)arg1 verticalPriority:(float)arg2 ;


@end


#endif