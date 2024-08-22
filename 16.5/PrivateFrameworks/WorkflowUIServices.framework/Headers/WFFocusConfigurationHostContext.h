// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFOCUSCONFIGURATIONHOSTCONTEXT_H
#define WFFOCUSCONFIGURATIONHOSTCONTEXT_H

@class NSExtensionContext;
@protocol WFFocusConfigurationServiceHostProtocol, WFFocusConfigurationHostContextDelegate;



@interface WFFocusConfigurationHostContext : NSExtensionContext <WFFocusConfigurationServiceHostProtocol>



@property (weak, nonatomic) NSObject<WFFocusConfigurationHostContextDelegate> *focusConfigurationDelegate; // ivar: _focusConfigurationDelegate


+(id)_allowedErrorClasses;
+(id)_allowedItemPayloadClasses;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)configurationUIStateDidUpdate:(id)arg0 ;
-(void)didPressButtonWithIdentifier:(id)arg0 cellFrame:(struct CGRect )arg1 ;


@end


#endif