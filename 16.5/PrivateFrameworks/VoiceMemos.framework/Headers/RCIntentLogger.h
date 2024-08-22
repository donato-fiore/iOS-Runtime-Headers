// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCINTENTLOGGER_H
#define RCINTENTLOGGER_H


#import <Foundation/Foundation.h>


@interface RCIntentLogger : NSObject



+(id)interactionForPlaybackVoiceMemo;
+(id)interactionForRecordVoiceMemo;
+(void)_donateInteraction:(id)arg0 ;
+(void)deleteInteractionsWithUUID:(id)arg0 ;
+(void)deleteInteractionsWithUUIDs:(id)arg0 ;
+(void)donatePlaybackVoiceMemoIntentWithUUID:(id)arg0 ;
+(void)donateRecordVoiceMemoIntentWithUUID:(id)arg0 ;


@end


#endif