// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPTEXTMAGNIFIERHORIZONTALRANGED_H
#define TSWPTEXTMAGNIFIERHORIZONTALRANGED_H



#import "TSWPTextMagnifierRanged.h"

@interface TSWPTextMagnifierHorizontalRanged : TSWPTextMagnifierRanged

@property (nonatomic) BOOL shouldIgnoreTextInputEditor; // ivar: _shouldIgnoreTextInputEditor


+(id)sharedRangedMagnifier;
-(BOOL)shouldHideCanvasLayer;
-(CGFloat)currentOffset;
-(id)initWithDefaultFrame;
-(id)maskImageName;
-(id)overlayImageName;
-(id)underlayImageName;
-(void)beginMagnifyingTarget:(id)arg0 magnificationPoint:(struct CGPoint )arg1 offset:(struct CGPoint )arg2 animated:(BOOL)arg3 ;
-(void)dealloc;
-(void)drawMagnifierClippedCanvasLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)remove;
-(void)stopMagnifying:(BOOL)arg0 ;
-(void)updateFrame;
-(void)zoomDownAnimation;
-(void)zoomUpAnimation;


@end


#endif