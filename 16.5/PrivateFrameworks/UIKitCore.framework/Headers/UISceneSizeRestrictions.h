// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISCENESIZERESTRICTIONS_H
#define UISCENESIZERESTRICTIONS_H


#import <Foundation/Foundation.h>

#import "UIWindowScene.h"

@interface UISceneSizeRestrictions : NSObject {
    BOOL _hasAutomaticMinimumSize;
    BOOL _hasAutomaticMaximumSize;
    UIWindowScene *_scene;
}


@property (nonatomic) BOOL allowsFullScreen; // ivar: _allowsFullScreen
@property (nonatomic) CGSize maximumSize; // ivar: _maximumSize
@property (nonatomic) CGSize minimumSize; // ivar: _minimumSize


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(id)_initWithScene:(id)arg0 ;


@end


#endif