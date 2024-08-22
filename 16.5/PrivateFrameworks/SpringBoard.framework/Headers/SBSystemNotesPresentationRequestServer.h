// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMNOTESPRESENTATIONREQUESTSERVER_H
#define SBSYSTEMNOTESPRESENTATIONREQUESTSERVER_H

@class FBServiceClientAuthenticator, BSServiceConnectionListener, NSString;
@protocol BSServiceConnectionListenerDelegate, OS_dispatch_queue, SBSystemNotesPresentationRequestServerDelegate;

#import <Foundation/Foundation.h>


@interface SBSystemNotesPresentationRequestServer : NSObject <BSServiceConnectionListenerDelegate>

 {
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSystemNotesPresentationRequestServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)activate;
-(void)invalidate;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif