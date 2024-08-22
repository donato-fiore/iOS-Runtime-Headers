// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCQUICKACTIONMENUTUPLE_H
#define VKCQUICKACTIONMENUTUPLE_H

@class DDUIAction, UIMenu;

#import <Foundation/Foundation.h>

#import "VKCActionInfoButton.h"
#import "VKCBaseDataDetectorElement.h"

@interface VKCQuickActionMenuTuple : NSObject

@property (retain, nonatomic) VKCActionInfoButton *button; // ivar: _button
@property (retain, nonatomic) DDUIAction *defaultAction; // ivar: _defaultAction
@property (retain, nonatomic) VKCBaseDataDetectorElement *element; // ivar: _element
@property (retain, nonatomic) UIMenu *menu; // ivar: _menu




@end


#endif