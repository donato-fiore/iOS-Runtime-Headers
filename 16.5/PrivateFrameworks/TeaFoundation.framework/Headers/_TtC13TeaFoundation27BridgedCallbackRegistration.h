// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13TEAFOUNDATION27BRIDGEDCALLBACKREGISTRATION_H
#define _TTC13TEAFOUNDATION27BRIDGEDCALLBACKREGISTRATION_H

@protocol TFCallbackRegistration;

#import <Foundation/Foundation.h>


@interface _TtC13TeaFoundation27BridgedCallbackRegistration : NSObject <TFCallbackRegistration>

 {
    ? callback;
}




-(id)init;
-(void)whenResolvingClass:(Class)arg0 scope:(id)arg1 callbackBlock:(id)arg2 ;
-(void)whenResolvingProtocol:(id)arg0 scope:(id)arg1 callbackBlock:(id)arg2 ;


@end


#endif