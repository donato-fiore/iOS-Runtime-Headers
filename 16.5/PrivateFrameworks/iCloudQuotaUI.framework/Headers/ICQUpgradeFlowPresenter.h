// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUPGRADEFLOWPRESENTER_H
#define ICQUPGRADEFLOWPRESENTER_H

@class NSString;
@protocol ICQUpgradeFlowManagerDelegate;

#import <Foundation/Foundation.h>


@interface ICQUpgradeFlowPresenter : NSObject <ICQUpgradeFlowManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)presentFlowWithContext:(id)arg0 completion:(id)arg1 ;
-(void)upgradeFlowManagerDidCancel:(id)arg0 ;
-(void)upgradeFlowManagerDidComplete:(id)arg0 ;


@end


#endif