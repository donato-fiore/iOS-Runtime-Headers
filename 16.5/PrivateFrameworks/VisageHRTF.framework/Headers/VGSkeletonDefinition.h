// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGSKELETONDEFINITION_H
#define VGSKELETONDEFINITION_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VGSkeletonDefinition : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger jointCount; // ivar: _jointCount
@property (retain, nonatomic) NSArray *parentChildOrder; // ivar: _parentChildOrder
@property (nonatomic) NSInteger rootJointIndex; // ivar: _rootJointIndex
@property (nonatomic) int skeletonType; // ivar: _skeletonType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif