// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFOCUSCONFIGURATIONREMOTEVIEWCONTROLLER_H
#define WFFOCUSCONFIGURATIONREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol WFFocusConfigurationServiceHostProtocol, WFFocusConfigurationHostContextDelegate, WFFocusConfigurationRemoteViewControllerDelegate;


#import "WFFocusConfigurationHostContext.h"

@interface WFFocusConfigurationRemoteViewController : UIRemoteViewController <WFFocusConfigurationServiceHostProtocol, WFFocusConfigurationHostContextDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFFocusConfigurationRemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFFocusConfigurationHostContext *serviceContext; // ivar: _serviceContext
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)configurationUIStateDidUpdate:(id)arg0 ;
-(void)didPressButtonWithIdentifier:(id)arg0 cellFrame:(struct CGRect )arg1 ;
-(void)focusConfigurationHostContext:(id)arg0 configurationUIStateDidChange:(id)arg1 ;
-(void)focusConfigurationHostContext:(id)arg0 didPressButtonWithIdentifier:(id)arg1 cellFrame:(struct CGRect )arg2 ;
-(void)notifyDelegateWithConfigurationUIState:(id)arg0 ;
-(void)notifyDelegateWithPressedButtonIdentifier:(id)arg0 cellFrame:(struct CGRect )arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif