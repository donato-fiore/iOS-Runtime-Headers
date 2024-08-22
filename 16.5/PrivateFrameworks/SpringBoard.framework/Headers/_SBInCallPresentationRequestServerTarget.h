// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBINCALLPRESENTATIONREQUESTSERVERTARGET_H
#define _SBINCALLPRESENTATIONREQUESTSERVERTARGET_H

@class NSUUID, BSServiceConnection, NSString;
@protocol SBSInCallPresentationClientToServerInterface;

#import <Foundation/Foundation.h>


@interface _SBInCallPresentationRequestServerTarget : NSObject <SBSInCallPresentationClientToServerInterface>



@property (readonly, copy, nonatomic) NSUUID *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, weak, nonatomic) BSServiceConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBSInCallPresentationClientToServerInterface> *proxyInterface; // ivar: _proxyInterface
@property (readonly) Class superclass;


+(id)currentTarget;
-(id)initWithConnection:(id)arg0 proxyInterface:(id)arg1 ;
-(void)_performBlock:(id)arg0 ;
-(void)presentWithConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif