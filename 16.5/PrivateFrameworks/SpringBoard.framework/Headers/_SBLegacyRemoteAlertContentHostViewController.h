// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBLEGACYREMOTEALERTCONTENTHOSTVIEWCONTROLLER_H
#define _SBLEGACYREMOTEALERTCONTENTHOSTVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol SBSUIRemoteAlertItemContentHostInterface;



@interface _SBLegacyRemoteAlertContentHostViewController : UIRemoteViewController <SBSUIRemoteAlertItemContentHostInterface>

 {
    BOOL _serviceHasSetPreferredContentSize;
}


@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *serviceClassName; // ivar: _serviceClassName


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(id)description;
-(void)_getPreferredContentSizeWithReplyBlock:(id)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif