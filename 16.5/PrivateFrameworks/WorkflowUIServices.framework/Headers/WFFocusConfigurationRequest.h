// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFOCUSCONFIGURATIONREQUEST_H
#define WFFOCUSCONFIGURATIONREQUEST_H

@class LNAction, LNFullyQualifiedActionIdentifier, WFContextualAction, NSArray, WFColor, LNFocusConfigurationSuggestionContext;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFFocusConfigurationRequest : NSObject <NSSecureCoding>



@property (copy, nonatomic) LNAction *action; // ivar: _action
@property (readonly, copy, nonatomic) LNFullyQualifiedActionIdentifier *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, nonatomic) WFContextualAction *contextualAction; // ivar: _contextualAction
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, copy, nonatomic) NSArray *footerButtons; // ivar: _footerButtons
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, copy, nonatomic) WFColor *mastheadTintColor; // ivar: _mastheadTintColor
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly, nonatomic) BOOL showsEnablementButton; // ivar: _showsEnablementButton
@property (readonly, copy, nonatomic) LNFocusConfigurationSuggestionContext *suggestionContext; // ivar: _suggestionContext


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContextualAction:(id)arg0 footerButtons:(id)arg1 showsEnablementButton:(BOOL)arg2 isEnabled:(BOOL)arg3 mastheadTintColor:(id)arg4 ;
-(id)initWithContextualActionOptions:(id)arg0 ;
-(id)initWithFocusConfigurationActionIdentifier:(id)arg0 action:(id)arg1 suggestionContext:(id)arg2 footerButtons:(id)arg3 showsEnablementButton:(BOOL)arg4 isEnabled:(BOOL)arg5 ;
-(id)initWithOptions:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadFocusActionWithCompletion:(id)arg0 ;


@end


#endif