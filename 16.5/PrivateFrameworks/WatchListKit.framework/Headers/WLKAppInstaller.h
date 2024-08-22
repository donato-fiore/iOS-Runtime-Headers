// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKAPPINSTALLER_H
#define WLKAPPINSTALLER_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WLKAppInstaller : NSObject {
    NSObject<OS_dispatch_queue> *_installQueue;
    NSMutableSet *_installSessions;
}




+(id)defaultAppInstaller;
-(id)init;
// -(void)installAppForInstallable:(id)arg0 offer:(id)arg1 progressHandler:(id)arg2 completion:(unk)arg3  ;
// -(void)installAppForInstallable:(id)arg0 progressHandler:(id)arg1 completion:(unk)arg2  ;


@end


#endif