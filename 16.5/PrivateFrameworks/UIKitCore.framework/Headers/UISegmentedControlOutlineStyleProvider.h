// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISEGMENTEDCONTROLOUTLINESTYLEPROVIDER_H
#define UISEGMENTEDCONTROLOUTLINESTYLEPROVIDER_H



#import "UISegmentedControlDefaultStyleProvider.h"

@interface UISegmentedControlOutlineStyleProvider : UISegmentedControlDefaultStyleProvider



-(BOOL)animateSelectionSliding;
-(BOOL)useSelectionIndicatorStyling;
-(CGFloat)defaultContentPaddingWidth;
-(CGFloat)defaultHeightForControlSize:(int)arg0 ;
-(CGFloat)defaultTextContentPaddingWidth;
-(id)fontColorForSegment:(id)arg0 enabled:(BOOL)arg1 selected:(BOOL)arg2 state:(NSUInteger)arg3 ;
-(id)fontForControlSize:(int)arg0 selected:(BOOL)arg1 ;


@end


#endif