// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDBRUSHSTROKEDIRECTSURFACERENDERINGCONTEXT_H
#define TSDBRUSHSTROKEDIRECTSURFACERENDERINGCONTEXT_H

@class IOSurface;
@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface TSDBrushStrokeDirectSurfaceRenderingContext : NSObject

@property (readonly, nonatomic) CGFloat contentsScale; // ivar: _contentsScale
@property (readonly, nonatomic) *CGColorSpace destinationColorSpaceOverride; // ivar: _destinationColorSpaceOverride
@property (readonly, nonatomic) CGRect frame; // ivar: _frame
@property (readonly, nonatomic) NSObject<MTLDevice> *metalDeviceOverride; // ivar: _metalDeviceOverride
@property (readonly, nonatomic) IOSurface *surface; // ivar: _surface
@property (readonly, nonatomic) CGAffineTransform transform; // ivar: _transform


-(id)initWithSurface:(id)arg0 frame:(struct CGRect )arg1 transform:(struct CGAffineTransform )arg2 contentsScale:(CGFloat)arg3 destinationColorSpaceOverride:(struct CGColorSpace *)arg4 metalDeviceOverride:(id)arg5 ;
-(void)dealloc;


@end


#endif