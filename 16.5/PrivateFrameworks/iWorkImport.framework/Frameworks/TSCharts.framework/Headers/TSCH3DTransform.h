// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DTRANSFORM_H
#define TSCH3DTRANSFORM_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCH3DTransform : NSObject <NSCopying>

 {
    tvec3<float> _translation;
    tvec3<float> _scaleFactor;
    tquat<float> _rotation;
    tvec3<float> _center;
    tmat4x4<float> _matrix;
    BOOL _dirty;
}


@property (nonatomic) tvec3<float> center;
@property (nonatomic) tquat<float> rotation;
@property (nonatomic) tvec3<float> scaleFactor;
@property (nonatomic) tvec3<float> translation;


+(id)transform;
-(*void)transform;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(struct Transform )asTSCH3DCPPTransform;


@end


#endif