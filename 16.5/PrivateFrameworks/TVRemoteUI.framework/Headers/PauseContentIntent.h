// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAUSECONTENTINTENT_H
#define PAUSECONTENTINTENT_H

@class INIntent;


#import "TVRDevice.h"

@interface PauseContentIntent : INIntent

@property (copy, nonatomic) TVRDevice *device;
@property (nonatomic) NSInteger mediaCommand;




@end


#endif