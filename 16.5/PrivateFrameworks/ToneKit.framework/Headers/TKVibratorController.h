// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKVIBRATORCONTROLLER_H
#define TKVIBRATORCONTROLLER_H

@class TLAccessQueue, NSUUID, NSMutableSet;

#import <Foundation/Foundation.h>


@interface TKVibratorController : NSObject {
    TLAccessQueue *_accessQueue;
    NSUUID *_activePlayRequestIdentifier;
    NSMutableSet *_pendingStopRequestIdentifiers;
}


@property (readonly, nonatomic) NSUInteger vibratorState;


-(id)init;
-(unsigned int)_previewVibrationSystemSoundID;
-(void)_turnOffIfAppropriate;
-(void)_vibrationDidCompleteWithPlayRequestIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)turnOff;
-(void)turnOnWithVibrationPattern:(id)arg0 ;


@end


#endif