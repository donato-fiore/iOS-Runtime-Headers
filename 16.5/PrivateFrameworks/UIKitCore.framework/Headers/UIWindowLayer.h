// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWINDOWLAYER_H
#define UIWINDOWLAYER_H

@class CALayer;


#import "UIWindow.h"

@interface UIWindowLayer : CALayer {
    UIWindow *_window;
}




-(id)actionForKey:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setTransform:(struct CATransform3D )arg0 ;


@end


#endif