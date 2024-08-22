// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISEGMENTEDCONTROLTVSTYLEPROVIDER_H
#define UISEGMENTEDCONTROLTVSTYLEPROVIDER_H



#import "UISegmentedControlOutlineStyleProvider.h"

@interface UISegmentedControlTVStyleProvider : UISegmentedControlOutlineStyleProvider



+(id)_tvDefaultTextColorDisabledSelected;
+(id)_tvDefaultTextColorDisabledUserInterfaceStyleDark;
+(id)_tvDefaultTextColorDisabledUserInterfaceStyleLight;
+(id)_tvDefaultTextColorFocused;
+(id)_tvDefaultTextColorNormalUserInterfaceStyleDark;
+(id)_tvDefaultTextColorNormalUserInterfaceStyleLight;
+(id)_tvDefaultTextColorSelected;
-(BOOL)useGeneratedImages;
-(BOOL)useTVStyleFocusSelection;
-(CGFloat)cornerRadiusForControlSize:(int)arg0 ;
-(CGFloat)defaultHeightForControlSize:(int)arg0 ;
-(CGFloat)dividerWidthForControlSize:(int)arg0 ;
-(CGFloat)selectionIndicatorOverflowForControlSize:(int)arg0 ;
-(id)fontColorForSegment:(id)arg0 enabled:(BOOL)arg1 selected:(BOOL)arg2 state:(NSUInteger)arg3 ;
-(id)fontForControlSize:(int)arg0 selected:(BOOL)arg1 ;


@end


#endif