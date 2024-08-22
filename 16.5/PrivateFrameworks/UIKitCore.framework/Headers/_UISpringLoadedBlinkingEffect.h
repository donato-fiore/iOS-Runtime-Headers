// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISPRINGLOADEDBLINKINGEFFECT_H
#define _UISPRINGLOADEDBLINKINGEFFECT_H

@class CALayer, NSString;
@protocol UISpringLoadedInteractionEffect;

#import <Foundation/Foundation.h>


@interface _UISpringLoadedBlinkingEffect : NSObject <UISpringLoadedInteractionEffect>



@property (retain, nonatomic) CALayer *blinkLayer; // ivar: _blinkLayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)blinkAnimation;
-(void)_prepareLayer:(id)arg0 forView:(id)arg1 ;
-(void)interaction:(id)arg0 didChangeWithContext:(id)arg1 ;


@end


#endif