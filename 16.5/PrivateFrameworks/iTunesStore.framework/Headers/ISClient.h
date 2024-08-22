// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISCLIENT_H
#define ISCLIENT_H

@class NSString, NSDictionary, NSLock;

#import <Foundation/Foundation.h>


@interface ISClient : NSObject

@property (copy) NSString *appleClientApplication; // ivar: _appleClientApplication
@property (readonly) NSString *appleClientVersions; // ivar: _appleClientVersions
@property (copy) NSDictionary *clientProvidedHeaders; // ivar: _clientProvidedHeaders
@property (copy) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSLock *lock; // ivar: _lock
@property (copy) NSString *partnerHeader; // ivar: _partnerHeader
@property (copy) NSString *userAgent; // ivar: _userAgent


+(id)currentClient;
-(id)init;
-(id)localStoreFrontID;
-(void)_softwareMapInvalidatedNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif