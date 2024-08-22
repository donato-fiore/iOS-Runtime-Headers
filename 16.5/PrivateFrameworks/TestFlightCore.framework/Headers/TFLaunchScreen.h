// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TFLAUNCHSCREEN_H
#define TFLAUNCHSCREEN_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>

#import "TFAppLockup.h"

@interface TFLaunchScreen : NSObject

@property (readonly, nonatomic) NSURL *howToScreenshotSupportUrl; // ivar: _howToScreenshotSupportUrl
@property (readonly, nonatomic) TFAppLockup *lockup; // ivar: _lockup
@property (readonly, copy, nonatomic) NSString *testerNotes; // ivar: _testerNotes


-(id)initWithLockup:(id)arg0 testerNotes:(id)arg1 howToScreenshotSupportUrl:(id)arg2 ;


@end


#endif