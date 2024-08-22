// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIP2PAWDLPEERCOLLECTOR_H
#define WIFIP2PAWDLPEERCOLLECTOR_H

@class NSString, NSMutableArray;
@protocol WiFiP2PAWDLPeerQueryXPCDelegate;

#import <Foundation/Foundation.h>


@interface WiFiP2PAWDLPeerCollector : NSObject <WiFiP2PAWDLPeerQueryXPCDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *peers; // ivar: _peers
@property (readonly) Class superclass;


-(id)init;
-(void)addedPeerWithInformation:(id)arg0 completion:(id)arg1 ;


@end


#endif