// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTUREPORTALSOURCEINFOREQUESTSERVER_H
#define SBSYSTEMAPERTUREPORTALSOURCEINFOREQUESTSERVER_H

@class BSServiceConnectionListener, SBSPortalSource, FBServiceClientAuthenticator, NSString;
@protocol SBSSystemAperturePortalSourceInfoRequestClientToServerInterface, BSServiceConnectionListenerDelegate;

#import <Foundation/Foundation.h>


@interface SBSystemAperturePortalSourceInfoRequestServer : NSObject <SBSSystemAperturePortalSourceInfoRequestClientToServerInterface, BSServiceConnectionListenerDelegate>

 {
    BSServiceConnectionListener *_connectionListener;
    SBSPortalSource *_rootSystemApertureWindowPortalSource;
    FBServiceClientAuthenticator *_serviceClientAuthenticator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPortalSource:(id)arg0 ;
-(void)dealloc;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)rootWindowPortalSourceWithCompletion:(id)arg0 ;
-(void)startListener;


@end


#endif