// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCARDITEMSCONTROLLER_H
#define SBSCARDITEMSCONTROLLER_H

@class NSString, NSXPCConnection;
@protocol SBSCardItemsControllerRemoteInterface;

#import <Foundation/Foundation.h>


@interface SBSCardItemsController : NSObject <SBSCardItemsControllerRemoteInterface>

 {
    NSString *_identifier;
    NSXPCConnection *_connection;
    BOOL _connected;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_remoteInterfaceWithErrorHandler:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_connectToServerIfNecessary;
-(void)_invalidateConnection;
-(void)_noteConnectionDropped;
-(void)dealloc;
-(void)getCardItemsWithHandler:(id)arg0 ;
-(void)setCardItems:(id)arg0 ;


@end


#endif