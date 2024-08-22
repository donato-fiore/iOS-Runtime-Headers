// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRCMATCHPOINTDEVICEQUERY_H
#define TVRCMATCHPOINTDEVICEQUERY_H

@class NSString, HMHomeManager, NSMutableDictionary;
@protocol HMHomeManagerDelegatePrivate, _TVRCMatchPointDeviceQueryDelegate, NSObject;

#import <Foundation/Foundation.h>


@interface TVRCMatchPointDeviceQuery : NSObject <HMHomeManagerDelegatePrivate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_TVRCMatchPointDeviceQueryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHomeManager *homeManager; // ivar: _homeManager
@property (retain, nonatomic) NSObject<NSObject> *homekitActiveAssertion; // ivar: _homekitActiveAssertion
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *wrapperToIdentifierMapping; // ivar: _wrapperToIdentifierMapping


-(id)init;
-(void)_matchPointServiceAdded:(id)arg0 ;
-(void)_matchPointServiceNameChanged:(id)arg0 ;
-(void)_matchPointServiceRemoved:(id)arg0 ;
-(void)_notifyAddedService:(id)arg0 ;
-(void)_notifyRemovedService:(id)arg0 ;
-(void)dealloc;
-(void)homeManagerDidUpdateCurrentHome:(id)arg0 ;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif