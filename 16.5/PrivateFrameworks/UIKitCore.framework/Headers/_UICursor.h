// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICURSOR_H
#define _UICURSOR_H



#import "UIPointerShape.h"

@interface _UICursor : UIPointerShape



+(id)beamWithPreferredLength:(CGFloat)arg0 axis:(NSUInteger)arg1 ;
+(id)cursorWithPath:(id)arg0 ;
+(id)cursorWithRoundedRect:(struct CGRect )arg0 ;
+(id)cursorWithRoundedRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 ;
+(id)linkCursor;


@end


#endif