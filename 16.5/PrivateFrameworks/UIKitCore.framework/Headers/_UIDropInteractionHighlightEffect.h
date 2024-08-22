// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDROPINTERACTIONHIGHLIGHTEFFECT_H
#define _UIDROPINTERACTIONHIGHLIGHTEFFECT_H

@class NSString, CAShapeLayer;
@protocol UIDropInteractionEffect;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface _UIDropInteractionHighlightEffect : NSObject <UIDropInteractionEffect>

 {
    NSInteger _visualState;
}


@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (nonatomic) CGFloat highlightInset; // ivar: _highlightInset
@property (nonatomic) CGFloat highlightWidth; // ivar: _highlightWidth
@property (retain, nonatomic) CAShapeLayer *shapeLayer; // ivar: _shapeLayer
@property (readonly) Class superclass;


-(id)init;
-(id)updateShapeLayerForFrame:(struct CGRect )arg0 inView:(id)arg1 ;
-(struct CGRect )clippingRectInView:(id)arg0 forView:(id)arg1 ;
-(struct CGRect )highlightRectInView:(id)arg0 forDragInteraction:(id)arg1 withContext:(id)arg2 ;
-(void)dealloc;
-(void)interaction:(id)arg0 didChangeWithContext:(id)arg1 ;
-(void)removeShapeLayer;


@end


#endif