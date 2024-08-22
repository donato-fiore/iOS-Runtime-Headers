// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLTRANSFORM3D_H
#define TMLTRANSFORM3D_H

@protocol TMLTransform3DJSExports;

#import <Foundation/Foundation.h>

#import "TMLAffineTransform.h"

@interface TMLTransform3D : NSObject <TMLTransform3DJSExports>



@property (readonly, nonatomic) TMLAffineTransform *affineTransform;
@property (nonatomic) CGFloat m11;
@property (nonatomic) CGFloat m12;
@property (nonatomic) CGFloat m13;
@property (nonatomic) CGFloat m14;
@property (nonatomic) CGFloat m21;
@property (nonatomic) CGFloat m22;
@property (nonatomic) CGFloat m23;
@property (nonatomic) CGFloat m24;
@property (nonatomic) CGFloat m31;
@property (nonatomic) CGFloat m32;
@property (nonatomic) CGFloat m33;
@property (nonatomic) CGFloat m34;
@property (nonatomic) CGFloat m41;
@property (nonatomic) CGFloat m42;
@property (nonatomic) CGFloat m43;
@property (nonatomic) CGFloat m44;
@property (readonly, nonatomic) CATransform3D transform; // ivar: _transform


+(void)initializeJSContext:(id)arg0 ;
-(id)CATransform3DValue;
-(id)initWithTransform3D:(struct CATransform3D )arg0 ;


@end


#endif