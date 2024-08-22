// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLALERTSYSTEMSOUNDSTOPTASKSDESCRIPTOR_H
#define TLALERTSYSTEMSOUNDSTOPTASKSDESCRIPTOR_H

@class NSMapTable, NSArray;

#import <Foundation/Foundation.h>

#import "TLAlertStoppingOptions.h"

@interface TLAlertSystemSoundStopTasksDescriptor : NSObject

@property (retain, nonatomic) NSMapTable *interruptedAlertsToSound; // ivar: _interruptedAlertsToSound
@property (copy, nonatomic) TLAlertStoppingOptions *options; // ivar: _options
@property (copy, nonatomic) NSArray *playbackCompletionContextsToProcess; // ivar: _playbackCompletionContextsToProcess
@property (nonatomic) NSInteger playbackCompletionType; // ivar: _playbackCompletionType




@end


#endif