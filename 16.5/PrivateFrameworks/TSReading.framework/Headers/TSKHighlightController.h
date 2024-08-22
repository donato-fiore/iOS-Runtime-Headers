// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKHIGHLIGHTCONTROLLER_H
#define TSKHIGHLIGHTCONTROLLER_H

@class CALayer, NSString, TSUImage;
@protocol CALayerDelegate;

#import <Foundation/Foundation.h>


@interface TSKHighlightController : NSObject <CALayerDelegate>

 {
    CALayer *_imageLayer;
    CGRect _overallRect;
    CGAffineTransform _canvasTransform;
    CGAffineTransform _layerTransform;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSUImage *image; // ivar: _image
@property (readonly, nonatomic) CALayer *layer; // ivar: _containingLayer
@property (nonatomic) *CGPath path; // ivar: _path
@property (readonly) Class superclass;
@property (nonatomic) CGAffineTransform transform;
@property (nonatomic) CGFloat viewScale; // ivar: _viewScale


-(BOOL)drawRoundedRect;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(struct CGRect )buildLayersForPath:(struct CGPath *)arg0 withImage:(id)arg1 ;
-(void)createLayerWithZOrder:(CGFloat)arg0 contentsScaleForLayers:(CGFloat)arg1 ;
-(void)dealloc;
-(void)disconnect;
-(void)hide;
-(void)reset;
-(void)setCanvasTransform:(struct CGAffineTransform )arg0 layerTransform:(struct CGAffineTransform )arg1 ;


@end


#endif