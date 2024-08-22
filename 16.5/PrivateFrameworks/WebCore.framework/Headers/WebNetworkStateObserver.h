// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBNETWORKSTATEOBSERVER_H
#define WEBNETWORKSTATEOBSERVER_H


#import <Foundation/Foundation.h>


@interface WebNetworkStateObserver : NSObject {
    BlockPtr<void ()> block;
}




-(id)initWithBlock:(id)arg0 ;
-(void)networkStateChanged:(id)arg0 ;


@end


#endif