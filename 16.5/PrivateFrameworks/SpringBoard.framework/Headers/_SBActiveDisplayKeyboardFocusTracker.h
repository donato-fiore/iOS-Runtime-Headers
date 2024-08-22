// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBACTIVEDISPLAYKEYBOARDFOCUSTRACKER_H
#define _SBACTIVEDISPLAYKEYBOARDFOCUSTRACKER_H

@class NSString;
@protocol SBActiveWindowSceneTracking;

#import <Foundation/Foundation.h>

#import "SBWindowScene.h"

@interface _SBActiveDisplayKeyboardFocusTracker : NSObject <SBActiveWindowSceneTracking>



@property (readonly, weak, nonatomic) SBWindowScene *activeWindowScene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif