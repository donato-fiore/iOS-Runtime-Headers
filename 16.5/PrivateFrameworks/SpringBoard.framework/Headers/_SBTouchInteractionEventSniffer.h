// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBTOUCHINTERACTIONEVENTSNIFFER_H
#define _SBTOUCHINTERACTIONEVENTSNIFFER_H

@class NSString;
@protocol _SBEventSniffing, _SBTouchInteractionEventSnifferDelegate;

#import <Foundation/Foundation.h>

#import "SBWindowScene.h"

@interface _SBTouchInteractionEventSniffer : NSObject <_SBEventSniffing>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SBTouchInteractionEventSnifferDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(void)handleEvent:(id)arg0 ;


@end


#endif