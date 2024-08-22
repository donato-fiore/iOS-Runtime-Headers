// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKHIGHLIGHTARRAYCONTROLLER_H
#define TSKHIGHLIGHTARRAYCONTROLLER_H

@class NSMutableArray, NSArray;
@protocol TSKPulseAnimationControllerProtocol, TSKHighlightArrayControllerProtocol;

#import <Foundation/Foundation.h>


@interface TSKHighlightArrayController : NSObject <TSKPulseAnimationControllerProtocol>

 {
    NSMutableArray *_controllers;
    CGFloat _zOrder;
    id<TSKHighlightArrayControllerProtocol> *_delegate;
    BOOL _creatingLayers;
    CGAffineTransform _canvasTransform;
    CGAffineTransform _layerTransform;
}


@property (nonatomic) BOOL autohide; // ivar: _autohide
@property (readonly, nonatomic) NSArray *layers; // ivar: _layers
@property (nonatomic) BOOL pulsating; // ivar: _pulsating
@property (nonatomic) BOOL shouldPulsate; // ivar: _shouldPulsate
@property (nonatomic) CGAffineTransform transform;
@property (nonatomic) CGFloat viewScale; // ivar: _viewScale


-(id)buildHighlightsForSearchReferences:(id)arg0 contentsScaleForLayers:(CGFloat)arg1 ;
-(id)initWithZOrder:(CGFloat)arg0 delegate:(id)arg1 ;
-(void)dealloc;
-(void)disconnect;
-(void)pulseAnimationDidStopForPulse:(id)arg0 ;
-(void)reset;
-(void)setCanvasTransform:(struct CGAffineTransform )arg0 layerTransform:(struct CGAffineTransform )arg1 ;
-(void)startAnimating;
-(void)stop;


@end


#endif