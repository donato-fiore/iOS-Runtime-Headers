// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNANIMATIONCONTEXT_H
#define KNANIMATIONCONTEXT_H

@class TSDCapabilities, CALayer;

#import <Foundation/Foundation.h>


@interface KNAnimationContext : NSObject

@property (readonly, nonatomic) TSDCapabilities *capabilities; // ivar: _capabilities
@property (nonatomic) *CGColorSpace colorSpace; // ivar: _colorSpace
@property (readonly, nonatomic) CGFloat fieldOfViewInRadians; // ivar: _fieldOfViewInRadians
@property (nonatomic) CGFloat pixelAspectRatio; // ivar: _pixelAspectRatio
@property (readonly, nonatomic) CALayer *showLayer; // ivar: _showLayer
@property (readonly, nonatomic) CGFloat showScale;
@property (readonly, nonatomic) CATransform3D slideProjectionMatrix; // ivar: _slideProjectionMatrix
@property (readonly, nonatomic) CGRect slideRect; // ivar: _slideRect
@property (readonly, nonatomic) CGRect unscaledSlideRect; // ivar: _unscaledSlideRect
@property (readonly, nonatomic) CGFloat viewScale; // ivar: _viewScale


-(id)init;
-(id)initWithShowSize:(struct CGSize )arg0 viewScale:(CGFloat)arg1 showLayer:(id)arg2 ;
-(void)dealloc;
-(void)updateGeometryToFitShowLayerAtViewScale:(CGFloat)arg0 ;


@end


#endif