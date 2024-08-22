// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVMEDIASOCIALSHAREEXTENSION_H
#define SSVMEDIASOCIALSHAREEXTENSION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSVMediaSocialShareExtension : NSObject {
    SSXPCConnection *_connection;
}


@property (readonly, copy, nonatomic) NSString *extensionIdentifier;


-(id)init;
-(void)getVisibilityWithCompletionBlock:(id)arg0 ;


@end


#endif