// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRANSPARENCYXPCINTERFACE_H
#define TRANSPARENCYXPCINTERFACE_H

@class NSString;
@protocol TransparencyXPCProtocol;

#import <Foundation/Foundation.h>


@interface TransparencyXPCInterface : NSObject <TransparencyXPCProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)interface;


@end


#endif