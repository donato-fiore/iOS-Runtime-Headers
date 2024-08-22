// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIANALYTICSSESSION_H
#define TUIANALYTICSSESSION_H


#import <Foundation/Foundation.h>


@interface TUIAnalyticsSession : NSObject

@property (readonly, nonatomic, getter=isSessionActive) BOOL sessionActive; // ivar: _sessionActive


+(id)currentInputModeIdentifier;
+(id)preferredEventName:(id)arg0 ;
-(void)beginSession;
-(void)dealloc;
-(void)endSession;


@end


#endif