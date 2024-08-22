// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGSKELETON_H
#define VGSKELETON_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VGSkeletonDefinition.h"

@interface VGSkeleton : NSObject <NSSecureCoding>



@property (nonatomic) ? floorAlignedRootTransform; // ivar: _floorAlignedRootTransform
@property (retain, nonatomic) NSArray *jointConfidence; // ivar: _jointConfidence
@property (retain, nonatomic) NSArray *localPoses; // ivar: _localPoses
@property (retain, nonatomic) NSArray *modelPoses; // ivar: _modelPoses
@property (nonatomic) ? rootTransform; // ivar: _rootTransform
@property (retain, nonatomic) VGSkeletonDefinition *skeletonDefinition; // ivar: _skeletonDefinition
@property (nonatomic) int skeletonType; // ivar: _skeletonType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif