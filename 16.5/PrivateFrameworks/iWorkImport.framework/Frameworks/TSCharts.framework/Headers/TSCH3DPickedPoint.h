// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DPICKEDPOINT_H
#define TSCH3DPICKEDPOINT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCH3DSceneObject.h"

@interface TSCH3DPickedPoint : NSObject <NSCopying>



@property (readonly, nonatomic) tvec3<float> cameraSpacePoint;
@property (readonly, nonatomic) tvec2<float> centerProjectionPoint; // ivar: _centerProjectionPoint
@property (readonly, nonatomic) tvec2<int> element; // ivar: _element
@property (readonly, nonatomic) tvec3<float> objectSpacePoint; // ivar: _objectSpacePoint
@property (readonly, nonatomic) tmat4x4<float> projection; // ivar: _projection
@property (readonly, retain, nonatomic) TSCH3DSceneObject *sceneObject; // ivar: _sceneObject
@property (readonly, nonatomic) tmat4x4<float> transform; // ivar: _transform


+(id)pickedPointWithSceneObject:(id)arg0 element:(*void)arg1 projection:(*void)arg2 transform:(*void)arg3 objectSpacePoint:(*void)arg4 centerProjectionPoint:(*void)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSceneObject:(id)arg0 element:(*void)arg1 projection:(*void)arg2 transform:(*void)arg3 objectSpacePoint:(*void)arg4 centerProjectionPoint:(*void)arg5 ;


@end


#endif