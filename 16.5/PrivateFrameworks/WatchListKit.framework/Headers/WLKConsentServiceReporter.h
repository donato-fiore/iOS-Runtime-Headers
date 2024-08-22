// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKCONSENTSERVICEREPORTER_H
#define WLKCONSENTSERVICEREPORTER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface WLKConsentServiceReporter : NSObject {
    NSXPCConnection *_connection;
    os_unfair_lock_s _xpcLock;
}




-(id)_connection;
-(id)init;
-(void)_invalidationHandler;


@end


#endif