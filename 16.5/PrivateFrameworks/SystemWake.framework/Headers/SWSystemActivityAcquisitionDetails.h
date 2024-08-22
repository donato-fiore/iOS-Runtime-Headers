// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWSYSTEMACTIVITYACQUISITIONDETAILS_H
#define SWSYSTEMACTIVITYACQUISITIONDETAILS_H

@class NSString;
@protocol SWSystemActivityAcquisitionDetails;

#import <Foundation/Foundation.h>


@interface SWSystemActivityAcquisitionDetails : NSObject <SWSystemActivityAcquisitionDetails>



@property (readonly, nonatomic) BOOL afterFailingToRevertPendingSleep; // ivar: _afterFailingToRevertPendingSleep
@property (readonly, nonatomic) BOOL afterPendingSleepWasAlreadyInitiated; // ivar: _afterPendingSleepWasAlreadyInitiated
@property (readonly, nonatomic) BOOL afterSleepOfNonZeroDuration; // ivar: _afterSleepOfNonZeroDuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAfterPendingSleepWasAlreadyInitiated:(BOOL)arg0 afterFailingToRevertPendingSleep:(BOOL)arg1 afterSleepOfNonZeroDuration:(BOOL)arg2 ;


@end


#endif