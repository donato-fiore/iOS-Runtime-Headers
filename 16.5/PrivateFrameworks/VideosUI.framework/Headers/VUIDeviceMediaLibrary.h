// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDEVICEMEDIALIBRARY_H
#define VUIDEVICEMEDIALIBRARY_H



#import "VUIMediaLibrary.h"

@interface VUIDeviceMediaLibrary : VUIMediaLibrary

@property (readonly, nonatomic, getter=isInitialUpdateInProgress) BOOL initialUpdateInProgress;
@property (readonly, nonatomic, getter=isUpdating) BOOL updating;


-(void)updateFromCloudWithReason:(NSInteger)arg0 ;
-(void)updateProgressWithCompletionHandler:(id)arg0 ;


@end


#endif