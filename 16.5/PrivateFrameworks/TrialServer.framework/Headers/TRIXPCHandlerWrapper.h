// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIXPCHANDLERWRAPPER_H
#define TRIXPCHANDLERWRAPPER_H

@class Protocol;

#import <Foundation/Foundation.h>


@interface TRIXPCHandlerWrapper : NSObject {
    NSObject *_underlying;
    Protocol *_protocol;
}




+(id)_symbolicatedBacktraceWithAddresses:(id)arg0 unresolvedSymbols:(id)arg1 ;
-(id)initWithUnderlyingHandler:(id)arg0 forProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif