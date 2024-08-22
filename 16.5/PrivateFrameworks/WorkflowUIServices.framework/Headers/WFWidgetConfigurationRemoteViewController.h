// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWIDGETCONFIGURATIONREMOTEVIEWCONTROLLER_H
#define WFWIDGETCONFIGURATIONREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol WFWidgetConfigurationServiceHostProtocol, WFWidgetConfigurationRemoteViewControllerDelegate;



@interface WFWidgetConfigurationRemoteViewController : UIRemoteViewController <WFWidgetConfigurationServiceHostProtocol>



@property (weak, nonatomic) NSObject<WFWidgetConfigurationRemoteViewControllerDelegate> *delegate; // ivar: _delegate


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)intentWasConfigured:(id)arg0 ;
-(void)preferredCardSizeDidUpdate:(struct CGSize )arg0 ;
-(void)requestViewControllerDismissal;
-(void)setConfigurationCardViewFrame:(struct CGRect )arg0 ;


@end


#endif