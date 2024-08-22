// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBFIXEDPOSITIONCONTENT_H
#define WEBFIXEDPOSITIONCONTENT_H


#import <Foundation/Foundation.h>


@interface WebFixedPositionContent : NSObject {
    *void _private;
}




-(BOOL)hasFixedOrStickyPositionLayers;
-(id)initWithWebView:(id)arg0 ;
-(void)dealloc;
-(void)didFinishScrollingOrZooming;
-(void)overflowScrollPositionForLayer:(id)arg0 changedTo:(struct CGPoint )arg1 ;
-(void)scrollOrZoomChanged:(struct CGRect )arg0 ;
-(void)setViewportConstrainedLayers:(*void)arg0 stickyContainerMap:(*void)arg1 ;


@end


#endif