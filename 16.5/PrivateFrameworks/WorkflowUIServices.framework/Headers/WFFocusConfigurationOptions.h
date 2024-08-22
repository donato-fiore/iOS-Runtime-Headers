// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFOCUSCONFIGURATIONOPTIONS_H
#define WFFOCUSCONFIGURATIONOPTIONS_H

@class LNAction, LNFullyQualifiedActionIdentifier, NSArray, LNFocusConfigurationSuggestionContext;

#import <Foundation/Foundation.h>


@interface WFFocusConfigurationOptions : NSObject

@property (readonly, copy, nonatomic) LNAction *action; // ivar: _action
@property (readonly, copy, nonatomic) LNFullyQualifiedActionIdentifier *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSArray *footerButtons; // ivar: _footerButtons
@property (readonly, nonatomic) BOOL showsEnablementButton; // ivar: _showsEnablementButton
@property (readonly, copy, nonatomic) LNFocusConfigurationSuggestionContext *suggestionContext; // ivar: _suggestionContext


-(id)initWithFocusConfigurationAction:(id)arg0 ;
-(id)initWithFocusConfigurationActionIdentifier:(id)arg0 action:(id)arg1 ;
-(id)initWithFocusConfigurationActionIdentifier:(id)arg0 action:(id)arg1 suggestionContext:(id)arg2 ;
-(id)initWithFocusConfigurationActionIdentifier:(id)arg0 action:(id)arg1 suggestionContext:(id)arg2 footerButtons:(id)arg3 ;
-(id)initWithFocusConfigurationActionIdentifier:(id)arg0 action:(id)arg1 suggestionContext:(id)arg2 footerButtons:(id)arg3 showsEnablementButton:(BOOL)arg4 isEnabled:(BOOL)arg5 ;


@end


#endif