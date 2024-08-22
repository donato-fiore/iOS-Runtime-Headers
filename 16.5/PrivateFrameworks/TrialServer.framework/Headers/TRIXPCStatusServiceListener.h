// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIXPCSTATUSSERVICELISTENER_H
#define TRIXPCSTATUSSERVICELISTENER_H

@class NSXPCInterface, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "TRIXPCServerContextPromise.h"

@interface TRIXPCStatusServiceListener : NSObject <NSXPCListenerDelegate>

 {
    NSXPCInterface *_interface;
    TRIXPCServerContextPromise *_promise;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithPromise:(id)arg0 ;


@end


#endif