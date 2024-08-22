// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIXPCINTERNALSERVICELISTENER_H
#define TRIXPCINTERNALSERVICELISTENER_H

@class NSXPCInterface, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "TRIXPCInternalServiceWrapper.h"

@interface TRIXPCInternalServiceListener : NSObject <NSXPCListenerDelegate>

 {
    TRIXPCInternalServiceWrapper *_wrapper;
    NSXPCInterface *_interface;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithServerContextPromise:(id)arg0 ;


@end


#endif