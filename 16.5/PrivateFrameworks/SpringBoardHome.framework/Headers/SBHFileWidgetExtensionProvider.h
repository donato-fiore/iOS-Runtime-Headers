// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHFILEWIDGETEXTENSIONPROVIDER_H
#define SBHFILEWIDGETEXTENSIONPROVIDER_H



#import "SBHRecentsDocumentExtensionProvider.h"

@interface SBHFileWidgetExtensionProvider : SBHRecentsDocumentExtensionProvider

@property (nonatomic) BOOL widgetHasTransparentBackground; // ivar: _widgetHasTransparentBackground


-(BOOL)_extensionHasTransparencyEntitlement:(id)arg0 ;
-(BOOL)recentsDocumentExtensionWrappingViewControllerHasTransparentContent:(id)arg0 ;
-(id)_preferredExtensionIdentifier;
-(id)filesWidgetViewControllerWithConfiguration:(id)arg0 ;
-(id)init;
-(void)_setupHostViewController:(id)arg0 ;
-(void)setWidgetConfiguration:(id)arg0 ;


@end


#endif