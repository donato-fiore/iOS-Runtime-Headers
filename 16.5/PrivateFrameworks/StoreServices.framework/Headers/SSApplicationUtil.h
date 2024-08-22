// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSAPPLICATIONUTIL_H
#define SSAPPLICATIONUTIL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSApplicationUtil : NSObject {
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_serialQueue;
}




-(id)_connection;
-(id)init;
-(void)restartApplication:(id)arg0 ;


@end


#endif