// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTKKEYBOARDPLANE_H
#define TTKKEYBOARDPLANE_H

@class UIKBTree;

#import <Foundation/Foundation.h>

#import "ACTKeyboardLayoutUtils.h"

@interface TTKKeyboardPlane : NSObject {
    UIKBTree *_keyplane;
    ACTKeyboardLayoutUtils *_layoutUtils;
}


@property (readonly, nonatomic) CGRect frame;


-(id)findKey:(id)arg0 ;
-(id)initWithUIKBTree:(id)arg0 layoutUtils:(id)arg1 ;
-(id)initWithUIKBTree:(id)arg0 locale:(id)arg1 ;
-(id)jsonFrameArrayForWord:(id)arg0 ;


@end


#endif